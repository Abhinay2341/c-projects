#include<iostream>
using namespace std;

int main()
{

    int n1,n2;
    cout<<"enter two numbers";
    cin>>n1>>n2;

    int op;
    cout<<"enter two operands";
    cin>>op;


switch(op)
{
case '+':
 cout <<n1+n2;
 break;

case '-':
 cout<<n1-n2;
 break;

case '*':
 cout<<n1*n2;
 break;

case '/':
 cout<<n1/n2;
 break;

default:
 cout<<"enter another operand";
 break;
 
}
return 0;
}