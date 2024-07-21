#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b;
    int count[10]={0,},sum=0;
    cin>>a>>b;
    
   
    while(a>1){
        
        count[a%b]++;
        a=a/b;
    }
    for(int i=0;i<10;i++){
        sum+=(count[i]*count[i]);
        
    }
    cout<<sum;
    
    return 0;
}