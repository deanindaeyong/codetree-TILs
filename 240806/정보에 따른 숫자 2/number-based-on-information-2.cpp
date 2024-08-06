#include <iostream>
#include <climits>
using namespace std;
int t,a,b;
char c[1001];
int dis(int k, char b){
    int minn=INT_MAX;
    int index;
    for(int i=1;i<=1000;i++){
        if(c[i]==b){
            index=abs(k-i);
            
            minn=min(minn,index);
        }
    }
    return minn;
}
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>t>>a>>b;
    char x;
    for(int i=0;i<t;i++){
        int m;
        cin>>x>>m;
        c[m]=x;
    }
    int d1,d2;
    int cnt=0;
    for(int i=a;i<=b;i++){
        d1=dis(i,'S');
        d2=dis(i,'N');
        if(d1<=d2){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}