#include<iostream>
using namespace std;

bool palindrome(string str){
    int n = str.length();
    if (n <= 1) return true; 
    if (str[0] != str[n - 1]) return false; 
    return palindrome(str.substr(1, n - 2)); 
}
int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str); 
    if (palindrome(str)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }
    return 0;
}