#include <iostream>
#include <queue>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    queue<int> q;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string x;
        int y;
        cin>>x;
        if(x=="push"){
            cin>>y;
            q.push(y);
        }
        else if(x=="front"){
            cout<<q.front()<<endl;
        }
        else if(x=="size"){
            cout<<q.size()<<endl;
        }
        else if(x=="empty"){
            cout<<q.empty()<<endl;
        }
        else if(x=="pop"){
            cout<<q.front()<<endl;
            q.pop();
        }
    }
    return 0;
}