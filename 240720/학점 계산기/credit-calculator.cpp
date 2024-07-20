#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    double arr[n];
    double sum =0;

    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<fixed;
    cout.precision(1);
    cout<<sum/n<<endl;
    
    if(sum/n>=4.0) cout<<"Perfect";
    else if(sum/n>=3.0) cout<<"Good";
    else cout<<"Poor";
    return 0;
}