#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<"  ";
        }
        for(int x=0;x<2*n-1-2*i;x++){
            cout<<"* ";
        }

        cout<<endl;
    }
    return 0;
}