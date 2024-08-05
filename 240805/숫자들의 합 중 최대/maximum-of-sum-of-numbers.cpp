#include <iostream>
#include <algorithm>
using namespace std;
int x,y;
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>x>>y;
    int maxx=-1;
    for(int i=x;i<=y;i++){
        int sum=0;
        int d=i;
        while(d>0){
            sum+=d%10;
            d/=10;
        }
        maxx=max(maxx,sum);
    }
    cout<<maxx;

    return 0;
}