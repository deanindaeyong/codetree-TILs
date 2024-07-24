#include <iostream>
using namespace std;
int min(int a, int b, int c){
    if(a>b){
        if(b>c){
            return c;
        }else return b;
    //a<b
    }else {if(b>c){
                    if(c>a){ return a;}else return c;
            //c>b
            }else return a;}
    
}
int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c;
    cin>>a>>b>>c;
    cout<<min(a,b,c);
    return 0;
}