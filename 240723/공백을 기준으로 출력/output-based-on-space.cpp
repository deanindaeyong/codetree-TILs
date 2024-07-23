#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a,b;
    getline(cin,a);getline(cin,b);
    
    for(int i=0;i<a.length();i++){
        if(a[i]==' '){
            continue;
        }
        cout<<a[i];
    }
    for(int i=0;i<b.length();i++){
        if(b[i]==' '){
            continue;
        }
        cout<<b[i];
    }
    return 0;
}