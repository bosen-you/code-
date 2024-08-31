#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int num1 = 0 , num2 = 0 , flag1 = 0 , flag2 = 0;
	if (n % 25 == 0)	flag1++ , num1 = 25;
	else	num1 = n % 25;
	if (n % 50 == 0)	flag2++ , num2 = 50;
	else	num2 = n % 50;
	if (n <= 2500)	cout << 1 << " " << n / 25 + 1 - flag1 << " " << num1;
	else if (n > 7500)	cout << 3 << " " << (n - 7500) / 25 + 1 - flag1 << " " << num1;
	else	cout << 2 << " " << (n - 2500) / 50 + 1 - flag2 << " " << num2;
	return 0;
	
}
