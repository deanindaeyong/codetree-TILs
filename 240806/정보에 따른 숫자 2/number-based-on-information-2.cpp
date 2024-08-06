#include <iostream>
#include <climits>
using namespace std;
int t,a,b;
char c[1000];
int dis(int k, char b){
    int minn=INT_MAX;
    int index;
    for(int i=0;i<=1000;i++){
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
    int u,v;
    int cnt=0;
    for(int i=a;i<=b;i++){
        u=dis(i,'S');
        v=dis(i,'N');
        if(u<=v){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}