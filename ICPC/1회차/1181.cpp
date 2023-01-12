/*
정렬 기준 : 1) 길이가 짧은 것부터 2) 사전순으로 = 오름차순
단, 동일한 문자열은 출력 X -> 출력하기 전에 문자열을 검사할 필요 O
sort()이용하기
*/

#include <iostream>	// #include <bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;

string arr[20001];

bool compare(string& a, string& b) { //문제에서 제시한 1번, 2번 조건
	if (a.length() == b.length())
		return a < b;
	else
		return a.length() < b.length();
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	string c;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + n, compare);

	for (int i = 0; i < n; i++) {
		//이전의 string 값이 저장된 c와 현재 arr[i]를 비교
		//값이 다르면 출력하기
		if (i == 0 || c != arr[i]) {
			cout << arr[i] << '\n';
			c = arr[i];
		}
	}
	return 0;
}
