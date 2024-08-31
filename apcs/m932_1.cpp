#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int m , n , k;
    cin >> m >> n >> k;
    string s , ans;
    char map[m][n];
    bool test[52] = {false};
    int count = 0;
    for (int i = 0; i < m; i++){
        cin >> s;
        for (int j = 0;j < n; j++)
            map[i][j] = s[j];
    }

    int x = m-1 , y = 0 , pre_x = m-1 , pre_y = 0;
    for (int i = 0; i < k; i++){
        int input;
        cin >> input;
        if (input == 0) x--;
        else if (input == 1)    y++;
        else if (input == 2)    x++ , y++;
        else if (input == 3)    x++;
        else if (input == 4)    y--;
        else    x-- , y--;
        
        if (x >= 0 &&  x < m && y >= 0 && y < n)
            ans += map[x][y] , pre_x = x , pre_y = y;
        else    ans += map[pre_x][pre_y] , x = pre_x , y = pre_y;

        char c = map[pre_x][pre_y];
        int index;
        if (c >= 'a' && c <= 'z') index = c - 'a';
        else    index = c - 'A' + 26;

        if (!test[index])   test[index] = true , count++;
    }
    
   cout << ans << "\n" << count;
} 
