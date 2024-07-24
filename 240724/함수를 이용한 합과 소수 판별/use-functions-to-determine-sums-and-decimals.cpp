#include <iostream>
using namespace std;
int anp(int a,int b){
    int cnt=0;
    for(int i=a;i<=b;i++){
        bool nprime=false;
        for(int j=2;j<i;j++){
            if(i%j==0){
                nprime=true;
            }
        }
        int sum=0;
        int x=i;
        while(x!=0){
            sum+=x%10;
            x/=10;
        }
        if(sum%2==0 && nprime==false){
            cnt++;
        }else continue;
    }
    return cnt;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    cin>>a>>b;
    cout<<anp(a,b);
    return 0;
}