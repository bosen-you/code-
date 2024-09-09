![image](https://github.com/user-attachments/assets/3eceb3f6-cc87-4585-a377-ecdb23fcb279)

## python 
```python
def hanoi(n , a , b , c):
    if (n == 1):
        print(f'{a} -> {c}')
    else:
        hanoi(n-1 , a , c , b)
        hanoi(1 , a , b , c)
        hanoi(n-1 , b , a , c)

l , x , y , z = map(int , input().split())

if l % 2 == 0:
    swap(y , z)
hanoi(l , x , y , z)
```

## Cpp
```cpp
#include <iostream>
#include <algorithm>
using namespace std;

void hanoi(int n , int a , int b , int c){
    if (n == 1) cout << a << " -> " << c << endl;
    else{
        hanoi(n-1 , a , c , b);
        hanoi(1 , a , b , c);
        hanoi(n-1 , b , a , c);
    }
}
int main(){
    int l , x , y , z;
    cin >> l >> x >> y >> z;

    if (l % 2 == 0) swap(y , z);
    hanoi(l , x , y , z);
}
```
