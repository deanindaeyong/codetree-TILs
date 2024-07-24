#include <iostream>
using namespace std;
void even(int y,int x[]){
    for(int i=0;i<y;i++){
        if(x[i]%2==0){
            x[i]/=2;
            
        }
        cout<<x[i]<<" ";
    }

}
int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    cin>>a;
    int c[a];
    for(int i=0;i<a;i++){
        cin>>c[i];
    }

    even(a,c);

    return 0;
}