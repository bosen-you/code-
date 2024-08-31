#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

struct sche{
    int date = 0;
    int start = 0;
    int end = 0;
};

bool Sort(sche a , sche b){
    if (a.date != b.date)   return a.date < b.date;
    else    return a.end < b.end;
}

sche classes[100005];
int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int d , s , t;
        cin >> d >> s >> t;
        classes[i].date = d;
        classes[i].start = s;
        classes[i].end = t;
    }

    sort(classes , classes +n , Sort);
    
    int last = 0 , ans = 0;
    for (int i = 0; i < n; i++){
        if (i != 0 && classes[i].date != classes[i-1].date)
            last = 0;
        
        if (last <= classes[i].start)
            ans++ , last = classes[i].end;
    }

    cout << ans;
    return 0;
}

