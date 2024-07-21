#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char x;
    int n,arr[4]={0,};
    for(int i=0;i<3;i++){
        cin>>x>>n;
        if(x=='Y' && n>=37) arr[0]++;
        else if(x=='N' && n>=37) arr[1]++;
        else if(x=='Y'&& n<37) arr[2]++;
        else arr[3]++;
    }

    for(int i=0;i<4;i++){

        cout<<arr[i]<<" ";

    }
    if(arr[0]>=2) cout<<"E ";
    return 0;
}