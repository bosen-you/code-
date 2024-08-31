#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n , p;
    cin >> n >> p;
    
    int maxs = 0 , i = 1 , flag = 0;
    while (p > 0){
        int s = n , sums = 0;
        while (s--)
            sums += p % 10 , p /= 10;
        if (sums >= maxs)    maxs = sums , flag = i;
        i++;
    }
    cout << flag << " " << maxs;
    return 0;
}

