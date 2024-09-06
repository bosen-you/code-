#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int n ;
	cin >> n;
	int a[n];
	for (int i = 0 ; i < n; i++)	cin >> a[i];
	for (int i = 0; i < n; i++){
		int mins = a[i];
		for (int j = i+1; j < n; j++){
			if (mins > a[j])	swap(mins , a[j]);
		}
		a[i] = mins;

	}
	
	for (int i = 0; i < n; i++)
		cout << a[i] << endl;
}
