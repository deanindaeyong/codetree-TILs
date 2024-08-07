#include <iostream>
using namespace std;
int n;
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    int axis[20][2];
    for(int i=0;i<n;i++){
        cin>>axis[i][0]>>axis[i][1];
    }
    for(int i=0;i<=10;i++){
      for(int j=0;j<=10;j++){
        for(int k=0;k<=10;k++){
          int cnt=0;
          //x만3개
          for(int l=0;l<n;l++){
            if(axis[l][0]==i||axis[l][0]==k||axis[l][0]==j){
              cnt++;
            }

          }
          if(cnt==n){
            cout<<1;
            return 0;
          }
          cnt=0;
          //x2y1
          for(int l=0;l<n;l++){
            if(axis[l][0]==i||axis[l][1]==k||axis[l][0]==j){
              cnt++;
            }

          }
          if(cnt==n){
            cout<<1;
            return 0;
          }
          //x1y2
          cnt=0;
          for(int l=0;l<n;l++){
            if(axis[l][0]==i||axis[l][1]==k||axis[l][1]==j){
              cnt++;
            }

          }
          if(cnt==n){
            cout<<1;
            return 0;
          }
          //y3
          cnt=0;
          for(int l=0;l<n;l++){
            if(axis[l][1]==i||axis[l][1]==k||axis[l][1]==j){
              cnt++;
            }

          }
          if(cnt==n){
            cout<<1;
            return 0;
          }

        }
      }
    }

    cout<<0;
    return 0;
}

/*
x 3, x2 y1 , x1y2 y3

x

0 1 2 3
y

0 2 4 7
*/