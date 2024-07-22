#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    cin>>arr[0];
    int max=1,min=1000;
    for(int i=1;i<10;i++){
        cin>>arr[i];
        if(max<arr[i] && arr[i]<500){
            max=arr[i];
        }
        if(arr[i]>500){
            if(min>arr[i]){
                min=arr[i];
            }
        }
    }
    cout<<max<<" "<<min;
    return 0;
}