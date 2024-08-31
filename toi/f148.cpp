#include <iostream>
#include <algorithm>
using namespace std;

struct alph{
    int num = 0;
    int x = 0;
    int y = 0;
};

bool bmp(alph a , alph b){
    return a.num < b.num;
}

alph map[105] = {0};
int main(){
    int w , h , n;
    cin >> w >> h >> n;
    int flag = 0;
    char t;
    for (int i = 0; i < w; i++){
        for (int j = 0; j < h; j++){
            cin >> t;
            if (t != '0'){
                map[flag].num = t - 'a';
                map[flag].x = i , map[flag].y = j , flag++;
            }
        }
    }    
    
    if (flag < n)   cout << "Mission fail.";
    else{
        sort(map , map+flag , bmp);
        for (int i = 0; i < n; i++)
            cout << map[i].x << " " << map[i].y << endl;
    }
    return 0;
}

