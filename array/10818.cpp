#include <bits/stdc++.h>
using namespace std;

int arr[1000001]; // 같은 데이터를 많이 다루기 때문에, 배열(array) 이용

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	cin >> N;

	int min_val = 1000000;
	int max_val = -1000000;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];

		if (arr[i] < min_val)
			min_val = arr[i];
		if (arr[i] > max_val)
			max_val = arr[i];
	}

	cout << min_val << " " << max_val;
	return 0;
}
