#include <iostream>
using namespace std;
int n;
void pt(int a){
    if(a==0)
        return;
    pt(a-1);
    cout<<"HelloWorld"<<endl;
}
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    pt(4);
    return 0;
}