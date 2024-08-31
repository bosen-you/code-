#include <iostream>
using namespace std;
int main(){
	int MAP[4][4];
	int sum[4];
	int n=4;
	int sumi=0; 
	for (int i=0;i<n;i++){
		for(int j=0;j<n;j++)
		{
			cin >> MAP[i][j];
			sumi+=MAP[i][j];
		}
		sum[i]=sumi;
		sumi=0;
	}
	cout << sum[0] << ":" << sum[1] << endl;
	cout << sum[2] << ":" << sum[3] << endl;
	if ((sum[0]>sum[1]) and (sum[2]>sum[3]))	cout << "Win";
	else if ((sum[0]<sum[1]) and (sum[2]<sum[3]))	cout <<"Lose";
	else	cout << "Tie";
	return 0;
}

