#include <iostream>
#include <algorithm>
using namespace std;
int n;
class Dis{
    public:
    int x,y,r;
    Dis(int x,int y,int r):x(x),y(y),r(r){}
    Dis(){}
};
bool comp(const Dis &a,const Dis &b){
    if((a.x)*(a.x)+(a.y)*(a.y)==(b.x)*(b.x)+(b.y)*(b.y))
        return a.r<b.r;
    else return ((a.x)*(a.x)+(a.y)*(a.y))<((b.x)*(b.x)+(b.y)*(b.y));
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