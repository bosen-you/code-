#include <iostream>
#include <string>
using namespace std;

int main(){
    int k , q , r;
    string s;
    cin >> k >> q >> r >> s;

    int temp[k];
    string a[25][25];
    for (int i = 0; i < q; i++){
        string cur = "";
        for (int j = 0; j < k; j++) cin >> temp[j];
        for (int j = 0; j < k; j++)
            a[i][temp[j]-1] = s[j]; 
        for (int j = 0; j < k; j++)
            cur += a[i][j]; 
        s = cur;
        cout << cur << endl;
    }
    for (int i = 0; i < r; i++){
        for (int j = 0; j < q; j++)
            cout << a[j][i];
        cout << endl;
    }
}
