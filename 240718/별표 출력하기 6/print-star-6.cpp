#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int cnt=n;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<"  ";}
        for(int x=0;x<2*n-1-2*i;x++){
            cout<<"* ";}
        cout<<endl;
    }
   for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-2;j++){
        cout<<"  ";
    }
    for(int x=0;x<2*i+3;x++){
        cout<<"* ";
    }
    cout<<endl;
   }
    return 0;
}