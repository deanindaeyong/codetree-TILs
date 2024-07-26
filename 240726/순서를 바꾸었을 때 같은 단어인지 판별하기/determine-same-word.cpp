#include <iostream>
#include <algorithm>
using namespace std;
string a,b;

int main() {
    // 여기에 코드를 작성해주세요.
    getline(cin,a);
    getline(cin,b);
    int na=a.length();
    int nb=b.length();
    sort(a.begin(),a.end());sort(b.begin(),b.end());
    if(a==b){
        cout<<"Yes";
    }else cout<<"No";
    return 0;
}