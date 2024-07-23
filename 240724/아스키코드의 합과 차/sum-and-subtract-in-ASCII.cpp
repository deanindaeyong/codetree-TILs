#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char a,b;
    cin>>a>>b;
    int sub;
    if(a>b){
        sub=a-b;
    }else sub=b-a;
    cout<<(int)a+b<<" "<<sub;
    return 0;
}