#include <iostream>
using namespace std;
void arf(int a,char o, int b){
    if(o=='+'){
        cout<<a<<" + "<<b<<" = "<<a+b;
    }
    else if(o=='-'){
       cout<<a<<" - "<<b<<" = "<<a-b;
    }
    else if(o=='*'){
        cout<<a<<" * "<<b<<" = "<<a*b;
    }
    else if(o=='/'){
        cout<<a<<" / "<<b<<" = "<<a/b;

    }else cout<<"False";;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int a,c;
    char o;
    cin>>a>>o>>c;
    arf(a,o,c);
    return 0;
}