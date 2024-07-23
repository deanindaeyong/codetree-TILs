#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char a;
    int cnt=0;
    cin>>a;
    string c[5] ={"apple","banana","grape","blueberry","orange"};
        for(int i=0;i<5;i++){
            for(int j=2;j<4;j++){
                if(c[i][j]==a){
                    cout<<c[i]<<endl;
                    cnt++;
                    
                }
            }
        }
    cout<<cnt;
    return 0;
}