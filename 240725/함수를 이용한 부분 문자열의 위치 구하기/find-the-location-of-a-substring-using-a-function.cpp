#include <iostream>
using namespace std;
string a,b;
int part(){
    if(a.find(b)!=string::npos){
        return a.find(b);
    }else return -1;
}


int main() {
    // 여기에 코드를 작성해주세요.
    cin>>a>>b;
    cout<<part();

    return 0;
}