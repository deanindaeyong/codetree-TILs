#include <iostream>
using namespace std;
int n,c,g,h,ta[1000],tb[1000];
int temp(int a,int b){
    if(a<ta[b])
    return c;
    else if(a>=ta[b] &&a<=tb[b])
    return g;
    else return h;
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n>>c>>g>>h;

    for(int i=0;i<n;i++){
        cin>>ta[i]>>tb[i];
    }
    int maxx=-1;
    for(int i=0;i<=1000;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            sum+=temp(i,j);
        }
        maxx=max(sum,maxx);
    }
    cout<<maxx;
    return 0;
}