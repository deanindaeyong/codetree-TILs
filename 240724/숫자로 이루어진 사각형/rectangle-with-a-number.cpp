#include <iostream>
using namespace std;
void square(int n){
    int arr[n][n];
    int num=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr[i][j]=num;
            num++;
            cout<<arr[i][j]<<" ";
            if(num>9){
                num=1;
            }
        }
        cout<<endl;
    }
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    square(n);

    return 0;
}