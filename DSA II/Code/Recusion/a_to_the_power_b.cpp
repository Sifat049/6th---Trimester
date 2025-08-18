#include <iostream>
using namespace std;

int power(int a, int b)
{
    if (b == 0)
        return 1;               
    return a * power(a, b - 1); 
}
void printPower(int a, int b)
{
    int x = power(a, abs(b));
    cout << "Power function called with a = " << a << " and b = " << b << endl;
    if (b < 0)
    {
        cout << "Since b is negative, the result is 1/" << x << endl;}
        else cout << "Since b is positive, the result is " << x << endl;
    }
    int main()
    {
        int a, b;
        cout << "Enter base (a): ";
        cin >> a;
        cout << "Enter exponent (b): ";
        cin >> b;

        printPower(a, b);
      //  int result = power(a, b);
      //  cout << a << " raised to the power of " << b << " is: " << result << endl;

        return 0;
    }