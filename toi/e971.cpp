#include <iostream>
using namespace std;
int main(){
	int m , n , input[105][105];
	cin >> m >> n;
	for (int i = 0; i < m; i++)	
		for (int j = 0; j < n; j++)	
			cin >> input[i][j];
	
	int start = -1 , end  = -1;
	for (int i = 0; i < m; i++){
		start = -1 , end = -1;
		for (int j = 0; j < n; j++){
			if (input[i][j] == 1){	
				if (start == -1)	start = j;
				else{
					end = j;
					for (int k = start + 1; k < end; k++)   input[i][k] = 1;
					start = - 1 , end = -1;
				}
			}
		}
	}
	for (int i = 0; i < n; i++){
        	start = -1 , end = -1;
                for (int j = 0; j < m; j++){
                        if (input[j][i] == 1){	
                                if (start == -1)	start = j; 
				else{    
					end = j;
					for (int k = start + 1; k < end; k++)   input[k][i] = 1;
					start = -1 , end = -1;
				}
			}                                                             ;
	}
}
