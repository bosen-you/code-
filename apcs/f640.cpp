#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
   vector<int>num;
   vector<string>str;
   string s;
   while (cin >> s) str.push_back(s);

   while (!str.empty()){
        s = str.back();
        if (s == "f"){
            int x = num.back();
            num.pop_back();
            num.push_back(2*x-3);
        }
        else if (s == "g"){
            int x = num.back();
            num.pop_back();
            int y = num.back();
            num.pop_back();
            num.push_back(2*x+y-7);
        }
        else if (s == "h"){
            int x = num.back();
            num.pop_back();
            int y = num.back();
            num.pop_back();
            int z = num.back();
            num.pop_back();
            num.push_back(3*x-2*y+z);
        }
        else
            num.push_back(stoi(s));//stoi : string -> int
        str.pop_back();
   }
   cout << num[0];
}
