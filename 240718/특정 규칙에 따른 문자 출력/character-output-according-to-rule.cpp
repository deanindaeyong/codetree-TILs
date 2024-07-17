#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        for(int x=0;x<n-1-i;x++)
        cout<<"  ";
        for(int y=0;y<i+1;y++)
        cout<<"@ ";

        cout<<endl;
    }
    for(int i=0;i<n-1;i++){
        for(int x=0;x<n-1-i;x++)
        cout<<"@ ";
        cout<<endl;
    }
    
    return 0;
}