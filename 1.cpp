//WAP to check whether a given number is a prime number or not


#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;

    for (int i = 3; i < n / 2; i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main(
)
{
    int n;
    cin >> n;
    string s = isPrime(n) ? "Prime" : "Not Prime";
    cout << s << endl;
    return 0;
}