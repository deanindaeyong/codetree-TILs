#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int n;
class Dis{
    public:
    int x,y,r;
    Dis(int x,int y,int r):x(x),y(y),r(r){}
    Dis(){}
};
bool comp(const Dis &a,const Dis &b){
    if(abs(a.x)+abs(a.y)==abs(b.x)+abs(b.y))
        return a.r<b.r;
    else return abs(a.x)+abs(a.y)<abs(b.x)+abs(b.y);
}
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    int a,b;
    Dis dis[n];
    
    for(int i=0;i<n;i++){
        cin>>a>>b;
        dis[i]=Dis(a,b,i+1);

    }
    sort(dis,dis+n,comp);
  
    for(int i=0;i<n;i++){
        cout<<dis[i].r<<endl;
    }
    return 0;
}