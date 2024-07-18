#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i%2==0)
            cout<<j+n*i+1<<" ";
            else cout<<n*(i+1)-j<<" ";

        }
        cout<<endl;
    }
    return 0;
}
/*9.   n=4,i=1.   n*i+5
  17.        3 
  */