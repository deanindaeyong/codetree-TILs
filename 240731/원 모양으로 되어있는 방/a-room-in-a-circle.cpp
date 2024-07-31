#include <iostream>
#include <climits>
using namespace std;
int n;
int main() {
    // 여기에 코드를 작성해주세요.
    int arr[1100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int min_d=INT_MAX;
    for(int i=0;i<n;i++){
        int dis=0;
        int prev=0;
        for(int j=0;j<n;j++){
            if(i==j)continue;
			else if(j<i){
            dis+=arr[j]*abs(n-i+j);
			}else dis+=arr[j]*abs(i-j);
//i=1
//n-i
        
           // 0 1 2 3 4 
           //  4 7 8 6 4

        }
        min_d=min(min_d,dis);
    }
    cout<<min_d;

    return 0;
}