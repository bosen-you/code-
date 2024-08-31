binary Tree
====================================================
```C++
#include <iostream>
#include <string>
#include <queue>
using namespace std;

struct Tree{
    char value = ' ';
    int parents = 0 , L = 0 , R = 0 , passed = 0;

};

int main(){
    string a;
    cin >> a;
    int n = a.size()+1 , i = 1;
    Tree tree[n];
    while (i < n){
        if (a[i-1] == '-'){
           i++;
           continue;
        }

        tree[i].value = a[i-1];

        if (i > 1){
            tree[i].parents = i/2;
            if (i % 2 == 0) tree[i/2].L = i;
            else tree[i/2].R = i;

        }
        i++;
    }
    /*for (int i = 1 , len = a.size()+1; i < len; i++){
        cout << "node: " << tree[i].value;
        cout << " parents: " << tree[tree[i].parents].value;
        cout << " L: " << tree[tree[i].L].value << " R: " << tree[tree[i].R].value;
        cout << endl;
    }*/

    int m;
    cin >> m;
    for (int i = 0; i < m; i++){
        queue<int>h1 , h2;
        char s , e;
        cin >> s >> e;
        int start = 0 , end = 0 , flag = 0 , count = 0;

        //start , end position
        for (int j = 0; j < n; j++){
            if (tree[j].value == s)
                start = j , flag++;

            if (tree[j].value == e)
                end = j , flag++;

            if (flag == 2)  break;
        }
        h1.push(start);
        while (!h1.empty() || !h2.empty()){
            int now = h1.front();
            h1.pop();
            tree[now].passed = 1;
            printf("now:%c end:%c\n", tree[now].value, e);
            if (tree[now].value == e){
                cout << count;
                break;
            }

            if (tree[now].parents && !tree[tree[now].parents].passed)
                h2.push(tree[now].parents);
            if (tree[now].L && !tree[tree[now].L].passed)
                h2.push(tree[now].L);
            if (tree[now].R && !tree[tree[now].R].passed)
                h2.push(tree[now].R);

            if (h1.empty()){
                while (!h2.empty()){
                    int temp = h2.front();
                    h1.push(temp);
                    h2.pop();
                }
                count++;
            }
        }

    }
}
```
