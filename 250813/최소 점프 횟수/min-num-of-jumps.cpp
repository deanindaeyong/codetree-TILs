#include <iostream>
#include <climits>
using namespace std;

int n;
int num[10];
int minn=INT_MAX, cnt=0;
void jump(int* arr, int idx, int dist){
    if(idx==n-1){
        minn=min(minn, dist);
        return;
    }else if(idx>=n) return;
    if(arr[idx]==0){ return;}
    for(int i=1;i<=arr[idx];i++){
        jump(arr,idx+i,dist+1);
    }
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    jump(num,0,cnt);
    if(minn==INT_MAX) minn=-1;
    cout<<minn;
    // Please write your code here.

    return 0;
}
