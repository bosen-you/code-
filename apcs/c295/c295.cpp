#include <iostream>
using namespace std;
int MAP[25][25];

int main() {
    int n, m, ans=0;
    cin >> n >> m;
    int MAXs[n];
    int z[n];
    int index=0;
    for (int i = 0; i < n; i++) {
        int MAX = 0;
        for (int j = 0; j < m; j++) {
            cin >> MAP[i][j];
            MAX = max(MAX, MAP[i][j]);
        }
        MAXs[i] = MAX;
        ans += MAX;
    }
    cout << ans << endl;
    int check = 0;
    for (int i = 0; i < n; i++) {
        if (ans%MAXs[i] == 0) 
        {
        	check++;
			z[index]=MAXs[i];
				index++;
		}
	}
	if (!check)
		cout << "-1";
	else 
	{
		cout << z[0];
		for (int i=1;i<index;i++)
		cout << " " << z[i];
	}
    return 0;
}
