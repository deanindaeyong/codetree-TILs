#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int x=0;x<n-1-i;x++){
            cout<<" ";
        }
        for(int y=0;y<1+2*i;y++){
            cout<<"*";
        }

        cout<<endl;
    }
    for(int i=0;i<n-1;i++){
        for(int x=0;x<i+1;x++){
            cout<<" ";
        }
        for(int y=0;y<n-2*i;y++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

//i.  ""   *   i. "" *
//0.   1  1.   0. 1. 1
//1.    0 3.   1. 2
//2.      5.   2