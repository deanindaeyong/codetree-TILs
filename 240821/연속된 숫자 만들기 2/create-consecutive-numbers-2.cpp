#include <iostream>
using namespace std;
int a,b,c;
int main() {
    // 여기에 코드를 작성해주세요.
    
    cin>>a>>b>>c;
    int cnt=0;
    // cnt ==0
    if(c-b==1 && b-a==1){
        cout<<cnt;
    }
    //b-a=1
    else if(b-a==1 || c-b==1){
        cnt++;
        
    }else cnt=2;




    /*while(c-b!=1 || b-a!=1){
        int temp1;
        //a b c
        //b a c
        if(b-a>c-b){
            
            a=b+1;
            temp1=a;
            a=b;
            b=temp1;
            
        //a b c
        //a c b
        }else{
            c=(a+b)/2;
            temp1=c;
            c=b;
            b=temp1;
        }
        cout<<a<<" "<<b<<" "<<c<<endl;
        cnt++;

    }
    */
    cout<<cnt;
    return 0;
}