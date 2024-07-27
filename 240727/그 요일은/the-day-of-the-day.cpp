#include <iostream>
using namespace std;

int num_days(int m,int d){
    int day[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
    int sum=d;
        for(int i=0;i<m;i++){
            sum+=day[i];}

    return sum;
}

int find_day(string a,int b){
    int sum=0;
    string day[7]={"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};
    int index=0;
    for(int i=0;i<7;i++){
        if(day[i]==a){
           index=i;
           break;
        }
    }
    if((b%7)>=index){           
        sum+=b/7+1;
    }else sum+=b/7;
    return sum;
}

int main() {
    string ob;
    // 여기에 코드를 작성해주세요.
    int m1,d1,m2,d2;
    cin>>m1>>d1>>m2>>d2;
    cin>>ob;

    int total_days=num_days(m2,d2)-num_days(m1,d1);
    cout<<find_day(ob,total_days);

    return 0;
}