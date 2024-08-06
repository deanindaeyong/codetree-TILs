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
    int bing[100]={0,};
    int maxx=0;
    for(int i=1;i<=1000;i++){
        int cnt=0;//빙산 갯수
        bool bingstart=false;
        for(int j=0;j<n;j++){
            
            if(arr[j]>i){
                if(!bingstart){
                    cnt++;
                    bingstart=true;
                }
            }else bingstart=false;

        }
        maxx=max(maxx,cnt);
    }
    cout<<maxx;
    return 0;
}