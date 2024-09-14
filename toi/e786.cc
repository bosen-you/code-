#include <iostream>
#include <string>
using namespace std;
int main(){
    string a , b;
    bool c = true;
    cin >> a;
    
    if (a.size() % 2 !=0)   c = false;
    for (int i = 0; i < a.size() / 2; i++) b+= a[i];
    for (int i = 0; i < a.size() / 2; i++) if (a[i] != a[a.size() - 1 - i])    c = false;
    if (c)  cout << "YES" << "\n" << b;
    else    cout << "NO";
    return 0;
}

