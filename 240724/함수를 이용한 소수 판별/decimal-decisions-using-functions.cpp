#include <iostream>
using namespace std;
int isprime(int a,int b){
    int sum=0;
    for(int i=a;i<=b;i++){
        bool nprime=false;
        if(i==1){
            continue;
        }
        for(int j=2;j<i;j++){
            if(i%j==0){
                nprime=true;
            }
        }
        if(nprime){
            continue;
        }else sum+=i;
        
    }
    return sum;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    cin>>a>>b;
    cout<<isprime(a,b);
    return 0;
}