#include <iostream>
using namespace std;

int main(){
    int n; 
    cin >> n;
    int m , temp[n] , k = 0 , time[n] = {0} , maxs = 0;
    for (int i = 0; i < n; i++){
        cin >> m;
        int flag = 0;
        for (int j = 0; j < k; j++){
            if (temp[j] == m)
                flag++ , time[j]++ , maxs = max(maxs , time[j]);
        }
        if (!flag)  temp[k] = m , k++;
    }
    cout << k << endl;
    if (maxs == 0){
        cout << "NO" << endl;
        return 0;
    }
    else{
        for (int i = 0; i < k; i++)
            if (time[i] == maxs)
                cout << temp[i] << " ";
    }
    return 0;
}

