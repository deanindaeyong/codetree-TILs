#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[3][3],arr2[3][3],arr3[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr2[i][j];
            arr3[i][j]=arr[i][j]*arr2[i][j];
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}