#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    string s;
    cin >> s;
    int ans = 0 , len = s.size() , b = 0;

    while (len--)
        ans += int(s[len] - '0') * pow(-1 , b) , b++;

    cout << abs(ans);
}
