#include <iostream>
using namespace std;
int n,m;
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n>>m;
    int arr[100][2];
    for(int i=0;i<m;i++){
        cin>>arr[i][0]>>arr[i][1];
        if(arr[i][0]>arr[i][1]){
            swap(arr[i][0],arr[i][1]);
        }
    }
    int maxx=0;

    
    for(int i=0;i<m;i++){
        int cnt=1;
        int curr_x=arr[i][0],curr_y=arr[i][1];
        for(int j=i+1;j<m;j++){
            if(arr[j][0]==curr_x&&arr[j][1]==curr_y){
                cnt++;
            }
        }
        maxx=max(maxx,cnt);

    }
    cout<<maxx;
    return 0;
}