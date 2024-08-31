#include <iostream>
using namespace std;

int main(){
    int r , a;
    cin >> r >> a;
    if (r == a){
        int num = r - 3;
        if (num < 3)    cout << num << "+3=" << r;
        else    cout << "3+" << num << '=' << r;
    } 
    else{
        int num = r - a;
        if (a > num)    cout << num << '+' << a << '=' << r;
        else    cout << a << '+' << num << '=' << r;
    }
    return 0;
}

