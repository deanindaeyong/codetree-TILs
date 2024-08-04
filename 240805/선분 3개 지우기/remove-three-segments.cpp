#include <iostream>
using namespace std;
int n;
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    int x[10],y[10];
    for(int i=0;i<n;i++){
            cin>>x[i]>>y[i];
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                int checked[101]={0,};
                bool nok=false;
                for(int l=0;l<n;l++){
                    if(i==l||j==l || k==l) continue;
                    for(int h=x[l];h<=y[l];h++){checked[h]+=1;}
                }
                for(int v=0;v<=100;v++)
                   if(checked[v]>1){nok=true;};
                if(!nok)cnt++;   
            }
        }
    }
    cout<<cnt;
    return 0;
}
//0 1 2 3 4