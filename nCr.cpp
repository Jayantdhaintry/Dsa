#include<iostream>
using namespace std;

int fact(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f=f*i;

    }
    return f;

}


int nCr(int n,int r){

    int nume=fact(n);
    int deno=fact(r)*fact(n-r);
    return nume/deno;

}



int main(){

    int n,r;
    cin>>n>>r;
    cout<<"the Answer  "<<nCr(n,r)<<endl;


}