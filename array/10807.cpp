#include <bits/stdc++.h>
using namespace std;

int arr[201]; // 정수의 범위가 (-100 ~ 100) 이기에, 배열의 크기는 201이다.

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  
	int n, val, num; // 미리 앞에서 선언하기
	cin >> n;

	while (n--) {
		cin >> val;
		arr[val + 100]++; //idx가 음수가 되지 않도록, +100을 해준다.
	}

	cin >> num;
	cout << arr[num + 100]; //찾고자하는 값의 idx에 바로 접근하기!!!
}
