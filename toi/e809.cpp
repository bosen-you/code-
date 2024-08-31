#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string s , a;
    string map[5000000] = {0};
    cin >> s >> a;

    int k = 0;
    for (int i = 0; i < s.size(); i++)
        for (int j = 0; j < a.size(); j++)
            if (s[i] == a[j])
                map[k] = s[i] , k++;
    /*int n , t;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> t;
        cout << map[t] << endl;
    }*/
    for (int i = 0; i < k; i++)
        cout << map[i] << " ";
    return 0;
}

