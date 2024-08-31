#include <iostream>
using namespace std;
int main(){
	int n , a , b , maxs = 0 , mins = 1005;
	cin >> n;
	int ans[1005];
	for (int i = 0; i < 1005; i++)	ans[i] = 0;
	for (int i = 0; i < n; i++){
		cin >> a >> b;
		ans[a] += b;
		maxs = max(maxs , a);
		mins = min(mins , a);
	}
	
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a >> b;
		ans[a] += b;
		maxs = max(maxs , a);
		mins = min(mins , a);
	}
	
	int num = 0;
	for (int i = maxs; i >= mins; i--){
		if (ans[i] == 0)	num++;
		else	cout << i << ":" << ans[i] << endl;
	}
	if (num == maxs)	cout << "NULL!";
	return 0;
}
