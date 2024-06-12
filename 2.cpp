// WAP to calculate the sum, difference and multiplication of two numbers using
// single function and display the result in main ()

#include <iostream>
using namespace std;
 int calculate(float a,float b,char op){
    printf("Enter the first number: ");
    cin>>a;
    printf("Enter the second number: ");
    cin>>b;
    printf("Enter the operation: ");
    cin>>op;
    switch(op){
        case '+':
            return a+b;
            break;
        case '-':
            return a-b;
            break;
        case '*':
            return a*b;
            break;
    }

    
 }
int main()
{
    float a,b;
    char op;
    cout<<calculate(a,b,op);
    return 0;
}