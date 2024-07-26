#include <iostream>
#include <algorithm>
#include <tuple>
using namespace std;
int n;
bool comp(tuple<int,int,int> a,tuple<int,int,int >b){
    int k,w,i,k2,w2,i2;
    tie(k,w,i)=a;
    tie(k2,w2,i2)=b;
    if(k==k2){
        return w>w2;
    }
    else return k<k2;
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    tuple <int,int,int> t[n];
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        t[i]=make_tuple(a,b,i+1);
    }
    sort(t,t+n,comp);
    for(int i=0;i<n;i++){
        int k,w,e;
        tie(k,w,e)=t[i];
        cout<<k<<" "<<w<<" "<<e<<endl;
    }
    return 0;
}