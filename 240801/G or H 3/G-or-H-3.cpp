#include <iostream>
using namespace std;
int n,k;
int score(char a){
    if(a=='G')
    return 1;
    else if(a=='H')
    return 2;
    else return 0;
}
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n>>k;
    int mx=0;
    
    int arr[10000];
    char x[10000];
    for(int i=0;i<n;i++)
    cin>>arr[i]>>x[arr[i]];

    for(int i=1;i<=10000-k;i++){
        int sum=0;
        for(int j=i;j<=i+k;j++){
            sum+=score(x[j]);
        }
        mx=max(mx,sum);
    }
    cout<<mx;
    return 0;
}