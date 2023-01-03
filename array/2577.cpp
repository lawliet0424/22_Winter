#include <bits/stdc++.h>
using namespace std;

int arr[10]; // 숫자(0~9) 배열

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int A, B, C;
	cin >> A >> B >> C;

	int val = A * B * C;
	
	while (val) {
		arr[val % 10]++; //10으로 나눈 나머지가 숫자 배열의 인덱스(= 숫자 순서)와 동일함
		val /= 10;
	}

	for (int i = 0; i < 10; i++)
		cout << arr[i] << '\n';
}
