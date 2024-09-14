#include <iostream>
#include <cmath>
using namespace std;
int map[15];
int ans[15]; // 哥拳
int main() {
    int f , n , k = 0 ;
    int num = 0;//win or lose or drew
    cin >> f >> n;
    for (int i = 0; i < n; i++)
        cin >> map[i];
    for (int i = 0; i < n; i++){
        ans[k] = f;
        k++;
        //cout << f;
        //win
        if ((f == 0 && map[i] == 2) || (f == 2 && map[i] == 5) or (f == 5 && map[i] == 0)){
            num++;
            break;
        }
        //lose
        else if ((f == 2 && map[i] == 0) || (f == 5 && map[i] == 2) or (f == 0 && map[i] == 5)){
            num+=2;
            break;
        }
        //drew
        else{
            //妹兩次一樣
            if (i>0 && map[i] == map[i-1]){
                if (map[i] == 0)    f = 5;
                else if (map[i] == 2)   f = 0;
                else    f = 2;
            }
            else    f == map[i];
        }
    }
    for (int i = 0; i < k;i++)
        cout << ans[i] << " ";
    if (!num)   cout << ": Drew at round " << n;
    else if (num == 1)   cout << ": Won at round " << k;
    else    cout << ": Lost at round " << k;
    return 0;
}
