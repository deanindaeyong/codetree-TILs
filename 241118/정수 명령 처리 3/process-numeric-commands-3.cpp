#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string x;
        int y;
        cin>>x;
        if(x=="push_back"){
            cin>>y;
            dq.push_back(y);
        }
        else if(x=="push_front"){
            cin>>y;
            dq.push_front(y);
        }
        else if(x=="pop_front"){
            cout<<dq.front()<<endl;
            dq.pop_front();
        }
        else if(x=="front"){
            cout<<dq.front()<<endl;
        }
        else if(x=="back"){
            cout<<dq.back()<<endl;
        }
        else if(x=="pop_back"){
            cout<<dq.back()<<endl;
            dq.pop_back();
        }
        else if(x=="size"){
            cout<<dq.size()<<endl;
        }
        else if(x=="empty"){
            cout<<dq.empty()<<endl;
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}