#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int r , c , m;
    int map[11][11] , k[11];
    cin >> r >> c >> m;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> map[i][j];
    for (int i = 0; i < m; i++) cin >> k[i];

    for (int l = m-1; l >= 0; l--){
        int a[11][11] = {0};
        //turn
        if (k[l] == 0){
            for (int i = 0; i < r; i++)
                for (int j = 0; j < c; j++)
                    a[c-1-j][i] = map[i][j];
            //cout << r << " " << c << endl;
            swap(r , c);
            for (int i = 0; i < r; i++)
                for (int j = 0; j < c; j++)
                    map[i][j] = a[i][j];
        }
        //reverse
        else{
            for (int i = 0; i < c; i++)
                for (int j = 0; j < r / 2; j++)
                    swap(map[j][i] , map[r -1-j][i]);
        }
        /*cout << r << c << endl;
        for (int i = 0; i < r; i++){
            for (int j = 0; j < c; j++)
                cout << map[i][j] << " ";
            cout << endl;
        }*/
    }
    cout << r << " " << c << endl;
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            cout << map[i][j];
            if (j != c-1)   cout << " ";
        }
        cout << endl;
    }
    return 0;
}
