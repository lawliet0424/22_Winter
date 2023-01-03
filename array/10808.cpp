#include <iostream> //#include <bits/stdc++.h>
using namespace std;

int arr[26] = { 0 }; // int arr[26]; -> 전역 변수라서 0으로 자동 초기화됨 && 알파벳에 대한 배열 해당

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	string s;
	cin >> s;

	for (auto c : s)
		arr[c - 'a']++; // 아스키 코드값을 이용하여 알파벳 배열에 +1을 더해나감

	for (int i = 0; i < 26; i++) // for(auto c : s)
		cout << arr[i] << " "; // cout << c << " ";
}
