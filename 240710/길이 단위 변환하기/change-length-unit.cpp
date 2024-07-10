#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    cout<<fixed;

    double foot=30.48;
    double mile=160934;

    cout.precision(1);

    cout<<"9.2ft = "<<foot*9.2<<"cm"<<endl;
    cout<<"1.3mi = "<<1.3*mile<<"cm";
    return 0;
}