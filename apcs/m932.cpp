#include <iostream>
#include <string>
using namespace std;

int main(){
    int m , n , k;
    cin >> m >> n >> k;
    string map[m][n] , str;
    for (int i = 0; i < m; i++){
        cin >> str;
        for (int j = 0; j < n; j++)
            map[i][j] = str[j];
    }    
    int x = m-1 , y = 0 , pre_x = x , pre_y = y;
    string s = "";
    while (k--){
        int a;
        cin >> a;
        if (a == 0) x-- , y++;
        else if (a == 1)    y++;
        else if (a == 2)    x++ , y++;
        else if (a == 3)    x-- , y++;
        else if (a == 4)    y--;
        else if (a == 5)    x-- , y--;
        else    x++;           
        cout << x << " " << y << endl;
        if (x < 0 || x > m || y < 0 || y > n)
            s += map[pre_y][pre_x];
        else    s += map[y][x] , pre_x = x , pre_y = y;
    }
    cout << s << endl;

    int a[30] , l = 0;
    for (int i = 0; i < n; i++){
        int flag = 0;
        for (int j = 0; j < l; j++){
            if (s[i] == a[j]){
                flag = 1;
                break;
            }  
        }
        if (flag == 0)  a[l] = s[i] , l++;
    }
    cout << k+1;
}   
