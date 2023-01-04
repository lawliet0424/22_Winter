#include <bits/stdc++.h>
using namespace std;

int arrsrc[26]; //원본 알파벳 배열
int arrcmp[26]; //비교할 알파벳 배열

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	string s, t;
	int n, result;

	cin >> n;
	while (n--) {
		result = 1;
		fill(arrsrc, arrsrc + 26, 0);
		fill(arrcmp, arrcmp + 26, 0); //입력할 때마다 reset

		cin >> s >> t;

		for (auto c : s)
			arrsrc[c - 'a']++;

		for (auto c : t)
			arrcmp[c - 'a']++;

		for (int i = 0; i < 26; i++) {
			if (arrsrc[i] != arrcmp[i]) {
				result = 0; //비교해서 같지 않은 경우
				break;
			}
		}

		if (result)
			cout << "Possible" << '\n';
		else
			cout << "Impossible" << '\n'; //result값 하나로 가능,불가능 여부 판단 가능
	}
	return 0;
}
