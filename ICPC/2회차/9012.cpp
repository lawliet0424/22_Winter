#include <bits/stdc++.h>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;

stack <char> arr;
stack <char> tmp;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int t;
	string c; //문자열로 받아야함
	char val;
	cin >> t;

	while (t--) {
		cin >> c;
		
		for (auto s : c)
			arr.push(s); //문자 하나하나를 stack에 push

		while (!arr.empty()) { //arr에 원소가 없을 때까지 반복
			val = arr.top();
			arr.pop();

			if (tmp.empty()) // 비교할 tmp의 top 원소가 없는 경우 [제일 처음 시작할 때 / 예외적인 경우]
				tmp.push(val);
			else if (val == '(' && tmp.top() == ')') // vps가 '(' = [val], ')' = [tmp.top()]일때만 해당하기 때문이다. 
				tmp.pop();
			else // 하나라도 아닌 경우가 존재하면 tmp의 stack에 문자가 쌓인다.
				tmp.push(val);
		}

		if (tmp.empty()) //true
			cout << "YES" << '\n'; //아무것도 없는 경우
		else {
			while (!tmp.empty()) { //스택 arr, tmp에 계속해서 새로운 값을 넣어야하기 때문에, 초기화를 해준다.
				tmp.pop();
			}

			cout << "NO" << '\n';
		}
	}

	return 0;
}
