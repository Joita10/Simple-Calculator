#include<iostream>
using namespace std;
double calculate(double n1,double n2, char ch){
    switch(ch){
        case '+': return n1+n2;break;
        case '-': return n1-n2;break;
        case '/': return n1/n2;break;
        case '*': return n1*n2;break;
        default: return 0;
    }
    
}
int main(){
    double n1,n2;
    char ch;
    cout<<"Enter 1st number: ";
    cin>>n1;
    cout<<"Enter operator: ";
    cin>>ch;
    cout<<"Enter 2nd number: ";
    cin>>n2;
    double result =calculate(n1,n2,ch);
    cout<<n1<<ch<<n2<<"="<<result;
}