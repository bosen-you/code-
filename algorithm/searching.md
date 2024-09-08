## binary 
1. 左右算法
- find the first >= x between a[left..right]
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
2.跳躍式算法  
- search the first >=x between a[0..n-1]
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
