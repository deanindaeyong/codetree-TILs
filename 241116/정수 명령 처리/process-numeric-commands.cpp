#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> st;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        string y;
        cin>>y;
        if(y=="push"){
            cin>>x;
            st.push(x);
        }
        else if(y=="size"){
            cout<<st.size()<<endl;
        }
        else if(y=="empty"){
            cout<<st.empty()<<endl;
        }
        else if(y=="pop"){
            
            cout<<st.top()<<endl;
            st.pop();
        }
        else if(y=="top"){
            cout<<st.top()<<endl;
        }

    }
    return 0;
}