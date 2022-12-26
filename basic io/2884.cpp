#include <bits/stdc++.h>
using namespace std;

int h, m;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> h >> m;

    if (m < 45) { //45분 이하인 경우
        m = (60 + m) - 45; // 기존 m에 60분을 더한 뒤에, 45분을 빼기
        if (h == 0)
            h = 23; //예외적인 경우 [0시 -> 23시]
        else
            h -= 1; //일반적인 경우 [기존 h시 -> h-1시]
    }
    else
        m -= 45; //기존 m분에서 45분 빼기

    cout << h << " " << m; //시, 분 출력하기
}
