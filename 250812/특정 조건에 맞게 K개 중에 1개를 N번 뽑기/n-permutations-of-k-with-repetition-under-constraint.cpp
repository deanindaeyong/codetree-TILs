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
        
        if(x>=2){
            int temp=a.back();
            a.pop_back();
            int temp2=a.back();
            a.push_back(temp);
           if(temp2==temp && temp==i){
            continue;
           }
        }
        
        a.push_back(i);
        choose(x+1);
        a.pop_back();
        
    }
}
int main() {
    cin >> K >> N;
    choose(0);
    // Please write your code here.

    return 0;
}
