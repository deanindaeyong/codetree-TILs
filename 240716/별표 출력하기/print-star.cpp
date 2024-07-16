#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;
    cin>>n;
    int cnt=n/2-1;
    if(n==1){
        cnt=1;
    }
    for(int i=0;i<=2*n-2;i++){
        for(int j=0;j<cnt;j++){
            cout<<"* ";
            
        }
      cout<<endl;
      if(i>=n-1){
        cnt--;
      }
      else{cnt++;}
    }
    return 0;
}