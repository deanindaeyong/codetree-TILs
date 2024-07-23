#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a,b,x="",y="";
    getline(cin,a);getline(cin,b);
    x=a+b;y=b+a;
    if(x==y){
        cout<<"true";
    }else cout<<"false";
    return 0;
}