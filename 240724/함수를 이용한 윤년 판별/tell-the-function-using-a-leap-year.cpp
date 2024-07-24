#include <iostream>
using namespace std;
bool leapyear(int a){
    bool yes= false;
    if(a%4==0){
        if(a%100!=0 ||a%400==0){
            yes=true;
            return yes;
        }

    }return yes;
}


int main() {
    // 여기에 코드를 작성해주세요.
    int y;
    cin>>y;
    if(leapyear(y)){
        cout<<"true";
    }cout<<"false";

    return 0;
}