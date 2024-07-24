#include <iostream>
using namespace std;
void car(int a,int b,string as,string bs){
    if(as.find(bs)!=string::npos){
        cout<<"Yes";
    }else cout<<"No";
}

int main() {
    // 여기에 코드를 작성해주세요.
    int c1,c2;
    
    cin>>c1>>c2;
    string sc1,sc2;
    cin.ignore();
    getline(cin,sc1);
    getline(cin,sc2);
    car(c1,c2,sc1,sc2);
    return 0;
}