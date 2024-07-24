#include <iostream>
using namespace std;
int numd(int y,int m){

    //윤년
    if(m==2){
        if((y%4==0&& y%100!=0)||(y%4==0 && y%100==0 &&y%400==0)){
            return 29;}
        else return 28;
    }else if(m==9 ||m==4||m==6||m==11){
        return 30;

    }else return 31;
}

void judge(int y,int m, int d){
 if(d>numd(y,m)){
    cout<<-1;
 }else if(m>=3 &&m<=5){
    cout<<"Spring";
 }else if(m>=6 &&m<=8){
    cout<<"Summer";
 }else if(m>=9 &&m<=11){
    cout<<"Fall";
 }else cout<<"Winter";
}
int main() {
    // 여기에 코드를 작성해주세요.
    int y,m,d;
    cin>>y>>m>>d;
    judge(y,m,d);
    return 0;
}