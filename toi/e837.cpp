#include <iostream>
#include <string>
using namespace std;
int main(){
	int num = 0;
	string s , temp = "" , ans;
	bool c = 0;
	cin >> s;
    //cout << temp;
	for (int i = 1; i < s.size(); i++){
        //cout << i << " " << s[i] - 'a' << endl;
		if (s[i-1] - 'a' + 1 == s[i] - 'a'){
            if (temp == "") temp += s[i-1];
            temp += s[i];
        }	
        else temp = "";
		if (temp.size() >= num)	num = temp.size() , ans = temp;
	}
	if (ans.size() > 0)	cout << ans.size() << " " << ans;
	else	cout << 1 << " " << s[s.size()-1];
	return 0;
}
