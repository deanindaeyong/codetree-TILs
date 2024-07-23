#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string c;
    int q,a;
    cin>>c>>q;
    int len=c.length();
    for(int i=0;i<q;i++){
        cin>>a;
        if(a==1){
            c=c.substr(1,len-1)+c.substr(0,1);
            cout<<c<<endl;
        }
        else if(a==2){
            c=c.substr(len-1,1)+c.substr(0,len-1);
            cout<<c<<endl;
        }
        else if(a==3){
            for(int j=0;j<len/2;j++){
                char temp=c[j];
                c[j]=c[len-1-j];
                c[len-1-j]=temp;
            }
            cout<<c<<endl;
        }
    }
    return 0;
}