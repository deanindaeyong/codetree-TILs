#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string c[200];
    for(int i=0;i<200;i++){
        cin>>c[i];
        if(i%2==0){
            cout<<c[i]<<endl;
        }
    }
    return 0;
}