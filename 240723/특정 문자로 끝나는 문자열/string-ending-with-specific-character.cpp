#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string c[10];
    for(int i=0;i<10;i++){
        cin>>c[i];
    }
    char a;
    int cnt=0;
    cin>>a;
    for(int i=0;i<10;i++){
        if(c[i][c[i].length()-1]==a){
            cout<<c[i]<<endl;
            cnt++;
        }
    }
    if(cnt==0){
        cout<<"None";
    }
    return 0;
}