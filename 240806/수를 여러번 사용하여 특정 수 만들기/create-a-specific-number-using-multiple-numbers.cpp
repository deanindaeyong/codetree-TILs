#include <iostream>
#include <climits>
using namespace std;
int a,b,c;
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>a>>b>>c;
    int maxx=INT_MIN;
    for(int i=c;i>0;i--){
        for(int j=0;j<=1000;j++){
            for(int k=0;k<=1000;k++){
                if(j*a+b*k==i){
                    maxx=max(maxx,j*a+b*k);
                    cout<<maxx;
                    return 0;
                }
            }
        }
    }
    cout<<maxx;
    return 0;
}