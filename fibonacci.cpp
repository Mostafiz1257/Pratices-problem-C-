#include <iostream>

using namespace std;

int main()
{
    int n = 5, beg = 0, end = 1, next;
    for (int i = 0; i < n; i++)
    {
        cout << beg << " ";
        next = beg + end;
        beg = end;
        end = next;
    }
    cout << endl;
}