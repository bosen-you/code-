#include <iostream>
using namespace std;
int main(){
	long long n;
    cin >> n;
    
    int map[10] = {0};
    while (n > 0)
        map[n % 10] += 1 , n /= 10;
    
    int flag = 0;
    for (int i = 0; i < 10; i++)
        if (map[i] != 0)
            flag++;

    int temp[10] = {} , co = 0;
    for (int i = 0; i < flag; i++){
        int maxs = 0 , a = -1;
        for (int j = 0; j < 10; j++)
            if (map[j] > maxs)
                maxs = map[j] , a = j;
        temp[co] = a , co++;
        map[a] = -1;
    }

    for (int i = 0; i < co; i++)
        cout << temp[i] << " ";
}
