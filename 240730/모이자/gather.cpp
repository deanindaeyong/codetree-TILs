#include <iostream>
#include <climits>
using namespace std;
int n;
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    int arr[100];
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            sum+=abs((i-j))*arr[j];
            

        }
        
        if(min>sum){
            min=sum;
        }
    }
    cout<<min;
    return 0;
}