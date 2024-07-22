#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int x,arr[100],min=999,max=-999;
    for(int i=0;i<100;i++){
        cin>>arr[i];
        if(arr[i]==999 ||arr[i]==-999){
            break;
        }
        if(arr[i]<min){
            min=arr[i];
        }
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max<<" "<<min;
    return 0;
}