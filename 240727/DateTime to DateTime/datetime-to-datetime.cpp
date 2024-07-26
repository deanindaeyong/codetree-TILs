#include <iostream>
using namespace std;
int cnt(int a,int b,int c){

    int a0=11;
    int b0=11;
    int c0=11;

    return (a*24+b)*60+c-((11*24+11)*60+11);


}
int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c;
    cin>>a>>b>>c;
    cout<< cnt(a,b,c);
    
    return 0;
}