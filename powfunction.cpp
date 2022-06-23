#include<iostream>
using namespace std;
 
int pow(int a,int b){
    
    int ans=1;
    int i=1;
    for(i=1;i<=b;i++){
        ans=ans*a;
    }
    return ans;

}
int main(){
    int x,y;
    cin>>x;
    cin>>y;
    
    cout<<"the power:"<<pow(x,y)<<endl;

}