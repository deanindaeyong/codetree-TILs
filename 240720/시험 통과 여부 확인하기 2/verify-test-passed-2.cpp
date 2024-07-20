#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,arr[4];
    int sum=0,cnt=0;
    cin>>n;
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=0;j<4;j++){
            cin>>arr[j];
            sum+=arr[j];
            
        }
        if(sum/4>=60){
            cout<<"pass"<<endl;cnt++;
        }
        else cout<<"fail"<<endl;
        
    }
    cout<<cnt;
    return 0;
}