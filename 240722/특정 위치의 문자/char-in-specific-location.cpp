#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char arr[6]={'L','E','B','R','O','S'};
    char x;
    int index=-1;
    cin>>x;
    
    for(int i=0;i<6;i++){
        if(arr[i]==x){
            index=i;
        }
    }
    if(index==-1){
        cout<<"None";
    }
    else cout<<index;
    return 0;
}