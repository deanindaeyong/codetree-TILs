#include <iostream>
#include <cmath>
using namespace std;
string day(int m1,int d1,int m2, int d2){
    int sum1=0,sum2=0;
    string ds[7]={"Sun","Mon","Tue","Wed","Thu","Fri","Sat"};
    int mon[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    for(int i=0;i<m1;i++){
        sum1+=mon[i];
    }
    for(int j=0;j<m2;j++){
        sum2+=mon[j];
    }
    sum1+=d1;
    sum2+=d2;
    int total=0;
    if(sum2>sum1){
        total=sum2-sum1;
    }else total=sum1-sum2;
    int dat=1;
    
    dat=(total+3)%7;
    return ds[dat];
}
int main() {
    // 여기에 코드를 작성해주세요.
    int m1,m2,d1,d2;
    cin>>m1>>m2>>d1>>d2;
    cout<<day(m1,d1,m2,d2);
    return 0;
}