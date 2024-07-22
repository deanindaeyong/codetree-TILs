#include <iostream>
using namespace std;

int main() {
    // Please write your code here
    int n,q,arr[100],a,b,index,s,e;
    cin>>n>>q;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<q;i++){
        cin>>a;
        index=-1;
        if(a==1){
            cin>>b;
            cout<<arr[b-1]<<endl;;
        }
        if(a==2){
            cin>>b;
            for(int j=0;j<n;j++){
                if(arr[j]==b){
                    index=j+1;
        
                    break;
                }
                
            }
            if(index==-1){
                cout<<0<<endl;
            } else cout<<index<<endl;
        }
        if(a==3){
            cin>>s>>e;
            for(int k=s-1;k<e;k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}