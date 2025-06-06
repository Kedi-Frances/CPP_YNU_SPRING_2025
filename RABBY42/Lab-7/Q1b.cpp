#include <iostream>
using namespace std;

bool isPalindrome(string s) {
    int left = 0, right = s.length() - 1;
    while (left < right) {
        if (s[left++] != s[right--]) return false;
    }
    return true;
}


int main() {
    string s;
    cin >> s;
    cout << (isPalindrome(s) ? "Palindrome" : "Not a palindrome");
    return 0;
}
