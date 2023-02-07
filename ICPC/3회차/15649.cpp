#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

/*
백트래킹 - 순열
1) 종료 조건 : true가 된 숫자가 2개일 때 -> bool visited[8]
2) 반복문 : 1 ~ N까지의 자연수 -> int arr[8]
3) 제한 조건 : 중복 불가능
4) 상태 변화 : 사용한 수는 true
5) 다음 단계 : 한 개의 수를 추가로 고른다
6) 원상 복구 : 다시 복귀할 때에는, false로 해주기
*/

int n, m;
int arr[8];
int ans[8];
bool visited[8];

void backtracking(int lv) {
	if (lv == m) { // 1)
		for (int i = 0; i < lv; i++) {
			cout << ans[i] << " ";
		}
		cout << '\n';
	}
	for (int i = 0; i < n; i++) { // 2)
		if (!visited[i]) { // visited가 false일때 = 3)
			visited[i] = true; // 4)
			ans[lv] = arr[i];
			backtracking(lv + 1);
			visited[i] = false; // 6)
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> n >> m;

	for (int i = 0; i < n; i++)
		arr[i] = i + 1; // 숫자 배열에 1 ~ n까지의 자연수 집어넣기

	backtracking(0);

	return 0;
}
