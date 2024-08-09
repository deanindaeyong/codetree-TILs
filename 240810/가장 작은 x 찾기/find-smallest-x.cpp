#include <iostream>
using namespace std;
int n;

int main() {
    // 여기에 코드를 작성해주세요.
    int a[10],b[10];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
   
    for(int i=1;i<=10000;i++){
        int x=i;
        bool nok=false;
        x*=2;
        for(int j=0;j<n;j++){
            if(a[j]<=x &&b[j]>=x){
                nok=true;
                x*=2;
            } else nok=false;
        }
        if(nok) {
            cout<<i;
            return 0;
            }
    }
    return 0;
}