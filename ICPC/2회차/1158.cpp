/*
요세푸스 문제 -> 원형큐
why?? 1-(2)-(3)-4-5-(6)-(7) : 배열로 처리하면, O(n^2)의 시간이 필요함.
*/

#include <iostream>
#include <queue>	// #include <bits/stdc++.h>
using namespace std;

queue <int> arr;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, k;
	cin >> n >> k;

	for (int i = 1; i <= n; i++)
		arr.push(i); // 1 ~ n
	
	cout << "<";
	while (arr.size() != 1) {
		for (int i = 0; i < k - 1; i++) {
			arr.push(arr.front()); //k - 1번째 까지 push, pop하기
			arr.pop();
		}

		cout << arr.front() << ", ";
		arr.pop();
	}

	cout << arr.front() << ">"; //마지막 원소의 경우에는 끝에 "," 대신 ">"을 출력
	return 0;
}
