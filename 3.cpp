// WAP to create a function which takes two arguments and returns the minimum
// value. Call the function and assign it to a variable. Again, call this
// function and assign the value - 100. Trace the output

#include <iostream>
using namespace std;

int minimum(int a, int b) { 
    return (a < b) ? a : b; 
    }
int main() {
    int a, b;
    cout << "Enter any 2 numbers: ";
    cin >> a >> b;

    int result1 = minimum(a, b);
    cout << "The minimum value between " << a << " and " << b <<" is:  " << result1 << endl;

    int result2 = minimum(result1, -100);
    cout << "The minimum value between " << result1 << " and " << "-100" <<" is:  " << result2 << endl;

    return 0;
}