## menu
- [dfs python](#dfs-python)
- [dfs cpp](#dfs-cpp)
- [dsu python](#dsu-python)
- [dsu Cpp](#dsu-Cpp)

- Undirected Graph
![image](https://github.com/user-attachments/assets/23c85ba1-935c-4183-bbd6-fe34d8c3d58f)


## dfs python
```python
tree = {}
maxdist = -1
far = -1

def dfs(node, parent, dist):
    global maxdist, far
    if dist > maxdist:
        maxdist = dist
        far = node

    for child in tree[node]:
        if child != parent:
            dfs(child, node, dist+1)

n = int(input())

for i in range(n-1):
    a, b = map(int, input().split())
    if a not in tree:
        tree[a] = []
    if b not in tree:
        tree[b] = []
    tree[a].append(b)
    tree[b].append(a)

dfs(0, -1, 0)
maxdist = -1
dfs(far, -1, 0)
print(maxdist)
```

## dfs cpp
```C++
#include <iostream>
#include <vector>
using namespace std;

vector<int>tree[100001]; //create a tree
int maxdist = -1 , far = 0;

void dfs(int node , int parent , int dist){
    if (dist > maxdist)
        maxdist = dist , far = node;

    for (int child : tree[node])
        if (child != parent)
            dfs(child , node , dist+1);
}

int main(){
    int n , a , b;
    cin >> n; //node number
    for (int i = 1; i < n; i++){
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
### dfs sample  
#### input 1
```shell
5
0 1
1 2
2 3
3 4
```
#### output 1
```shell
4
```
#### input 2
```shell
7
0 1
0 2
1 3
1 4
2 5
2 6
```
#### output 2
```shell
3
```
#### input 3
```shell
10
0 1
1 2
1 3
2 4
2 5
3 6
4 7
5 8
6 9
```
#### output 3
```shell
5
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

### dsu sample  
#### input 1
```shell
5 3 2
1 2
2 3
4 5
1 3
3 5
```
#### output 1
```shell
:)
:(
```
#### input 2
```shell
7 4 3
1 2
3 4
5 6
6 7
2 4
1 5
7 3
```
#### output 2
```shell
:)
:)
:(
```
#### input 3
```shell
4 2 4
1 2
3 4
1 2
2 3
3 4
1 4
```
#### output 3
```shell
:)
:(
:)
:)
```
