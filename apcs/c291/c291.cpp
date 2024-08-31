#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int num[n];
    for (int i = 0; i < n; i++) cin >> num[i];

    int friends = 0 , start = 0 , count = 0;
    for (int i = 0; i < n; i++){
        if (num[i] != -1){
            friends = -1 , start = i;
            while (friends != i)
                friends = num[start] , num[start] = -1 , start = friends;
        count ++;
        }
    }

    cout << count;
}
