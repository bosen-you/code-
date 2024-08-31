#include <iostream>
using namespace std;

int total = 0 , x , y;
int hanoi(int n , int a , int b , int c){
    if (n == 1){
        total += 1;
        return total;
    }
    else{
        hanoi(n-1 , a , c , b);
        hanoi(1 , a , b , c);
        hanoi(n-1 , b , a , c)
    }
}
int main(){
    int N , i;
    cin >> N >> i;
    int a = 1 , b = 2 , c = 3;
    if (N % 2 == 0) swap(b , c);
    if (i == hanoi(N , a , b , c))
        printf()
    return 0;
}

