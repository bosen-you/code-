#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	while (n--){
		float bmr = 0;
		int g , a , h , w;
		cin >> g >> a >> h >> w;
		if (g == 1)	bmr = 13.7 * w + 5.0 * h - 6.8 * a + 66;
	        else	bmr = 9.6 * w + 1.8 * h - 4.7 * a + 655;
		printf("%.2f\n" , bmr);
	}
	return 0;
}
