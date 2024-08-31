#include <iostream>
#include <string>
using namespace std;
int main(){
	int num = 0 , i = 0 , k = 0;	// 從哪利重複
	string s , a;
	cin >> s >> a;
	
	for (i = 0 , k = 0; i < s.size(); i++){
		if (s[i] == a[k]){
			while (num != a.size())
				num++ , k++;
			if (num == a.size()){
				num = num + i - 1;
				break;
			}
		}
		else	num = 0 ,k = 0;
		
	}
	for (int j = s.size() - 1; j >= 0; j--){
		if (j != num)	cout << s[j];
		else	cout << a , j = j - a.size() + 1;
	}
}

