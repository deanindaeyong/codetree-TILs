#include <iostream>
#include <string>
using namespace std;

int main() {

	string c;
    cin>>c;
    int len=c.length();
    c.erase(1,1);c.erase(len-3,1);
    cout<<c;
	return 0;

}