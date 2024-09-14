#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n , m , q;
    cin >> n >> m >> q;
    bool dis[205][205] = {};
    for (int i = 0; i < n; i++)
        dis[i][i] = true;

    int a , b;
    for (int i = 0; i < m; i++){
        cin >> a >> b;
        dis[a][b] = true;
    }

    for (int k = 0; k < n; k++)
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                dis[i][j] |= dis[i][k] && dis[k][j];

    for (int i = 0; i < q; i++){
        cin >> a >> b;
        if (dis[a][b])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
