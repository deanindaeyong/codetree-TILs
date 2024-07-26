#include <iostream>
#include <algorithm>
using namespace std;
int n;
int a[100],b[100];
int main() {
    // 여기에 코드를 작성해주세요.
    bool nsame=false;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int j=0;j<n;j++){
        cin>>b[j];
    }
    sort(a,a+n);
    sort(b,b+n);
    for(int i=0;i<n;i++){

        if(a[i]!=b[i]){
            nsame=true;
        }
    }
    if(nsame){
     cout<<"No";   
    }else cout<<"Yes";
    return 0;
}