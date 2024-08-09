#include <iostream>
#include <climits>
using namespace std;
int n;
string a;
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    cin>>a;
    
    int maxx=INT_MIN,prev_index=0,after_index=0,cnt=0,minn=INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i]=='1') continue;
        a[i]='1';

        for(int j=0;j<n;j++){
            if(i==0||i==n-1){
                prev_index=j;
                after_index=j;
            }
            if(j<i &&a[j]=='1'){
                prev_index=j;
                continue;
            }
            if(j>i&&a[j]=='1'){after_index=j;break;}
            if(i==j) continue;

           
        }
        minn=min(abs(prev_index-i),abs(after_index-i));
        maxx=max(maxx,minn);
        a[i]='0';
    }
   
cout<<maxx;

    return 0;
}