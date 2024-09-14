### cpp
```cpp
#include <iostream>
using namespace std;

int mod_exp(int x , int y , int p){
    int result = 1;
    x = x % p;

    while (y > 0){
        if (y % 2 == 1)
            result = (result * x) % p;
        y /= 2;
        x = (x*x) % p;
    }
    return result;
}

int main(){
    int x , y , p;
    cin >> x >> y >> p;
    cout << mod_exp(x , y , p);
}
```

### python
```python
def mod_exp(x, y, p):
    result = 1 
    x = x % p   # 確保 x 在模 p 下的範圍內
    
    while y > 0:
        # 如果 y 是奇數，將當前的 x 乘到結果上
        if y % 2 == 1:
            result = (result * x) % p

        y = y // 2
        x = (x * x) % p
    return result

x, y, p = map(int, input().split())
print(mod_exp(x, y, p))

```
