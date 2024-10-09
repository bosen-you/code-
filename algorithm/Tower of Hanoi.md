# 基礎河內塔
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

# 三色河內塔
- num 一定要加上global
## python
```python
num = 0
num = 0
def move(n , s , e , by):
    global num #宣告為全局變數
    if n < 1:   return
    move(n-1 , s , by , e)
    print(f'ring {n} : {s} => {e}')
    num += 1
    move(n-1 , by , e , s)

def hanoi_3(n , s , e , by):
    global num
    if n < 1:   return
    move(n-1 , s , by , e)
    print(f'ring {n} : {s} => {e}')
    num += 1
    hanoi_3(n-2 , by , s , e)

n = int(input())
s , by , e = input().split()

hanoi_3(n , s , e , by)
print(f'共需{num}個移動')
```

## Cpp
```cpp
#include <iostream>
using namespace std;

int num = 0;
void move(int n , char s , char e , char by){
    if (n < 1)  return;
    move(n-1 , s , by , e);
    printf("ring %d : %c => %c\n" , n , s , e);
    num++;
    move(n-1 , by ,  e , s);
}

void hanoi_3(int n , char s , char e , char by){
    if (n < 1)  return;
    move(n-1 , s , by , e);
    printf("ring %d : %c => %c\n" , n , s , e);
    num++;
    hanoi_3(n-2 , by , s , e);

}

int main(){
    int n;
    cin >> n;
    char s , e , by;
    cin >> s >> by >> e;

    hanoi_3(n , s , e , by);
    printf("共需%d個移動" , num);
    return 0;
}
```
