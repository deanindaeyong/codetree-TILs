#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<=j && i!=0 && i!=n-1&& j!=n-1 )
            cout<<"  ";
            else cout<<"* ";
        }
        cout<<endl;
    }
    
    return 0;
}

/* 0 1 2 3 4 5
0* * * * * * 
1*         *
2* *       *
3* * *     * 
4* * * *   *
5* * * * * * */