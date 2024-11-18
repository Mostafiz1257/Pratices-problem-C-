#include <iostream>
using namespace std;

int factorial(int n)
{
    int ans = 1;
    for (int i = 1; i < n; i++)
    {
        ans *= i;
    }
    return ans;
}

int main()
{
    int n = 5;
    cout << "The factorial of "<<n << " is: " <<  factorial(n) << endl;
}


//Recursive 
// #include <iostream>
// using namespace std;

// int factorial(int n) {
//     if (n <= 1) return 1;    // Base case: factorial of 0 or 1 is 1
//     return n * factorial(n - 1);   // Recursive call
// }

// int main() {
//     int number;
//     cout << "Enter a number: ";
//     cin >> number;
    
//     cout << "Factorial of " << number << " is " << factorial(number) << endl;
//     return 0;
// }
