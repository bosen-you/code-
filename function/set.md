1. 初始化
```cpp
set<int>map;
```
2. 插入、讀取值
```cpp
set<int>map;
set.insert(value);
```
3. 經歷全部set容器
  - 迴圈
  ```cpp
  set<int>map;
  for (auto s : map)
    cout << s << " ";
  ```
  - 迴圈(iterator)
  ```cpp
  set<int>map;
  for (auto it = map.begin(); it != map.end(); it++)
    cout << it << " ";
  ```
4. 
