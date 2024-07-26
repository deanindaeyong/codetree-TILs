#include <iostream>
#include <algorithm>
using namespace std;
int n,k;
string t;
string a[200];
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n>>k;
    cin.ignore();
    getline(cin,t);
   
    for(int i=0;i<n;i++){
        getline(cin,a[i]);

    }
    
    sort(a,a+n);
   
    int wat=0;
    for(int i=0;i<n;i++){
        if(a[i].find(t)!=string::npos){
           wat=i;
           break;
          
        }
    }
    cout<<a[wat+k-1];
    return 0;
}