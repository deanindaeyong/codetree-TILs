#include <iostream>
using namespace std;
void lcm(int n,int m){
    int cm=min(n,m);
    for(int i=min(n,m);i<=n*m;i++){
        if(i%n==0 && i%m==0){
            cm=i;
            break;
        }

    }
    cout<<cm;
}
int main() {
    int n,m;
    cin>>n>>m;
    lcm(n,m);
    // 여기에 코드를 작성해주세요.
    return 0;
}