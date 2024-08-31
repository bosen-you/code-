#include <iostream>
using namespace std;

int main(){
    int n , p;
    cin >> n >> p;
    int a[n];
    for(int i = 0; i < n; i++)  cin >> a[i];
    
    int ans = 0;
    for (int i = 0; i <= n; i++){
        int sums = 0;
        for (int j = i; j < n; j++)
            sums += a[j];
        if (sums < p)   ans = max(ans , sums)
    }
    cout << ans;
    return 0;
}

