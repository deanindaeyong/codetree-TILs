#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c,d;
    int cur_h=0,cur_m=0;
    int e_t=0,s_e_t;
    cin>>a>>b>>c>>d;
    while(true){
        if(cur_h==a &&cur_m==b){
         s_e_t=e_t;
        }
        if(cur_h==c && cur_m==d){
            break;
        }
        e_t++;
        cur_m++;
        if(cur_m==60){
            cur_h++;
            cur_m=0;
        }
    }
    cout<<e_t-s_e_t;

    return 0;
}