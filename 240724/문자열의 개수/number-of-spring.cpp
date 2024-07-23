#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a,c[200];
    int cnt=0;
    for(int i=0;i<200;i++){
        cin>>a;
        if(a=="0"){
            break;
        }
        else{
            c[i]=a;
            cnt++;
        }
    }
    cout<<cnt<<endl;
    for(int i=0;i<cnt;i++){
        if(i%2==0){
            cout<<c[i]<<endl;
        }
    }
    return 0;
}