//會TLE
#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0); ios::sync_with_stdio();
    int n, t, x;
    cin >> n;
    priority_queue<int>small;
    priority_queue<int, vector<int>, greater<int>>big;
    while (n--){
        cin >> t;
        if (t == 2)
            cout << small.top() << endl;
        else{
            cin >> x;
            if (small.empty() || x > small.top())
                big.push(x);
            else  small.push(x);
        }

        if (small.size() > big.size()+1){
            big.push(small.top());
            small.pop();
        }
        if (big.size() > small.size()){
            small.push(big.top()); 
            big.pop();
        }

    }
    return 0;
}
