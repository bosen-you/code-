dfs
===
```C++
#include <iostream>
using namespace std;

int n , m;
int map[100][100] , visited[100][100] = {0};
void dfs(int x , int y){
    visited[x][y] = 1;
    if (x == n-1 && y == m-1)   return;
    if (x+1 < n && visited[x+1][y] == 0 && map[x+1][y] == 0)    dfs(x+1 , y);
    if (x-1 > 0 && visited[x-1][y] == 0 && map[x-1][y] == 0)    dfs(x-1 , y);
    if (y+1 < m && visited[x][y+1] == 0 && map[x][y+1] == 0)    dfs(x , y+1);
    if (y-1 > 0 && visited[x][y-1] == 0 && map[x][y-1] == 0)    dfs(x , y-1);
}

int main(){
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
                cin >> map[i][j];
    dfs(0 , 0);
    return 0;
}
```
