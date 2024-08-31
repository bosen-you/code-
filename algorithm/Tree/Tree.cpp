#include <iostream>
#include <string>
#include <deque>
using namespace std;

struct Tree{
    char c;
    int left = 0 , right = 0 , parent = 0;
    bool check = 0;//false
};

int main(){
    string s;
    cin >> s;
    int len = s.size()+1; // tree[0] = null , tree[1] ~ tree[n] is node
    Tree tree[len];
    int i = 1;
    while (i < len){
        if (s[i-1] == '-'){
            i++;
            continue;
        }
        tree[i].c = s[i-1];
        if (i > 1){
            tree[i].parent = i/2;
            if (i % 2 == 0) tree[i/2].left = i;
            else    tree[i/2].right = i;
        }
        i++;
    }

    int n;
    cin >> n;
    while (n--){
        int start , end;
        int count = 0;
        char s , e;
        cin >> s >> e;
        deque<int>q1 , q2;
        for (int t = 1; t < len; t++){
            tree[t].check = 0;
            if (tree[t].c == s) start = t;
            if (tree[t].c == e) end = t;
        }
        //q1.push_back(start);
        cout << q1.front() << " ";
        while (!q1.empty() || !q2.empty()){
            int temp = q1.front();  
            q1.pop_front();
            //cout << q2.size() << endl;
            tree[temp].check = 1;
            if (tree[temp].c == tree[end].c){
                cout << count << endl;
                break;
            }
            //cout << 3 << endl;
            if (tree[temp].parent && !tree[tree[temp].parent].check){
                q2.push_back(tree[temp].parent);
                //cout << "p: ";
                //cout << q2.back() << endl;
            }
                
            //cout << 4 << endl;
            if (tree[temp].left && !tree[tree[temp].left].check){
                q2.push_back(tree[temp].left);
                //cout << "l: ";
                //cout << q2.back() << endl;
            }
            //cout << 5 << endl;
            if (tree[temp].right && !tree[tree[temp].right].check){
                q2.push_back(tree[temp].right);
                //cout << "r: ";
                //cout << q2.back() << endl;
            }
            //cout << 6 << endl;
            /*cout << "q1: ";
            for (int b = 0; b < q1.size(); b++)
                cout << q1[b] << " ";
            cout << endl;
            cout << "q2: ";
            for (int a = 0; a < q2.size(); a++)
                cout << q2[a] << " ";
            cout << endl;*/
            if (q1.empty()){
                while (!q2.empty()){
                    //cout << q2.size() << " ";
                    q1.push_back(q2.front());   q2.pop_front();
                }
                count++;
            }
        }
    }
    return 0;
}
