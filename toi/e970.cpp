#include <iostream>
using namespace std;
int main(){
	int n , input[10005];
	cin >> n;
	for (int i = 1; i <= n; i++)	cin >> input[i];
	int a = input[n];

	int num = 0;
	for (int i = 1; i <= n; i++)	
		if (i % a == 1)	num += input[i];
	num %= n;
	if (num == 0)	num += n;
	cout << num << " " << input[num];	

}
