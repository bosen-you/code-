#include <iostream>
#include <string>
using namespace std;

int main(){
    string combo[5] = {"Medium Wac" , "WChicken Nugget" , "Geez Burger" , "ButtMilk Crispy Chicken" , "Plastic Toy"};
    string only[4] = {"German Fries" , "Durian Slices" , "WcFurry" , "Chocolate Sunday"};
    int c[5] = {4 , 8 , 7 , 6 , 3};
    int o[4] = {2 , 3 , 5 , 7};

    int n , s , total = 0;
    while (cin >> s && s != 0){
        cin >> n;
        if (s == 1){
            cout << combo[n-1] << " " << c[n-1] << endl;
            total += c[n-1];
        }
        else{
            cout << only[n-1] << " " << o[n-1] << endl;
            total += o[n-1];
        }
    }
    cout << "Total: " << total;
    return 0;
}

