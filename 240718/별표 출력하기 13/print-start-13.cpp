#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    for(int i=0;i<n*2;i++){
        if(i%2==0){
            for(int x=0;x<n-i/2;x++)
            cout<<"* ";

        }
        else for(int y=0;y<1+i/2;y++)
                cout<<"* ";

        cout<<endl;
    }
    return 0;
}