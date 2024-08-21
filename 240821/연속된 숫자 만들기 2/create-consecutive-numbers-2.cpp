#include <iostream>
using namespace std;
int a,b,c;

int main() {
    
    cin>>a>>b>>c;
    int cnt=0;
    //무조건 양쪽 으로만 움직이고

    while(c-b!=1 ||b-a!=1){ // 세자리 같음
        // 2개 연속 
        if(c-b==1){
            // 4 6 7
           if(b-a==2) {
            c=a+1;
            swap(c,b);
            //3 6 7
           }else {
            c=a+2;
            swap(c,b);}
        }
        // 4 5
        else if(b-a==1){
            // 7
            if(c-b==2){
                a=c-1;
                swap(a,b);
            }else {
                a=c-2;
                swap(b,a);
            }

        }else {
            if(c-b>b-a){
                a=c-2;
                swap(a,b);
            }
            else if(b-a>c-b){
                c=a+2;
                swap(b,c);
                
            }else{
                c=a+1;
                swap(b,c);
            }

        }
   
        cnt++;
    }
    cout<<cnt;
    return 0;
}