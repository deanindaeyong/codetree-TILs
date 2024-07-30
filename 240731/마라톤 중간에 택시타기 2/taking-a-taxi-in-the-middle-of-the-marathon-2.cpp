#include <iostream>
#include <climits>

using namespace std;
int n;
int dis(int a,int b, int a1,int b1){
    return abs(a-a1)+abs(b-b1);
}
int main() {
    // 여기에 코드를 작성해주세요.


    cin>>n;
    int x[100],y[100];
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i];
    }
    int min=INT_MAX;
    for(int i=1;i<n-1;i++){
        for(int j=1;j<n-1;j++){
            if(dis(x[0],y[0],x[i],y[i])+dis(x[i],y[i],x[n-1],y[n-1])<min){
                min=dis(x[0],y[0],x[i],y[i])+dis(x[i],y[i],x[n-1],y[n-1]);
               // cout<<" i= "<<i<<" j= "<<j<<endl;
            }
        }
    }
    cout<<min;
    return 0;
}