#include <iostream>
#include <queue>
using namespace std;

int n;


queue<pair<int,int>> q;
bool visited[1000001]={false,};
int bfs(){
    q.push({n,0});
    visited[n]=true;
    while(!q.empty()){
        int x=q.front().first;
        int y=q.front().second;
        q.pop();
        if(x==1){
            return y;
        }
        
        for(int i=0;i<4;i++){
            int nx=x;
            switch(i){
            case 2:{ nx=x-1; 
            break;
            }
            
            case 3:{ nx=x+1;
            break;
            }
            case 1:{
                if(x%2==0){
                 nx=x/2;
            }else{continue;}
            break;
            }
            case 0:{
                if(x%3==0){
             nx=x/3;}
             else{continue;}
             break;
             }

            
            }
            if(!visited[nx]){
            q.push({nx,y+1});
            visited[nx]=true;
            }
        }
    }

}

int main() {
    cin>>n;
    cout<<bfs();
    // Please write your code here.
    return 0;
}