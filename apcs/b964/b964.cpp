#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    int z=0,g=0;
    int maxs=0,mins=100; 
    cin >> n;
    int a[n];
    for (int i=0;i<n;i++){
		cin >> a[i];
		//cout << a[i] << " ";
        if (a[i]>=60){
        	mins=min(mins,a[i]);
        	z+=1;
		}	
        else{
        	maxs=max(maxs,a[i]);  
        	g+=1;
		}	
    }
    sort(a, a+n);
    for (int i =0;i<n;i++)	cout << a[i] << " ";
	cout << endl; 
    if (z==0 and g!=0){
    	cout << maxs << endl;
    	cout <<"worst case";
	}
    else if (z!=0 and g==0){
    	cout << "best case" << endl;
    	cout << mins;
	}
	else{
		cout << maxs <<endl;
		cout << mins;
	}
    return 0;
}
