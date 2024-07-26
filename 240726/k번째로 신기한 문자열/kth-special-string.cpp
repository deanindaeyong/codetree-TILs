#include <iostream>
#include <algorithm>
using namespace std;
int n,k;
string t;
string a[200];
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n>>k>>t;

   
    for(int i=0;i<n;i++){
        getline(cin,a[i]);

    }
    
    sort(a,a+n);
   
    int wat=0;
    for(int i=0;i<n;i++){
        if(a[i].substr(0,t.length())==t){
           wat=i;
           break;
          
        }
    }

    cout<<a[wat+k-1];
    return 0;
}