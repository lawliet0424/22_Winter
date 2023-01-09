#include <bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;

struct member {
	string name;
	int kor, eng, math;
};

bool compare(const member& a, const member& b) {
	if (a.kor == b.kor) {
		if (a.eng == b.eng) {
			if (a.math == b.math) {
				return a.name < b.name; //a와 b의 국어, 영어, 수학 점수가 모두 같은 경우
			}
			return a.math > b.math; //a와 b의 국어, 영어 점수는 같고 수학 점수는 같지 않은 경우
		}
		return a.eng < b.eng; //a와 b의 국어 점수는 같고, 영어 점수는 같지 않은 경우
	}

	return a.kor > b.kor; //a와 b의 국어 점수가 같지 않은 경우
}

member arr[100001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> arr[i].name >> arr[i].kor >> arr[i].eng >> arr[i].math;

	sort(arr, arr + n, compare);

	for (int i = 0; i < n; i++)
		cout << arr[i].name << '\n';

	return 0;
}
