#include<iostream>
using namespace std;
 int Max(int arr[],int size){
    int max= INT_MIN;
    for (int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        return max;
        
    }
 }
 int Min(int arr[], int size){
    int min=INT_Max;
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
        return min;
    }
 }

int main(){
int n;
cin>>n;
int arr[100];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

cout<<"Th maximum value : "<<Max(arr,n);
cout<<"The minimum value is :"<<Min(arr,n);

}