#include<iostream>
using namespace std;

int main(){ 
    char button;
    int a, b;
    cout<<"Enter two values";
           cin>>a>>b;
    cout<<"Enter operator: ";
    cin>>button;
    switch (button)
    {
    case '+':
        cout<<a+b;
        break;
    case '-':
        cout<<a-b;
        break;
    case '*':
        cout<<a*b;
        break;
    case '%': //remanider
        cout<<a/b;
        break;
    case '/': //quotient
        cout<<a/b;
        break;
        
    default: 
    cout<<"Enter another output";
        break;
    }
}