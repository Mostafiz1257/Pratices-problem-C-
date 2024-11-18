#include <iostream>
#include <string>
using namespace std;

//using two pointer
bool isPalindrome(const string &str)
{
    int left = 0, right = str.length() - 1;
    while (left < right)
    {
        if (str[left] != str[right])
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}


int main()
{
    string str = "madam";
    if (isPalindrome(str))
    {
        cout << "This is palindrome";
    }
    else
    {
        cout << "This is not palindrome";
    }
}


//using palindrome  using recursion

// #include <iostream>
// #include <string>
// using namespace std;

// bool isPalindrome(const string& str, int left, int right) {
//     if (left >= right) return true;
//     if (str[left] != str[right]) return false;
//     return isPalindrome(str, left + 1, right - 1);
// }

// int main() {
//     string str = "level";
//     if (isPalindrome(str, 0, str.length() - 1)) {
//         cout << str << " is a palindrome." << endl;
//     } else {
//         cout << str << " is not a palindrome." << endl;
//     }
//     return 0;
// }
