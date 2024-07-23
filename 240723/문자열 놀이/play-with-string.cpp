#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string c;
    int q,q1,a,b;
    char qa,qb,temp;
    cin>>c>>q;
    for(int i=0;i<q;i++){
        cin>>q1;
        if(q1==1){
            cin>>a>>b;
            temp=c[a-1];
            c[a-1]=c[b-1];
            c[b-1]=temp;
            cout<<c<<endl;
        }else{
            cin>>qa>>qb;
            for(int i=0;i<c.length();i++){
                if(c[i]==qa){
                    c[i]=qb;
                }
            }
            cout<<c<<endl;
        }

    }
    return 0;
}