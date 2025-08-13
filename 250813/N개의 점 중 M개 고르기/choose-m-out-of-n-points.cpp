#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int n, m;
int x[20], y[20];
int minn=INT_MAX;
vector<int> v;

void choose(int cnt,int start){
    int maxx=0;
    
    if(cnt==m){
        for(int i=0;i<v.size();i++){
            for(int j=i+1;j<v.size();j++)
            {
                maxx=max(maxx,(x[v[i]]-x[v[j]])*(x[v[i]]-x[v[j]])+(y[v[i]]-y[v[j]])*(y[v[i]]-y[v[j]]));
                
            }
            
        }
        minn=min(minn,maxx);
        return;
    }
    for(int i=start;i<n;i++){
        v.push_back(i);
        choose(cnt+1,i+1);
        v.pop_back();
    }
}
int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }
    choose(0,0);
    cout<<minn;
    // Please write your code here.

    return 0;
}
