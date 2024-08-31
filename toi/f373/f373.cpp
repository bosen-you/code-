#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int flag = n / 2000 , temp = n / 1000;
    
    if (n < 1000)   cout << n << " " << 0;
    else if (n - flag*200 < n - temp * 100)
        cout << n -flag*200 << " " << 0;
    else if (n - flag*200 > n - temp*100)
        cout << n -temp*100 << " " << 1;
    else
        cout << n -temp*100<< " " << 0;

    return 0;
}

