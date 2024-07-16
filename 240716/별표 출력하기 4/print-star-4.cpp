#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int cnt=n;
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<cnt;j++){
            cout<<"* ";
        }
        cout<<endl;
        if(i>=n-1){
            cnt++;
        }else{cnt--;}
        
    }
    return 0;
}