#include <bits/stdc++.h>
using namespace std;

int main(){
    int n , x1 , y1;
    cin >> n >> x1 >> y1;
    
    vector<int>map;
    for (int i = 0; i < n-1; i++){
        int x2 , y2;
        cin >> x2 >> y2;
        map.push_back(abs(x1 - x2) + abs(y1 - y2));
        x1 = x2 , y1 = y2;
    }
    cout << *max_element(map.begin() , map.end()) << " " << *min_element(map.begin() , map.end());
}
