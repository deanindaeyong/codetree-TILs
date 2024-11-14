#include <iostream>
using namespace std;

int n,arr[100000];
int partition(int arr[],int low,int high){
    int pivot=arr[high];
    int i=low-1;
    for(int j=low;j<=high-1;j++){
        if(arr[j]<pivot){
            i+=1;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}
void quick_sort(int arr[],int low,int high){
    if(low<high){
        int pos=partition(arr,low,high);
        quick_sort(arr,low,pos-1);
        quick_sort(arr,pos+1,high);
    }
}
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quick_sort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}