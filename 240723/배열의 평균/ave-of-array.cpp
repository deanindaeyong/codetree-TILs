#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[2][4];
    double total_sum=0.0;
    cout<<fixed;
    cout.precision(1);
    for(int i=0;i<2;i++){
        double sum=0.0;
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
            sum+=arr[i][j];
            total_sum+=arr[i][j];
        }
        cout<<sum/4<<" ";
    }
    cout<<endl;
    for(int i=0;i<4;i++){
        double sum2=0.0;
        for(int j=0;j<=1;j++){
            sum2+=arr[j][i];
        }
        cout<<sum2/2<<" ";

    }
    cout<<endl;
    cout<<total_sum/8;
    return 0;
}