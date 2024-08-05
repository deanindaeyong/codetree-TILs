#include <iostream>
#include <algorithm>
using namespace std;
int b,n;
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n>>b;
    int p[1000],s[1000],ps[1000];
    for(int i=0;i<n;i++){
        cin>>p[i]>>s[i];
        ps[i]=p[i];
    }
    sort(ps,ps+n);
    int cnt=0,numb=n,i=0,sum_t=0;
    while(numb>0){
        int sum=0;
        for(int i=0;i<numb-1;i++){
            sum+=ps[i];
            for(int j=0;j<n;j++){
                if(ps[i]==p[j]){
                    sum+=s[j];
                }
            }
        }
        sum+=ps[numb-1]*0.5;
        for(int j=0;j<n;j++){
            if(ps[numb-1]==p[j]){
                sum+=s[j];
                break;
            }
        }
        if(sum<=b){
            cout<<numb;
            return 0;
        }else numb--;

    }
    return 0;
}