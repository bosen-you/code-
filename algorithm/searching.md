[TOC]
## dfs
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

## dsu
- python
```python
def FindParent(x):
    if (parent[x] == x):
        return x
    else:
        return FindParent(parent[x])

def Join(x , y):
    x = FindParent(x)
    y = FindParent(y)
    if (rank[x] >= rank[y]):
        parent[y] = x
        rank[x] += rank[y]
    else:
        parent[x] = y
        rank[y] += rank[x]


n , r , g = map(int , input().split())
parent = [i for i in range(n+1)]
rank = [1 for _ in range(n+1)]

for i in range(r):
    a , b = map(int , input().split())
    Join(a , b)

for i in range(g):
    a , b = map(int , input().split())
    if FindParent(a) == FindParent(b):
        print(":)")
    else:
        print(":(")
```

```c++
#include <iostream>
#include <climits>
using namespace std;

int parent[10005] , rankSS[10005];
int FindParent(int x){
    if (parent[x] == x) return x;
    else    return FindParent(parent[x]);
}

void Join(int x ,int y){
    x = FindParent(x) , y = FindParent(y);
    if (rankSS[x] >= rankSS[y])  parent[y] = x , rankSS[x] += rankSS[y];
    else    parent[x] = y , rankSS[y] += rankSS[x];
}

int main(){
    int n , r , g;
    int a , b;
    cin >> n >> r >> g;
    for (int i = 1; i < n+1; i++)
        parent[i] = i , rankSS[i] = 1;
    for (int i = 0; i < r; i++){
        cin >> a >> b;
        Join(a , b);
    }

    //search
    for (int i = 0; i < g; i++){
        cin >> a >> b;
        if (FindParent(a) == FindParent(b))
            cout << ":)" << endl;
        else    cout << ":(" << endl;
    }
}
```
