#include <bits/stdc++.h>
using namespace std;

int A, B;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> A >> B;
    
    if(A > B)
        cout << ">";
    else if(A < B)
        cout << "<";
    else
        cout << "==";
}
