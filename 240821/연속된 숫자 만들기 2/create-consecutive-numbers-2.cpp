#include <iostream>
using namespace std;
int a,b,c;
int main() {
    // 여기에 코드를 작성해주세요.
    
    cin>>a>>b>>c;
    int cnt=0;
    // cnt ==0
    if(c-b==1 && b-a==1){
    }
    //b-a=1
    else if(b-a<=2 || c-b<=2){
        cnt++;
        
    }else cnt=2;
    
    cout<<cnt;
    return 0;
}