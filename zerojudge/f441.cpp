#include <iostream>
using namespace std;

int main(){
    int n , s , m , x;
    cin >> n >> s;
    int map[n];
    for (int i = 0; i < n; i++)
        cin >> map[i];
    cin >> m;
    for (int i = 0; i < m; i++){
        int grade = 0;
        for (int j = 0; j < n; j++){
            cin >> x;
            if (x == map[j])    grade += s;
        }
        cout << grade << endl;
    }
}
