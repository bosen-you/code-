#include <iostream>
using namespace std;
int main(){
    int r , c , n;
    cin >> r >> c >> n;
    int map[r][c] = {0}, a[r][c] = {0};
    int h = 1;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            map[i][j] = h , h++;
    
    while (n >= 2){
        if (n % 2 == 0){
            for (int i = 0; i < r; i++){
                for (int j = 0; j < c-1; j++)
                    a[i][j] = a[i][j+1];
                a[i][c-1] = map[i][0];
            }
            for (int i = 0; i < r; i++)
                for (int j = 0; j < c; j++)
               map[i][j] = a[i][j];
        }     
      n--; 
    }

    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++)
            cout << map[i][j] << " ";
        cout << endl;
    }
}
