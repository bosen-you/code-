#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n , m;
    cin >> n >> m;
    int map[n] = {0} , temp[n];
    for (int i = 0; i < n; i++) temp[i] = 1;

    for (int i = 0; i < m; i++){
        int p , q , r , s;
        cin >> p >> q >> r >> s;
        if (r == 1)
            for (int j = p-1; j < q; j++)
                map[j] += s;
        else
            for (int j = p-1; j < q; j++)
                temp[j] *= s;
    }

    int maxs = 0 , flag = 0;
    for (int i = 0; i < n; i++)
        if (map[i] * temp[i] > maxs)  
            maxs = map[i] * temp[i] , flag = i;

    cout << flag+1 << " " << maxs;
    return 0;
}

