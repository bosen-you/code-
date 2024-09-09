1. 初始化
```cpp
set<int>map;
```
2. 插入、讀取值
```cpp
set<int>map;
set.insert(value);
```
3. 刪除值
```cpp
set<int>map;
set.erase(value);
```
```python
if value not in map: print(0)
else:    print(1)
```

4. 經歷全部set容器
  - 迴圈
  ```cpp
  set<int>map;
  for (auto s : map)
    cout << s << " ";
  ```
  - 迴圈(iterator)
  ```auto = set<int>map:iterator ```
  ```cpp
  set<int>map;
  for (auto it = map.begin(); it != map.end(); it++)
    cout << it << " ";
  ```
  - 迴圈(reverse_iterator)
  ```cpp
  set<int>map;
  for (auto it = map.rbegin(); it != map.rend(); it++)
    cout << it << " ";
  ```

5. clear array
```cpp
set<int>map{1 , 2 , 3 , 4};
set.clear(); //map = {}
```

6. 判斷value是否存在
    - count
    ```python
    if value not in map: print(0)
    else:    print(1)
    ```
    ```cpp
    set<int> map = {2 , 4 , 6 , 7};
    map.insert(2);
    map.insert(4);
    map.insert(6);
    cout << map.count(4) << "\n"; // 1
    cout << map.count(8) << "\n"; // 0
    ```
    - find (*)
    ```cpp
    set<int>map = {2 , 4 , 6 , 8};
    auto t = map.find(2);
    if (t != map.end)
        cout << "find the 2 in "*t << endl;
    else
        cout << no find << endl;
    ```

7. 判斷是否空的
```cpp
set<int>map;
map.empty();
```
