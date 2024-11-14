#include <iostream>
using namespace std;
int n,arr[100000];
void merge(int arr[],int low, int mid, int high){
    int sorted[100000];
    int i=low,j=mid+1;
    int k=low;
    while(i<=mid&&j<=high){
        if(arr[i]<=arr[j]){
            sorted[k]=arr[i];
            i++;k++;
        }
        else{sorted[k]=arr[j];j++;k++;}
    }
    while(i<=mid){
        sorted[k]=arr[i];
        i++;k++;
    }
    while(j<=high){
        sorted[k]=arr[j];
        j++;k++;
    }
    for(int l=low;l<=high;l++){
        arr[l]=sorted[l];
    }
}
void merge_sort(int arr[],int low,int high){
 if(low<high){
    int mid=(low+high)/2;
    merge_sort(arr,low,mid);
    merge_sort(arr,mid+1,high);
    merge(arr,low,mid,high);
 }
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    merge_sort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}