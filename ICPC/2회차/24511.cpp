/*
queue에 들어가는 값이 queue 형태로 빠져나감.
: front에서 계속해서 input, rear에서 계속해서 output
*/
#include <bits/stdc++.h>
#include <algorithm>
#include <deque>
using namespace std;

deque <int> arr;
int order[100001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, m, val;
	int sum = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> order[i];

	for (int i = 0; i < n; i++) {
		cin >> val;
		if (order[i] == 0)
			arr.push_back(val);
	}

	cin >> m;
	while (m--) {
		cin >> val;

		arr.push_front(val);
		cout << arr.back() << " "; //arr.back()은 deque 'arr'의 마지막 원소를 반환
		arr.pop_back();
	}
	return 0;
}
