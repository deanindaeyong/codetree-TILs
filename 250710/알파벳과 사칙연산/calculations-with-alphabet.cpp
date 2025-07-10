#include <iostream>
#include <vector>
#include <climits>
using namespace std;

string expression;
int len;
vector<int> x;
int maxx=INT_MIN;
int back(){
    
    if(x.size()==len/2+1){
        int sum=0;
        sum+=x[0];
        for(int i=1;i<x.size();i++){
            if(expression[i*2-1]=='+'){
                sum+=x[i];
            }else if(expression[i*2-1]=='-'){
                sum-=x[i];

            }else{
                sum*=x[i];
        }
        }
        return maxx=max(maxx,sum);

    }
    for(int i=1;i<=4;i++){
        x.push_back(i);
        back();
        x.pop_back();
    }
    return maxx;

}
int main() {
    cin >> expression;
    len=expression.length();
    back();
    // Please write your code here.
    cout<<maxx;
    return 0;
}
