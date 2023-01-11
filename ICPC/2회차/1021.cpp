#include <bits/stdc++.h>
#include <deque>
#include <algorithm>
using namespace std;

deque <int> arr;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, m, idx;
	int sum = 0, num;
	cin >> n >> m;

	for (int i = 0; i < n; i++)
		arr.push_back(i); //빠른 위치 비교를 위해

	while (m--) {
		cin >> idx;
		idx--;

		num = 0; //입력을 받을 때, 계속 num을 초기화하기
		while (arr.front() != idx) { // 찾고자하는 위치가 front일 때! [1번을 실행하기 전의 위치 = '최종 위치']
			arr.push_back(arr.front());
			arr.pop_front();
			num++; // [2번 방법을 이용했을 때의 '최종 위치']
		}

		sum += min(num, n - num); // 2번 방법을 이용하든, 3번 방법을 이용하든 '최종 위치'는 모두 동일 
		arr.pop_front(); // 그 중 횟수가 적은 방법을 sum에 더해주고, front의 값을 삭제 [1번 실행]
		n--; //deque의 전체 크기에서 -1 해주기
	}

	cout << sum; // 최소 이동 횟수 
	return 0;
}
