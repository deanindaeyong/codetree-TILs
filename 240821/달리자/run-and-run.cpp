#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int a[100],b[100];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    int x=n;
    int sum=0;
    for(int i=n-1;i>=0;i--){
        for(int j=i;j>=0;j--){
            if(a[j]==b[i])break;
            if(i==j) continue;
            int dis=i-j;
            while(a[j]>=0){
                --a[j];
                ++a[i];
                sum+=dis;
                if(a[i]==b[i]) break;
            }
            
          
        }
    }
    cout<<sum;
    return 0;
}
// 5 4 3 1
// 3 2 3 5
//3*1+1*2+3*1+2*1