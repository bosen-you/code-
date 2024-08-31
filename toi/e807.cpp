#include <iostream>
#include <string>
using namespace std;
int main(){
	float input[7][4], num = 0 , max1 = 0 , max2 = 0;
	int flag1 = 0 , flag2 =0;
	for (int i = 0; i < 7; i++){
		num = 0;
		for (int j = 0; j < 4; j++){
			cin >> input[i][j];
			num += input[i][j];
		}
		if (num > max1)	max1 = num , flag1 = i + 1;
	}

	string ans[4] = {"morning" , "afternoon" , "night" , "early morning"};
	for (int i = 0; i < 4; i++){
		num = 0;
		for (int j = 0; j < 7; j++)
			num += input[j][i];
		if (num > max2) max2 = num , flag2 = i;		
	}

	cout << flag1 << "\n" << ans[flag2];
	return 0;
}
