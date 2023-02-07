#include <bits/stdc++.h>
using namespace std;

/*
완전탐색
*/

int arr[9]; //난쟁이의 키

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int sum = 0;

	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
		sum += arr[i];
	} // 9명의 난쟁이 키의 합

	sort(arr, arr + 9);
	for (int i = 0; i < 9; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (100 == sum - arr[i] - arr[j]) {
				for (int idx = 0; idx < 9; idx++) {
					if (idx != i && idx != j) {
						cout << arr[idx] << '\n';
					}
				}
				return 0;
			}
		}
	}
	return 0;
}
