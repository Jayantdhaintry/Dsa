#include <iostream>
using namespace std;

void reverse(int arr[], int size){
    int start=0;
    int end=size-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}
int main(){

    int arr[6]={45,8,13,35,25,82};
    int brr[]={52,65,78,45,25};
    
    reverse(arr,6);
    reverse(brr,5);

    print(arr,6);
    print(brr,5);



}