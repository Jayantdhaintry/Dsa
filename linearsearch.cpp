#include <iostream>
using namespace std;

bool search(int arr[],int size,int key){
    
    for(int i=0;i<size;i++){

        if(arr[i]==key){
            return 1;
        }
        

    }

    return 0;

}

int main(){

    int arr[10]={3,67,2,78,5,7,23,45,54,22};
    int key;
    cout<<"The key "<<endl;
    cin>>key;

    bool found= search(arr,10,key);
    if (found){
        cout<<"The key is present"<<endl;
    }
    else{
        cout<<"The Key IS Absent"<<endl;
    }
}