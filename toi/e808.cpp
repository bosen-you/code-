#include <iostream>
using namespace std;
int main(){
    int n , h , m;
    cin >> n >> h >> m;
    
    int input, map , hr[n] , min[n];
    for (int i = 0; i < n; i++){
        cin >> input;
        m += input;
        while (m >= 60) h++ , m -= 60;
        if (h >= 24) h -= 24;
        hr[i] = h , min[i] = m;
       
    } 
    
    while (cin >> map && map != 0){
        if (hr[map-1] < 10 && min[map-1] < 10)  
            printf("0%d:0%d\n" , hr[map-1] , min[map-1]);
        else if (hr[map-1] < 10)
            printf("0%d:%d\n" , hr[map-1] , min[map-1]);
        else if (min[map-1] < 10)
            printf("%d:0%d\n" , hr[map-1] , min[map-1]);
        else    printf("%d:%d\n" , hr[map-1] , min[map-1]);
    }
        
}
