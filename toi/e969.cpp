#include <iostream>
using namespace std;
int main() {
	int n , m , k , t = 0;
	int cost[2] = {32 , 55};     
	cin >> n >> m >> k;

	if (n < cost[k])
		printf("Wayne can't eat and drink.\n");
	
	while (n >= cost[k]) {
		printf("%d: Wayne " , t);
		if (k == 0)	printf("eats an Apple pie, ");
	       	else 	printf("drinks a Corn soup, ");
		n -= cost[k];
		if (n == 0)	printf("and now he doesn't have money.\n");
		else{ 
			if (n == 1)	printf("and now he has 1 dollar.\n");
			else 	printf("and now he has %d dollars.\n" , n);
			
		}
		k = 1 - k , t += m;
	}
	
	return 0;
}
