#include <iostream>
#include <climits>
#define MAX_NUM 6
using namespace std;
int arr[MAX_NUM];
int n =6;
string expression;
int maxx=INT_MIN;
int conv(int idx){

    return arr[expression[idx]-'a']; 
}
int cal(){
    int len=expression.size();
    int value=0;
    value+= conv(0);
    for(int i=2;i<len;i+=2){
        if(expression[i-1]=='+') value+=conv(i);
        else if(expression[i-1]=='-')value-=conv(i);
        else value*=conv(i);
    }
    return value;
}
void func(int cnt){
    if(cnt==n){
        maxx=max(maxx,cal());
        return;
    }
    for(int i=1;i<=4;i++){
        arr[cnt]=i;
        func(cnt+1);
    }
}
int main() {
    cin >> expression;
    func(0);
    cout<<maxx;
    // Please write your code here.

    return 0;
}
