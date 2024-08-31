#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, x,y,px,py,dir,prev_dir=0; // first dir = east
    int left=0,right=0,rev=0;
    cin >> n >>px >>py;
    for (int i=1;i<n;i++) {
        cin >> x>> y;
        if (x > px) dir = 0; // East
        else if (y < py) dir = 1; //South
        else if (x < px) dir = 2; //West
        else dir = 3; //North y>py
        // using dir and prev_dir to determine turn
        if (dir == (prev_dir+1)%4) right++;
        else if (dir==(prev_dir+2)%4) rev++;
        else if (dir==(prev_dir+3)%4) left++;
        // else no direction changed
        // current -> previous for next point
        prev_dir = dir;
        px = x, py =y;
    }
    cout << left<<' '<<right<<' '<<rev<<'\n';
    return 0;
}
