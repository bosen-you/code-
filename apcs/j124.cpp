#include <iostream>
using namespace std;

long long sums = 0;
void dfs(int last){
    int n;
    cin >> n;
    if (!n)
        return;
    if (last)
        sums += abs(n-last);

    if (n & 1){
        dfs(n);
        dfs(n);
        dfs(n);
    }
    else{
        dfs(n);
        dfs(n);
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    dfs(0);
    cout << sums;
    return 0;
