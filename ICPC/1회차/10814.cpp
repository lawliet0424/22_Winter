#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;

struct member {
	int age, num;
	string name;
};

bool compare(member& a, member& b) {
	if (a.age == b.age)
		return a.num < b.num;
	else
		return a.age < b.age;
}

member arr[100001];

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, num;
	string name;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i].age >> arr[i].name;
		arr[i].num = i;
	}

	sort(arr, arr + n, compare);

	for (int i = 0; i < n; i++) {
		cout << arr[i].age << " " << arr[i].name << '\n';
	}
	return 0;
}
