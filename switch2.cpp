#include<iostream>
using namespace std;
int main(){
     int a,b;
     cout<<"Eneter A:"<<endl;
     cin>>a;

     cout<<"enter value of b:"<<endl;
     cin>>b;

     char op;
     cout<<"Enter The operation:"<<endl;
     cin>>op;

    switch(op){

        case '+':cout<<"The Result:"<<(a+b)<<endl;
                break;

        case '*':cout<<a*b<<endl;
            break;
        case '/':cout<<a/b<<endl;
        case '%':cout<<a%b<<endl;
    }

}