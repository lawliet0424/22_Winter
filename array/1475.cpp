#include <bits/stdc++.h>
using namespace std;

int arr[10]; // 0~ 9까지의 숫자 배열

int main() {
	int n, val = 0, max_num = 0;
	cin >> n;

	while (n > 0) {
		arr[n % 10]++;
		n /= 10;
	}

	for (int i = 0; i < 10; i++) {
		if (i == 6) {
			val = (arr[i] + arr[9] + 1) / 2; // 만약 홀수라면, +1을 한 경우 몫이 하나 늘어나기에!!
		}
		else if (i == 9) {
			continue; // 보기 쉽게 하기 위해, 그냥 작성함
		}
		else {
			val = arr[i];
		}

		if (val > max_num)
			max_num = val;
	}

	cout << max_num;
	return 0;
}
