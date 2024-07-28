#include <iostream>
#include <algorithm>
#define OFFSET 1000
using namespace std;
int n;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[1001]={0,};
    int cntm=0,cntp=0, ansp=0,ansm=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        arr[i]+=OFFSET;
    }
    for(int i=0;i<n;i++){
        if(i>0 &&arr[i]<1000 && arr[i-1]<1000){
            cntm++;
        }else cntm=1;
        if(i>0 &&arr[i]>=1000 && arr[i-1]>=1000){
            cntp++;
        }else cntp=1;

        ansp=max(cntp,ansp);
        ansm=max(cntm,ansm);
    }
    cout<<max(ansp,ansm);
    return 0;
}