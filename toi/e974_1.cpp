#include <iostream>
#include <vector>
using namespace std;

int main(){
    int r , c , n;
    cin >> r >> c >> n;

    vector<vector<int>> map(r , vector<int>(c));
    int num = 1;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            map[i][j] = num , num++;

    for (int l = 2; l <= n; l++){
        if (l % 2 == 0){
            for (int i = 0; i < r; i++){
                int last = map[i][c-1];
                for (int j = c-1; j > 0; j--)
                    map[i][j] = map[i][j-1];
                map[i][0] = last;
            }
        }
        else{
            vector<int> lastlist = map[r-1];
            for (int i = r-1; i > 0; i--)
                map[i] = map[i-1];
            map[0] = lastlist;
        }
    }

    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            cout << map[i][j];
            if (j != c-1)   cout << " ";
        }
        if (i != r-1)
            cout << endl;
    }
    return 0;
}

