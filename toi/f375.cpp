#include <iostream>
using namespace std;

int main(){
    int s , e , a;
    cin >> s >> e >> a;
    
    if (s == e){
        cout << 1;
        return 0;
    }
    int i = 1;
    while (a){
        if (i % 11 == 0 && e > s){
            a--;
            if (a == 0){
               cout << "unsalable";
               return 0;
            }
        } 
        if (i % 3 == 0 && i % 9 != 0)
            s += s/3;
        else if (i % 3 != 0 && i % 10 != 0)
            s += s/10;

          
        if (s >= e) break;
        //cout << s << " "; 
        i++;
    }
    cout << i+1; 
    return 0;
}

