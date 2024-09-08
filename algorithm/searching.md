## binary 
### 1. 左右算法
- find the first >= x between a[left..right]
#### Cpp
```cpp
int bsearch(int a[] , int left , int right , int x){
    while (left < right){
        int mid = (left + right) / 2;
        if (a[mid] == x)    return mid;
        if (a[mid] < x) left = mid+1;
        else    right = mid-1;
    }
    return ???; //maybe wrong
}
```

### python
```python
def bsearch(left , right , x):
    while (left < right):
        mid = (left + right) // 2
        if a[mid] == x:    return mid
        if a[mid] < x:  left = mid+1
        else:   right = mid-1
    return -1
```
### 2.跳躍式算法  
- search the first >=x between a[0..n-1]
#### CPP
```cpp
int jump_search(int a[] , int n , int x){
    if (a[0] > x)   return 0;
    int po = 0;
    for (int jump = n/2; jump > 0; jump/=2){
        while (po+jump < n && a[po+jump] < x)
            po += jump;
    }
    return po+1;
}
```

#### python 
```python
a = []
def jump_search(x , n):
    if a[0] > x:   return 0
    po = 0
    for jump in range(n//2 , 0 , n/4):
        while po+jump < n and a[po+jump] < x:
            po += jump

    return po+1
```

### 3.函式庫
cpp
```shell
- 三個定義方式差不多
1. lower_bound(first , last , t , function)
    -  find >= t
    - range : (first , last]
    - list 要先 sort
    - if t in (first , last]    cout << position
    - else cout << last

2. upper_bound()
    - find > t

3. binary_search()
    - if t in list    cout << true
    - else cout << false
```
