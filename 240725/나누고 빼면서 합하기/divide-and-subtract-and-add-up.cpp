#include <iostream>
using namespace std;
int arr[100];
int m,n;

int fc(){
    int x=m;
    int sum=0;
    sum+=arr[x-1];

    while(x!=1){
        if(x%2==0){
            x/=2;
            sum+=arr[x-1];
           
        }else {--x;sum+=arr[x-1];}
    }
    return sum;
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<fc();
    
    return 0;
}