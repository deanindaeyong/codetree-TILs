#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a,b,c;
    int al,bl,cl;
    cin>>a>>b>>c;
    al=a.length();bl=b.length();cl=c.length();
    if(al>bl){
        if(al>cl){
            if(bl>cl){
                cout<<al-cl;
            }else{cout<<al-bl;}
        }else{cout<<cl-bl;}

    }else{
        if(cl>al){
            if(cl>bl){
                cout<<cl-al;
            }
            else cout<<bl-al;
        }
        else cout<<bl-cl;
    }
    return 0;
}