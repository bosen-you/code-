#include <iostream>
using namespace std;
int main(){
	int m , n;
	cin >> m >> n;
	for (int i = 0; i < m; i++){
		int input[105] = {} , color[105] = {} , black = 0;

		int start = -1 , end = -1;
		for (int j = 0; j < n; j++){
			cin >> input[j];
			if (input[j] == 1){
				black++ , color[j] = 1;
				if (start == -1)	start = j;
				else{
					end = j;
					for (int k = start + 1; k < end; k++)	color[k] = 1;
				       	start = -1 , end = -1;	
				}
			}
		}

		for (int j = 0; j < n; j++){
			if (black >= 2)	cout << color[j] << " ";
			else	cout << input[j] << " ";
		}
		cout << endl;
	}
}
