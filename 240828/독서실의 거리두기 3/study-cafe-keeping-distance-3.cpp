#include <iostream>
#include <climits>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    string a;
    cin>>a;
    int len=a.length();
    int maxx=INT_MIN;

    for(int i=0;i<len;i++){
        if(a[i]!='0') continue;
        a[i]='1';
        int prev=0;
        int minn=INT_MAX;
        for(int j=1;j<len;j++){
            
            int dis;
            if(a[j]=='1'){
                dis=abs(j-prev);
                prev=j;
                minn=min(dis,minn);
            }
            
        }
        maxx=max(maxx,minn);
        
        
        a[i]='0';
        
    }
    cout<<maxx;
    return 0;
}