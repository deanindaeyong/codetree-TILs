#include <iostream>
#include <tuple>
#include <algorithm>
using namespace std;
int n;
bool comp(tuple<int, int, int> a,tuple<int, int,int> b){
    int h1,w1,a1;
    tie(h1,w1,a1)=a;
    int h2,w2,b1;
    tie(h2,w2,b1)=b;
    if(h1==h2)
        if(w1==w2){

            return a1<b1; 
        }else return w1>w2;
    else return h1>h2;
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    int a,b;
    tuple<int,int,int> student[n];
    for(int i=0;i<n;i++){
        cin>>a>>b;
        student[i]=make_tuple(a,b,i+1);
    }
    sort(student,student+n,comp);
    for(int i=0;i<n;i++){
        int a,b,c;
        tie(a,b,c)=student[i];
        cout<<a<<" "<<b<<" "<<c<<endl;
    }

    return 0;
}