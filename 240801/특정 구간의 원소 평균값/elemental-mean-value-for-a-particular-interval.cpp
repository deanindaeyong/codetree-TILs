#include <iostream>
using namespace std;
int n;
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int total=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            int cnt=0;
            for(int k=i;k<=j;k++){
                sum+=arr[k];
                cnt++;
            }
            for(int l=i;l<=j;l++){
                if((double)sum/cnt==(double)arr[l]){
                  //  cout<<"sum/cnt= "<<(double)sum/cnt<<" arr[l]= "<<arr[l]<<endl;
                    total++;
                }
            }
        }
    }
    cout<<total-1;
    return 0;
}