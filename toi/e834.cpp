#include <iostream>
using namespace std;
int main(){
	int n , input[10005];
	cin >> n;
	int m , i = 0;
	while (cin >> m && m != 0)	input[i] = m , i++;
	for (int j = 0; j < i; j++){
		if (input[j] % n != 0)	cout << n - (input[j] % n);
		else	cout << input[j] / n;
		cout << endl;
	}
	return 0;
}
