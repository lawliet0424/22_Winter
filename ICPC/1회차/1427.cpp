#include <bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	string num;
	cin >> num;

	sort(num.begin(), num.end());
	reverse(num.begin(), num.end());

	cout << num;
	return 0;
