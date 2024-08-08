#include <iostream>
#include <climits>
using namespace std;
int n;
string a;
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    cin>>a;
    
    int maxx=INT_MIN,prev_index=0,after_index=0,cnt=0;
    for(int i=0;i<n;i++){
        if(a[i]!='1') continue;
        
        for(int j=i+1;j<n;j++){
            if(i==j) continue;
            if(a[j]!='1') continue;
            
           for(int k=i+1;k<j;k++){
                if(a[k]=='0'){
                    cnt++;
                }
           }
           if(cnt>maxx){
            maxx=cnt;
            after_index=j;
            prev_index=i;
           }
        }

        
    }
   

maxx=abs(prev_index-after_index)/2;
    cout<<maxx;
    return 0;
}