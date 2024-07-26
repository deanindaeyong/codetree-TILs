#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int m1,d1,m2,d2;
    int n_d[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    cin>>m1>>d1>>m2>>d2;
    int sum=0,sum2=0;
    for(int i=0;i<m1;i++){
        sum+=n_d[i];
    }sum+=d1;
    for(int i=0;i<m2;i++){
        sum2+=n_d[i];
    }sum2+=d2;
    cout<<sum2-sum+1;
    return 0;
}