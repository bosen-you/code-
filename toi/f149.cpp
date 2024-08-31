#include <iostream>
using namespace std;

int main(){
    int r , c;
    cin >> r >> c;
    int map[r+1][c+1] , num[r+1][2] = {0} , temp[r+1][2] = {0} , k = 0 , l = 0;
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            cin >> map[i][j];
            if (map[i][j] == 1)
                num[k][0] = i , num[k][1] = j , k++;
      
            if (map[i][j] == 5)
                temp[l][0] = i , temp[l][1] = j , l++;

        }
    }
    
    for (int i = 0; i < l; i++){
        int x = temp[i][0] , y = temp[i][1] , flag = 0;
        if (map[x][y] != -1){
            if (x != 0){
                if (map[x-1][y] == 5)   map[x-1][y] = -1 , flag++;
                if (map[x-1][y+1] == 5) map[x-1][y+1] = -1 , flag++;
                if (y != 0 && map[x-1][y-1] == 5) map[x-1][y-1] = -1 , flag++;
            }
            if (y != 0){
                if (map[x][y-1] == 5)   map[x][y-1] = -1 , flag++;
                if (map[x+1][y-1] == 5) map[x+1][y+1] = -1 , flag++;
            }
            if (map[x+1][y+1] == 5) map[x+1][y+1] = -1 , flag++;
            if (map[x][y+1] == 5)   map[x][y+1] = -1 , flag++;
            if (map[x+1][y] == 5)   map[x+1][y] = -1 , flag++;
            if (flag > 0)   map[x][y] = -1;     
        }
    }
    
    int yes = 0 , no = 0;
    for (int i = 0; i < k; i++){
        int x = num[i][0] , y = num[i][1] , flag = 0;
        if (x != 0){
            if (map[x-1][y] == 5)   flag++;
            if (map[x-1][y+1] == 5) flag++;
            if (y != 0 && map[x-1][y-1] == 5) flag++;
        }
        if (y != 0){
            if (map[x][y-1] == 5)   flag++;
            if (map[x+1][y-1] == 5) flag++;
        }
        if (map[x+1][y+1] == 5) flag++;
        if (map[x][y+1] == 5)   flag++;
        if (map[x+1][y] == 5)   flag++;
        //cout << flag << " ";
        if (flag > 0)   yes++;
        else    no++;
    } 
    //cout << yes << " " << no;
    
    for (int i = 0; i < k; i++)
            cout << num[i][0] << " " << num[i][1] << endl;
    
    cout << "================================================" << endl;

    for (int i = 0; i < l; i++)
        cout << temp[i][0] << " " << temp[i][1] << endl;

    return 0;
}

