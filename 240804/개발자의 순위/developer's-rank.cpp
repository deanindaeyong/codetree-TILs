#include <iostream>
using namespace std;
int k,n;
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>k>>n;
    int arr[10][20];
    for(int i=0;i<k;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    /*
    모든 경기에 대해 각 개발자의 순위를 저장합니다.
순위가 불변하는 (a, b) 쌍을 찾아냅니다.
이러한 불변의 쌍들을 카운트합니다.

*/

    int total_cnt=0;
    for(int i=0;i<n;i++){
        
        for(int j=0;j<n;j++){ 
            int cnt=0;     
            for(int l=0;l<k;l++){
                if(j==i) continue;
                if(arr[l][i]>arr[l][j])
                {cnt++;
                //cout<<"arr[l][i]=  "<<arr[l][i]<<" arr[l][j]= "<<arr[l][j]<<endl;
            
                }
            }
        if(cnt==k){
            total_cnt++;
        }
      
        }   
    }
    cout<<total_cnt;

    return 0;
}