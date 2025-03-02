#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n;
vector<pair<int,int>> line;
int maxx=0;
void back(int index,int last_num,int count){

    if(index==n){
        maxx=max(maxx,count);
        return;
    }

    if(line[index].first>last_num){
        back(index+1,line[index].second,count+1);
    }
    back(index+1,last_num,count);    
    
}
int main() {
    cin>>n;
    line.resize(n);
    for(int i=0;i<n;i++){
        cin>>line[i].first>>line[i].second;
    }
    sort(line.begin(),line.end());
    back(0,-1,0);

    cout<<maxx;
    // Please write your code here.
    return 0;
}