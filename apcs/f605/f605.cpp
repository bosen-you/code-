#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n , d;
    cin >> n >> d;
    int s[3] , sums = 0 , flag = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < 3; j++) cin >> s[j];
        sort(s , s+3);
        if (s[2] - s[0] >= d){
            int a = (s[0] + s[1] + s[2]) / 3;
            sums += a;
            flag++;
        }
    }
    cout << flag <<" " << sums;
}

