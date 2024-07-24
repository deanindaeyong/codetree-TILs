#include <iostream>
using namespace std;
string c;
void tal(string &a){
    bool two= false;
    for(int i=0;i<a.length();i++){
        for(int j=i+1;j<a.length();j++){
            if(a[i]!=a[j]){
                two=true;
            }
        }
    }
    if(two){
        cout<<"Yes";
    }else cout<<"No";
}
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>c;
    tal(c);
    return 0;
}