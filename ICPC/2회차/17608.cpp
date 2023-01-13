/*
stack -> 첫번쨰 stack의 top()보다 작거나 같으면, 그냥 통과
		 첫번째 stack의 top()보다 크면!, max = 현재 stack의 top()이 된다.
*/

#include <iostream>
#include <stack>	// #include <bits/stdc++.h>
using namespace std;

stack <int> arr;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, h;
	int max_val = 0, sum = 0;
	cin >> n;

	while (n--) {
		cin >> h;
		arr.push(h);
	}

	while (!arr.empty()) {
		if (max_val < arr.top()) {
			max_val = arr.top();
			sum++;
		}
		arr.pop();
	}

	cout << sum;

	return 0;
}
