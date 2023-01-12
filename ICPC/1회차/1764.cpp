/*
찾고자 하는 사람 : 1번, 2번 조건에 모두 해당하는 사람 [인원수, 오름차순]
1번 : 처음 듣는 사람
2번 : 처음 보는 사람
이름 -> 알파벳 소문자로만 구성, 중복되는 이름 X
*/

#include <iostream>
#include <algorithm>
#include <string> // #include <bits/stdc++.h>
using namespace std;

string arr[1000001]; //입력받는 배열


int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, m;
	int sum = 0;
	cin >> n >> m;

	for (int i = 0; i < n + m; i++)
		cin >> arr[i];

	sort(arr, arr + n + m);

	for (int i = 0; i < n + m - 1; i++) {
		if (arr[i] == arr[i + 1])
			sum++;
	}

	cout << sum << '\n';

	for (int i = 0; i < n + m - 1; i++) {
		if (arr[i] == arr[i + 1])
			cout << arr[i] << '\n';
	}

	return 0;
}
