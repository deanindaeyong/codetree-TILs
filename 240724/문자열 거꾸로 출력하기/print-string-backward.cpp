#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    for(;;){
        cin>>a;
        if(a=="END"){
            break;
        }
        else{
            int len=a.length();
            for(int i=0;i<len/2;i++){
               char temp=a[i];
               a[i]=a[len-1-i];
               a[len-1-i]=temp;
            }
            
            cout<<a<<endl;
        }
    }
    return 0;
}