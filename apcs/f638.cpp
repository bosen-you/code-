#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int n , k , temp = 0;
vector<int>p(50003 , 0);
int cut(int left , int right , int level){
    temp++;
    if (level >=  k)  return 0;
    if (right - left < 2)   return 0;
    
    int mins = INT_MAX , m = 0;
    for (int i = left+1; i <= right-1; i++){
        int sums = abs(p[left] * (i - left) + p[right] * (right - i));
        cout << sums << " ";
        if (mins > sums)    m = i , mins = sums;
    } 
    return p[m] + cut(left , m-1 , level+1) + cut(m+1 , right , level+1);    
}

int main(){
    cin >> n >> k;
    p[n+1] = 1;
    for (int i = 1; i <= n; i++) cin >> p[i];
    cout << cut(1 , n , 0);
    return 0;
}
