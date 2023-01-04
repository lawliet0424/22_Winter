#include <bits/stdc++.h>
using namespace std;

int arrsrc[26], arrcmp[26]; //첫번째 문자열, 두번째 문자열

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	string s, t;
	int sum = 0;

	cin >> s;
	cin >> t;

	for (auto c : s)
		arrsrc[c - 'a']++;
	for (auto c : t)
		arrcmp[c - 'a']++;

	for (int i = 0; i < 26; i++) {
		if (arrsrc[i] != arrcmp[i]) //같은 경우는 신경쓰지 않아도 되기 때문!
			if (arrsrc[i] > arrcmp[i]) // '최대 - 최소'의 값을 sum에 계속 더해나
				sum += arrsrc[i] - arrcmp[i];
			else
				sum += arrcmp[i] - arrsrc[i];
	}

	cout << sum;
	return 0;
}
