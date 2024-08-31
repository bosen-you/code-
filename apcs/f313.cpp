#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int r , c , k , m , num = 0;
    vector<vector<int>> map(55 , vector<int>(55));
    vector<vector<int>> a(55 , vector<int>(55));
    cin >> r >> c >> k >> m;
    for (int i = 0 ; i < r ; i++){
        for (int j = 0; j < c; j++)
            cin >> map[i][j];
    }
    a = map;
    for (int l = 0; l < m ; l++){
        for (int i = 0 ; i < r ; i++){
            for (int j = 0; j < c; j++){
                num = 0;
                if (map[i][j] != -1){
                    if (i != 0 && map[i-1][j] !=-1){
                      a[i-1][j] += map[i][j]/k;
                      num++;
                    }
                    if (j != 0 && map[i][j-1] !=-1){
                        a[i][j-1] += map[i][j]/k;
                        num++;
                    }
                    if (i != r-1 && map[i+1][j] !=-1){
                        a[i+1][j] += map[i][j]/k;
                        num++;
                    }
                    if (j != c-1 && map[i][j+1] !=-1){
                        a[i][j+1] += map[i][j]/k;
                        num++;
                    }
                    a[i][j] -= map[i][j] / k * num;
                }//if
            }//for j
        }//for i
        map = a;
    }//for l
    int maxs = -1 , mins = 100;
    for (int i = 0 ; i < r ; i++){
        for (int j = 0; j < c; j++){
            if (map[i][j] != -1){
                mins = min(mins , map[i][j]);
                maxs = max(maxs , map[i][j]);
            }
            //cout << map[i][j] << " ";
        }
        //cout << endl;
    }
    printf("%d\n%d" , mins , maxs);
    return 0;
}
