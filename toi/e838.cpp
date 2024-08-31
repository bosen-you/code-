#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    char c;
    char in[n][n] , map[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> c;
            in[i][j] = c;
            map[i][j] = '0';
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (in[i][j] == '*')
                for (int k = 0; k < n; k++)
                    map[i][k] = '*' , map[k][j] = '*';
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
            cout << map[i][j];
        cout << endl;
    }
       return 0;
}

