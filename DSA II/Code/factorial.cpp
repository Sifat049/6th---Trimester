#include <iostream>

using namespace std;

int Factorial(int n)
{
    if (n <= 0)
        return 1;
    return n * Factorial(n - 1);
}

int main()
{
    int n;
    cin >> n;
    int f = Factorial(n);
    cout << "factorial:" << f << endl;

    return 0;
}