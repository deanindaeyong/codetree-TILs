#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    string x,y="";
    for(int i=0;i<n;i++){
        cin>>y;
        x.append(y);

    }
    for(int i=0;i<x.length();i++){
       if((i+1)%5==0){
        cout<<x[i]<<endl;
       }else cout<<x[i];
    }
    return 0;
}