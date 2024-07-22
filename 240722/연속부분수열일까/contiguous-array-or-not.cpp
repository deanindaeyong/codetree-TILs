#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n1,n2,cnt=0;
    cin>>n1>>n2;
    int arra[n1],arrb[n2];
    for(int i=0;i<n1;i++){
        cin>>arra[i];
    }
    for(int j=0;j<n2;j++){
        cin>>arrb[j];
    }
    for(int i=0;i<n1-n2;i++){
       for(int j=i;j<n2+i;j++){
        if(arra[i]==arrb[j]){
            cnt++;
            break;
        }
       }
    }
    if(cnt==n2){
        cout<<"Yes";
    }
    else cout<<"No";
    return 0;
}