#include <iostream>
#include <algorithm>
#include <string>	// #include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	string n; // 10^5개의 자리 수 -> string으로 처리하기
	ll sum = 0;
	cin >> n;

	sort(n.begin(), n.end(), greater<>()); // o(nlogn) -> 10^5

	if (n[n.length() - 1] != '0') //제일 마지막 원소가 0이 아니면, 10의 배수라는 조건 성립 X
		cout << -1;
	else {
		for (auto c : n)
			sum += c - '0'; // sum이 최대 9 * 10^5이면, int의 범위를 넘어선다. -> long long으로 하기!

		if (sum % 3 == 0)
			cout << n;
		else
			cout << -1;
	}

	return 0;
}
