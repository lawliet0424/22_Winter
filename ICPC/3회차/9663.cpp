#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

/*
백트래킹 - 분기점으로 다시 돌아오기
1) 종료 조건: N개의 퀸을 놓았을 떄
2) 반복문 : 0 ~ N개의 열 탐색 [n개의 퀸을 놓을거라, 행은 생각 X]
3) 제한 조건 : 하나의 퀸이 있는 행과 열, 대각선에는 다른 퀸이 놓이면 안 됨
4) 상태 변화 : 퀸의 열, 대각선 [상향선, 하향선]을 true로 바꾸기
5) 다음 단계 : 다음 행으로 넘어가기 [다른 퀸을 놓으러 가기]
6) 원상 복구: 퀸의 열, 대각선 [상향선, 하향선]을 false로 다시 바꾸기

변수 : int col [15]; bool di1[30]; bool di2[30];
*/

int n, ans;
bool col[15]; // col[i] == true, i열에 퀸 존재
bool di1[30]; // 하향성 (col - row + n) -> 음수가 되는 것을 피하기 위해서
bool di2[30]; // 상향성 (col + row)

void bt_nqueen(int lv) { // 놓은 퀸의 개수 && 현재 있는 행
	if (lv == n) {
		ans++;
		return;
	}
	for (int i = 0; i < n; i++) {
		if (col[i] || di1[i - lv + n] || di2[i + lv])
			continue;
		col[i] = di1[i - lv + n] = di2[i + lv] = true;
		bt_nqueen(lv + 1);
		col[i] = di1[i - lv + n] = di2[i + lv] = false;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> n;

	bt_nqueen(0);
	cout << ans;

	return 0;
}
