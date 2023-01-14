#include <iostream>
#include <algorithm>
#include <deque>	// #include <bits/stdc++.h>
using namespace std;

deque <int> arr;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, k, m;
	int turn_val = 0; // 방향값 [방향값 % 2 == 0(정), 방향값 % 2 == 1{역)]
	int sum = 0; // 제거한 사람의 수
	cin >> n >> k >> m;

	for (int i = 1; i <= n; i++)
		arr.push_back(i);

	while (!arr.empty()) {
		if (sum != 0 && sum % m == 0) { // m+1번째 사람을 제거하기 전에, 방향 전환하기
			turn_val++;
		}

		if (turn_val % 2 == 0) { // [정방향]
			for (int i = 1; i <= k - 1; i++) {
				arr.push_back(arr.front());
				arr.pop_front();
			}
			cout << arr.front() << '\n';
			arr.pop_front(); // 첫번째 원소를 제거하기
		}
		else { // [역방향]
			for (int i = 1; i <= k - 1; i++) {
				arr.push_front(arr.back());
				arr.pop_back();
			}
			cout << arr.back() << '\n';
			arr.pop_back(); // 마지막 원소를 제거하기
		}
		sum++; //제거한 사람 수 + 1
	}
	return 0;
}
