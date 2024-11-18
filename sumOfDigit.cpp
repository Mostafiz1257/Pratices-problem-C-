#include <iostream>

using namespace std;

int sumOfDigit(int num)
{
    if (num < 0)
    {
        return -1;
    }
    int sum = 0;
    while (num > 0)
    {
        int lastDigit = num % 10;
        sum += lastDigit;
        num = num / 10;
    }

    return sum;
}

int main()
{
    cout << sumOfDigit(134) << endl;
}