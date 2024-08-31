#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int map[n];
    for (int i = 0; i < n; i++) cin >> map[i];
    
    int index[n] , k = 1 , time[n] = {0} , flag = 0;
    sort(map , map+n);
    index[0] = map[0];
    for (int i = 1; i < n; i++){
        flag = 0;
        for (int j = 0; j < k; j++){
            if (index[j] == map[i])
                flag++ , time[j] += 1;
        }
        if (!flag)
            index[k] = map[i] , k++;
    }
    cout << endl;

    int maxs = 1;
    deque<int>ans;
    for (int i = 0; i < k; i++){
       cout << time[i] << " ";
       if (time[i] > maxs)  
           maxs = time[i] , ans.clear() , ans.push_back(map[i]);
       else if (time[i] == maxs)    ans.push_back(map[i]);
    }
    cout << endl;
    cout << k << endl;
    cout << ans.size() << endl;

    //cout << ans.size();
    if (ans.empty())    printf("%d\nNO" , n);
    else if (ans.size() == 1)   cout << 1 << '\n' << ans.front();
    else{
        cout << n-ans.size() << endl;
        while (!ans.empty()){
            cout << ans.front() << " ";
            ans.pop_front();
        }
    }
    return 0;
}

