#include <iostream>
#include <string>
using namespace std;

string s;
int flag = 0 , ans = 0;
void cut(int x){    
    if (flag == s.size())  return;
    for (int i = 0; i < 4; i++){
        if (s[flag] == '2'){
            flag++;
            cut(x/2);
        }
        else if (s[flag] == '1'){
            flag++;
            ans += x*x;
        }
        else
            flag++;
    }
}
int main(){
    int n;
    cin >> s >> n;
    
    cut(n);

    cout << ans;
    return 0;
}

