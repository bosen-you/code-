## menu
- [dfs](#dfs)
- [bfs](#bfs)
- [dsu](#dsu)
- Undirected Graph

![image](https://github.com/user-attachments/assets/23c85ba1-935c-4183-bbd6-fe34d8c3d58f)


## dfs 
### 適用時機
    1. 遍歷所有可能的路徑：如迷宮求解
    2. 拓撲排序：用在有向無環圖（DAG)。
    3. 回溯算法：如解決數獨、N 皇后問題。
    4. 強連通分量（SCC）：A <-> B。
### python
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

### cpp
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
### sample  
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

## bfs 
### 適用時機
    1. 最短路徑問題：特別是在無權圖中
    2. 尋找最近的目標
    3. 層級遍歷：如二元樹的層次遍歷。
### python
```python
n = int(input())

num = [[] for _ in range(n)]

for _ in range(n-1):
    node , first = map(int , input().split())
    num[node].append(first)
    num[first].append(node)

def bfs(start):
    dist = [0] * n
    q = [start]
    dist[start] = 0

    maxdist = 0
    far = start

    while q:
        fir = q.pop(0)
        for n in num:
            if dist[n] == 0:
                dist[n] = dist[fir] + 1
            if dist[n] > maxdist:
                maxdist = dist[n]
                far = n
    return n , maxdist

if n == 1:  print(0)
else:
    far , _ = bfs(0)
    _ , maxdist = bfs(far)
    print(maxdist)
```

### cpp
```C++
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int maxdist = -1 , n;

void bfs(vector<int> num[] , int node , vector<bool> &visited , vector<int> &dist){
    queue<int> q;
    visited[node] = true , dist[node] = 0;
    q.push(node);
    while (!q.empty()){
        int first = q.front();  q.pop();
        for (int n : num[first]){
            if (!visited[n]){
                dist[n] = dist[first] + 1;
                if (dist[n] > maxdist)
                    maxdist = dist[n];
            visited[n] = true;
            q.push(n);
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int node , first;
    cin >> n;
    vector<int> num[n];
    for (int i = 0; i < n-1; i++){
        cin >> node >> first;
        num[node].push_back(first);
        num[first].push_back(node);
    }

    for (int i = 0; i < n; i++){
        vector<bool> visited(n , false);
        vector<int> dist(n , 0);
        bfs(num , i , visited , dist);
        // the max distance
        if (maxdist == n-1)
            break;
    }

    cout << maxdist << endl;
    return 0;
}
```
### sample  
#### input 1
```shell
5
0 1
1 2
1 3
3 4
```
#### output 1
```shell
3
```
#### input 2
```shell
6
0 1
1 2
2 3
3 4
4 5
```
#### output 2
```shell
5
```
#### input 3
```shell
7
0 1
0 2
0 3
0 4
0 5
0 6
```
#### output 3
```shell
2
```

##  dsu
### 適用時機
    連通性問題：可以新增或刪除節點，並快速判斷兩個節點是否仍然連通。
    最小生成樹（MST）：判斷是否會形成環。
    動態連接問題：檢查圖中兩個節點是否連通。
### python
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

### Cpp
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

### sample  
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
