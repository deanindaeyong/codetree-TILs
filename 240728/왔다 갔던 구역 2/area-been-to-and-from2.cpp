#include <iostream>
using namespace std;
#define MAX 2001
#define OFFSET 1000
int main() {
    // 여기에 코드를 작성해주세요.
    int n,a;
    cin>>n;
    int arr[MAX];
    char b;
    int x1[MAX]={0,},x2[MAX]={0,};
    int curr=0;

    for(int i=0;i<n;i++){
        cin>>a>>b;
        if(b=='R'){
            x1[i]=curr;
            x2[i]=curr+a;
            curr+=a;
        }else {
            x1[i]=curr-a;
            x2[i]=curr;
            curr-=a;
        }
        x1[i]+=OFFSET;
        x2[i]+=OFFSET;
    }
    for(int i=0;i<n;i++){
        for(int j=x1[i];j<x2[i];j++){
            arr[j]++;
          
        }
    }

    int cnt=0;
    for(int i=0;i<MAX;i++){
        if(arr[i]>=2){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}