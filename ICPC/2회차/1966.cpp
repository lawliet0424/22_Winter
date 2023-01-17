/*
1) 우선순위 큐 -> 해당 페이지에 부여된 중요도 처리용도 [내림차순]
2) pair<int, int> 큐 -> <중요도, 처음 idx에서의 페이지 위치>
*/

#include <iostream>
#include <queue>
#include <algorithm>	// #include <bits/stdc++.h>
using namespace std;

queue <pair<int, int>> q;
priority_queue <int> pq;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int count = 0; // 순서
	int test_num, n, m, prior_val; //테스트 케이스 횟수, 총 문서수, 궁금한 문서의 idx, 중요도
	cin >> test_num;
	
	while (test_num--) { // 조사할 테스트 케이스의 수
		cin >> n >> m;
		
		for (int i = 0; i < n; i++) {
			cin >> prior_val;

			pq.push(prior_val); // 입력한 중요도를 내림차순으로 정렬함.
			q.push({ prior_val, i }); // 초기 상태를 저장함.
		}

		count = 0; // 반복될때마다 0으로 초기화 해줘야함.
		//q의 첫번째 원소의 중요도를 우선순위 큐에 존재하는 가장 큰 중요도와 비교
		while (!q.empty()) {
			int val = q.front().first; //중요도
			int idx = q.front().second; //초기 상태에서의 페이지 위치
			q.pop();

			if (pq.top() == val) { //중요도가 동일한 경우
				pq.pop(); //해당 중요도의 원소만큼, pq에 중요도가 들어있기 때문에 pop해줘도 상관 X
				++count;
				if (m == idx) { // 찾고자 하는 페이지
					cout << count << '\n';
				}
			}
			else { // 중요도가 동일하지 않으면, 뒤로 보내준다.
				q.push({ val, idx });
			}
		}
	}

	return 0;
}
