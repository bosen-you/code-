#include <iostream>
using namespace std;

int main(){
    int t[3] = {1 , 1 , 1} , a[3] = {0} , M[3] = {0}, m[3] = {0} , temp[3] ={0};
    int sums = 0 , num = 1;
    for (int i = 0; i < 3; i++){
        cin >> m[i] >> a[i];
        num *= m[i];
    }
    
    temp[0] = m[1] * m[2] , temp[1] = m[0] * m[2] , temp[2] = m[0] * m[1];
    for (int i = 0; i < 3; i++){
        M[i] = num / m[i];
        //cout << num << " " << m[i] << endl;
        while (temp[i] * t[i] % m[i] != a[i])
            t[i]++;
    }
    
    for (int i = 0; i < 3; i++){
        sums += t[i] * M[i];
        //printf("%d %d\n" , t[i] , M[i]);
    }
    
    int k = 1;
    while (sums - num * k > 0)
        sums -= num * k;
    cout << sums;
    return 0;
}

