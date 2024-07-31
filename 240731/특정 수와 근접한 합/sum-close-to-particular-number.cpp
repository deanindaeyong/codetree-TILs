#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int s,n;
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n>>s;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //  6 20
//  5 7 9 1 13 8
    int min_v=INT_MAX;
   
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int sum=0;
            for(int k=0;k<n;k++){
                
                if(k==i||k==j)continue;
                else{
                    sum+=arr[k];
                }

            }
            min_v=min(min_v,abs(s-sum));
        }
    }
cout<<min_v;
    return 0;
}