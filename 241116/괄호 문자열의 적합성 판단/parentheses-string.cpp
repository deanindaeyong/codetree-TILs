#include <iostream>
#include <stack>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    stack<char> st;
    string x;
    bool correct=false;
    cin>>x;
    for(int i=0;i<x.length();i++){
        if(x[i]=='('){
            st.push('(');
        }
        else{
            if(st.empty()){
                cout<<"No";
                correct=false;
            }
            st.pop();
        }
    }
    if(!correct){
        cout<<"No";
    }else cout<<"Yes";
    return 0;
}