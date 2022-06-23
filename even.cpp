#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"the Vale of n:";
    cin>>n;
    int i=2;
    int sum=0;
    while(i<=n){
        if(i%2==0){
            sum=sum+i;
            i=i+1;
        }
        else{
            i=i+1;
        }
    }
    cout<<"THe sum of n even numbers:"<<sum<<endl;
}