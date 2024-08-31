#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    n *= 2;
    string map[n] , c , ans[n];
    for (int i = 0; i < n; i += 2)
        cin >> map[i] >> map[i+1];
    cin >> c;
    
    int flag = 0 , k = 0;
    for (int i = 1; i < n; i += 2){
        if (map[i] == c){
            ans[k] = map[i-1];
            k++ , flag++;
        }
    }

    sort(ans , ans+k);
    for (int i = 0; i < k; i++)
        cout << ans[i] << " ";

    if (!flag)  cout << "No";
    return 0;
}

