

#include <iostream>




using namespace std;
/*

bool isVowel(char c)
{
    c = tolower(c);

        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int countVowels(const string &str, int l, int h)
{
    if (l == h)
    {
        return isVowel(str[l]) ? 1 : 0;
    }

    int mid = l + (h - l) / 2;
    int leftCount = countVowels(str, l, mid);
    int rightCount = countVowels(str, mid + 1, h);

    return leftCount + rightCount;
}
int main()
{
    string input = "HELOO WORLD";

    string vowels = countVowels(input, 0, input.length() - 1);
    cout << "Vowels in the string: " << vowels << endl;

    return 0;
}



*/

bool isVowel(char ch)
{
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}
int countVowels(const string &s, int l, int h)
{
    if (l == h)
    {
        return isVowel(s[l]) ? 1 : 0;
    }
    int m = l + (h - l) / 2;
    int leftCount = countVowels(s, l, m);
    int rightCount = countVowels(s, m + 1, h);
    return leftCount + rightCount;
}
int main()
{
    string s = "Hello World! This is a test string.";
    int vowelCount = countVowels(s, 0, s.length() - 1);
    cout << "Total vowels in the string: " << vowelCount << endl;
    return 0;
}