#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string c[200];
    int cnt=0;
    for(int i=0;i<200;i++){
        cin>>c[i];
        if(c[i]!="\0")
            cnt++;
    }
    for(int i=cnt-1;i>=0;i--){
        cout<<c[i]<<endl;
    }
    return 0;
}