#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    long long n;
    cin >> n;

    vector<pair<int , int> > map(10);
    for (int i = 0; i < 10; i++)
        map[i] = {0, i};
    while (n > 0)
        map[n%10].first += 1 , n /= 10;
    

    sort(map.begin() , map.end() , greater<pair<int , int>>());
    
    
            
    return 0;
}
