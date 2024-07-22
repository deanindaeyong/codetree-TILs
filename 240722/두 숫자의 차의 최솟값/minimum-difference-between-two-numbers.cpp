#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int min=99;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(min>(arr[j]-arr[i])){
                min=arr[j]-arr[i];
            }
        }
    }
    cout<<min;
    return 0;
}