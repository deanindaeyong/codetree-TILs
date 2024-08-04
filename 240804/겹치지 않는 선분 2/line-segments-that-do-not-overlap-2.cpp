#include <iostream>
#include <climits>
using namespace std;
int n;

int main() {
    // 여기에 코드를 작성해주세요.
    int ans=0;
    cin>>n;
    int x1[100],x2[100];
    for(int i=0;i<n;i++){
        cin>>x1[i]>>x2[i];
    }
    int cnt=n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j) continue;
            if((x1[i]>x1[j]&&x2[i]<x2[j])||(x1[i]<x1[j]&&x2[i]>x2[j])){
                cnt--;
            }
        }
    }
    if(cnt<0){
        cnt=0;
    }
    cout<<cnt;
    return 0;
}