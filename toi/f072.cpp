#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int map[n] , flag = 0 , start = 0 , end = 0;
    for (int i = 0; i < n; i++){
        cin >> map[i];
        if (map[i] == 1 && !flag)    start = i , flag++;
        if (map[i] == 1)    end = i;
    }

    int co = 0;
    for (int i = start+1; i < end; i++)
        if (map[i] == 0 && map[i+1] != 9 && map[i-1] != 9)
            co++;
    cout << co;
    return 0;
}

