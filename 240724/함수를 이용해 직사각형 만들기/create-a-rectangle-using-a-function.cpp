#include <iostream>
using namespace std;
void print(int a,int b){
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++)
            cout<<"1";
        cout<<endl;
    }
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    cin>>n>>m;
    print(n,m);
    return 0;
}