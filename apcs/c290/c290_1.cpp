#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    int odd = 0 , even = 0;
    for (int i = 0; i < s.size(); i++){
        //cout << s[i] << " " << (int)s[i] << endl;
        if (i % 2 == 0) even += int(s[i] - '0');
        else    odd += int(s[i] - '0');
    }
    cout << abs(odd-even);
}
