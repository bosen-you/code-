// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int>input(1005) , ans;
    for (int i = 0; i < n; i++) cin >> input[i];
    vector<bool>c(1005, true);
    
    int maxs = 1 , k = 0;
    for (int i = 0; i < n; i++){
        int num = 0;
        for (int j = 0; j < n; j++){
            if (input[i] == input[j] && input[j] == true){
                num++; 
                if (num > 0)    c[i] == false;
                //cout << num  << " " << c[i] << endl;
            }
        }
        if (num == maxs && num != 1)    ans.push_back(input[i]);
        if (num > maxs)     ans.clear() , ans.push_back(input[i]);
        //cout << "---" << endl;
    }
    
    int flag = 0;
    for (int i = 0; i < n; i++) if (c[i] == false)   flag++;
    /*if (flag == 0)	cout << 1 << "\n" << input[0];
    else{
    cout << flag << endl;
    
    if (ans.size() == 0)  cout << "No";
    else    for (int h = 0; h < k; h++) cout << ans[h] << " ";
    }*/
    for (int i = 0; i < 8; i++) cout << c[i] << " ";
    return 0;
}


