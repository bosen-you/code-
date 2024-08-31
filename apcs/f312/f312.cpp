#include <iostream>
using namespace std;
int main(){
	int a1 ,b1,c1;
	int a2,b2,c2;
	int n;
	int y1,y2;
	int a;
	cin >> a1 >> b1 >> c1;
	cin >> a2 >> b2 >> c2;
	cin >> n;
	for (int i=0;i<=n;i++){
		int j=n-i;
		y1=a1*i*i + b1*i + c1;
		y2=a2*j*j + b2*j + c2;
		if (i==0)	
			a=y1+y2;
		else{
			if (y1+y2>a)
				a=y1+y2;
		} 
	}
	cout << a;
	return 0;
}

