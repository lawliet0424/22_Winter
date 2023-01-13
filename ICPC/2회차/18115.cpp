/*
deque -> 양방향에서 원소를 pop해야함.
결과 : 1, 2, 3, 4, ... , n [오름차순]
결과를 역순으로 연산해서 초기 상태를 구하기
1번 : front에 삽입 || 2번 : front + 1에 삽입 || 3번: rear에 카드를 삽입
*/

#include <iostream>
#include <deque>	// #include <bits/stdc++.h>
using namespace std;

deque <int> init;
int arr[1000001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, val;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> arr[i];


	for (int i = n - 1; i >= 0; i--) { // n부터 1까지의 위치를 역순으로 찾아보기 [내림차순으로 deque에 넣기]
		if (arr[i] == 1)
			init.push_front(n - i); //1번 방법의 역 [front에 원소 삽입]
		else if (arr[i] == 2) {
			val = init.front(); //2번 방법의 역 [front + 1의 위치에 원소 삽입]
			init.pop_front();
			init.push_front(n - i);
			init.push_front(val);
		}
		else // 3번 방법의 역 [rear에 원소 삽입]
			init.push_back(n - i);
	}

	while (!init.empty()) {
		cout << init.front() << " "; //원소 
		init.pop_front();
	}
	return 0;
}
