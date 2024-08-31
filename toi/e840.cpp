#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;

    int total = s.size()*3 , len = s.size();
    
    //English char or math char or consecutive numbers
    int flag_e = 0 , flag_m = 0;
    for (int i = 0; i < len; i++){
        if (s[i] - 'A' > 0) total += 3 , flag_e++;
        else{
            total += 2 , flag_m++;
            if (i != 0 && s[i-1] - 'A' < 0)
                total -= 2;
        }
    }
    //only English or only math
    if (flag_e == len)  total -= len;
    if (flag_m == len)  total -= len;
   
    //required items
    if (len > 8 && flag_e && flag_m) 
        total += 10;
    else    total -= 5;
    
    cout << total;
    return 0;
}

