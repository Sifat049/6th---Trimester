#include <iostream>

using namespace std;

int Sum_digit_givenNum(int n)
{
    if (n == 0)
        return 0;

    return n % 10 + Sum_digit_givenNum(n / 10);
}

int main()
{
    int n;
    cin >> n;
    int f = Sum_digit_givenNum(n);
    cout << "Sum of digit of a given Number : " << f << endl;

    return 0;
}