#include <iostream>
using namespace std;
int main(){
	int n , cost;
	char s;
	cin >> n >> cost >> s;
	
	double total = 0;
	if (s == 'T')		total = n * 1.00; 
	else if (s == 'U')	total = n / 30.9; 	
	else if (s == 'J')	total = n / 0.28;
	else if (s == 'E')	total = n / 34.5;
	
	total -= cost;
	if (total < 0)	cout << "No Money";
	else if (total <= 0.05)	cout << s << " 0.00";
	else{
	       	printf("%c %.2f" , s , total);	
	}
}
