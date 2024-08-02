#include <iostream>
using namespace std;
int n,a1,b1,c1,a2,b2,c2; 

bool dis(int a, int b){
    if(abs(a-b)<=2){
        
        return true;
    }
    else if(abs(n-a+b)<=2){ return true;}
      // 10,9,8,7,1
    // 1,2,3,4,5

    else return false;
}
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    cin>>a1>>b1>>c1;
    cin>>a2>>b2>>c2;
    int cnt1=0,cnt2=0;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            for(int k=1;k<=n;k++){
                if((dis(a1,i) &&dis(b1,j)&&dis(c1,k))||(dis(a2,i) &&dis(b2,j)&&dis(c2,k))){
                    cnt1++;
                }
            }
        }
    }
  
    cout<<cnt1;
    return 0;
}