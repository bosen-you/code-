## menu
- [dfs cpp](#dfs-cpp)
- [dsu python](#dsu-python)
- [dsu Cpp](#dsu-Cpp)

## dfs cpp
```C++
#include <iostream>
#include <vector>
using namespace std;

vector<int>tree[1000001]; //create a tree
int maxdist = -1 , far = 0;

void dfs(int node , int parent , int dist){
    if (dist > maxdist)
        dist = maxdist , far = node;

    for (int child : tree[node])
        if (child != parent)
            dfs(child , node , dist++);
}

int main(){
    int n , a , b;
    cin >> n; //node number
    for (int i = 0; i < n; i++){
        cin >> a >> b;
        //Undirected Graph
        tree[a].push_back(b);
        tree[b].push_back(a);
    }

    //check the farest distance
    dfs(0 , -1 , 0);
    maxdist = -1;
    dfs(far , -1 , 0);
    cout << maxdist << endl;
    return 0;
}
```

## dsu python
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

## dsu Cpp
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
