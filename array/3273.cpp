#include <bits/stdc++.h>
using namespace std;

int arr[100001]; // 입력받은 숫자들의 나열
int occur[1000001]; // 숫자의 배열 (1 ~ 1000000)

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int num, a, x, sum = 0;

	cin >> num;
	for (int i = 0; i < num; i++)
		cin >> arr[i];

	cin >> x; // 1 ~ 2000000 -> 숫자 배열 occur의 idx에서 이점을 고려해야함!!!
	for (int i = 0; i < num; i++) {
		if (x - arr[i] <= 1000000 && x - arr[i] >= 0) // 양수인 경우 = 정해진 숫자 범위에서 벗어남, 음수인 경우 = x보다 해당 수가 더 커서 의미 X
			if (occur[x - arr[i]] == 1)
				sum++;
		}
		occur[arr[i]] = 1; // 짝이 있는 숫자라면, 나중에 짝이 있는 숫자 차례에서 sum에 +1을 해준다.
	}

	cout << sum;
	return 0;
}
