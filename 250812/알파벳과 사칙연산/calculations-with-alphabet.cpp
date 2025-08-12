#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int n,arr[10],cnt=0,maxx=INT_MIN;
string expression;
int var[10];
void func(int a){
    
    if(a==cnt){
        int sum=0;
        sum+=arr[expression[0]-'a'];
       
        for(int i=1;i<n;i=i+2){
            
            if(expression[i]=='+'){
                sum+=arr[expression[i+1]-'a'];
            }else if(expression[i]=='-'){
                sum-=arr[expression[i+1]-'a'];
            }else if(expression[i]=='*'){
                sum*=arr[expression[i+1]-'a'];
            }
            
            
        }
        maxx=max(maxx,sum);
        return;
    }
    for(int i=1;i<=4;i++){
       
        
            arr[var[a]]=i;
            func(a+1);
          
       
     
    }
}
int main() {
    cin >> expression;
    n=expression.length();
    for(int i=0;i<n;i++){
        if(expression[i]>='a'&&expression[i]<='f'){
            arr[expression[i]-'a']++;
            
        }
    }
    for(int i=0;i<10;i++){
        if(arr[i]>0){var[cnt++]=i;}
    }
    
    func(0);
    cout<<maxx;
    // Please write your code here.
    
    return 0;
}
