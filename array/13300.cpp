#include <bits/stdc++.h>
using namespace std;

int arr[13]; // idx=0은 사용 X, idx= 1 ~ 6 -> 여학생 && idx = 7 ~ 12 -> 남학생

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, k, s, y, room = 0;
	cin >> n >> k;

	while (n--) {
		cin >> s >> y;
		arr[(s * 6) + y]++; //배열에 학년별 학생수 입력받기
	}

	for (int i = 1; i <= 12; i++) {
		room += arr[i] / k; //학년별 학생수 / 최대수용인원
		if ((arr[i] % k) != 0) // 나머지가 존재하면, 방 하나를 추가하기(room++)
			room++;
	}

	cout << room;
	return 0;
}
