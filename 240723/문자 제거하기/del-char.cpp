#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string c;
    cin>>c;
    int a;
    int len=c.length();
    for(int i=0;i<len-1;i++){
       
        cin>>a;
        if(a>=c.length()){
            c.erase(c.length()-1,1);
        }
        else c.erase(a,1);
        cout<<c<<endl;
    }

    return 0;
}