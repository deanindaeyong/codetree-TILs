#include <iostream>
using namespace std;
int graph[1000][1000]={0,};
bool visited[1000]={false,};
int n,m;
int cnt=0;
int maxx=-1;
void dfs(int vertex){
    for(int i=1;i<=n;i++){
        if(graph[vertex][i]==1&&!visited[i]){
            visited[i]=true;
            cnt++;
            maxx=max(maxx,cnt);
            dfs(i);
            
        }
    }
}
int main() {
   
    cin>>n>>m;
    
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        graph[x][y]=1;
        graph[y][x]=1;
       

    }
    dfs(1);
    cout<<maxx-1;
    // Please write your code here.
    return 0;
}