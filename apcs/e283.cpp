#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    while (cin >> n && !cin.eof()){
        for (int i = 0; i < n; i++){
            int a , b , c , d;
            cin >> a >> b >> c >> d;
            if (a == 0){
                if (b == 1){
                    if (c == 0) cout << "A";
                    else    cout << "B";
                }
                else    cout << "C";
            }
            else{
                if (b == 1){
                    if (d == 1) cout << "D";
                    else    cout << "F";
                }
                else    cout << "E";
            }
        }
        cout << endl;
    }
}
