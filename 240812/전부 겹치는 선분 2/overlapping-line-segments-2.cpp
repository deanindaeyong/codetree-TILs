#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int x1[100],x2[100];
    for(int i=0;i<n;i++){
        cin>>x1[i]>>x2[i];
    }

    for(int i=0;i<n;i++){
        int arr[101]={0,};
        for(int j=0;j<n;j++){
            if(i==j) continue;
            for(int k=x1[j];k<=x2[j];k++){
                arr[k]++;
            }
        }
        for(int j=0;j<=100;j++){
            if(arr[j]>=n-1){
                cout<<"Yes";
                return 0;
            }
        }

    }
    cout<<"No";

    return 0;
}