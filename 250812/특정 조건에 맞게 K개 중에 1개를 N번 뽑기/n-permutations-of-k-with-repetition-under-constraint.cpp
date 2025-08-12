#include <iostream>
#include <vector>
using namespace std;

int K, N;
vector<int> a;
void choose(int x){
    if(x==N){
        for(int i=0;i<a.size();i++){
            cout<<a[i]<<" ";
        }
        cout<<'\n';
        return;
    }
    for(int i=1;i<=K;i++){
        
        if(x>=2&&a[x-2]==i&&a[x-1]==i){
            continue;
          
        }else{
        
        a.push_back(i);
        choose(x+1);
        a.pop_back();}
        
    }
}
int main() {
    cin >> K >> N;
    choose(0);
    // Please write your code here.

    return 0;
}
