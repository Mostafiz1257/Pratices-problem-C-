#include <iostream>
#include <algorithm>
using namespace std;

// int main()
// {
//     string a = "hello";
//     reverse(a.begin(), a.end());
//     cout << a << endl;
// }

// int main(){
//     string str = "hefff";

//     int n = str.length();
//     for(int i =0;i<n/2;i++){
//         swap(str[i],str[n-i-1]);
//     }
//     cout << str << endl;
// }

int main()
{
    string str = "success here";
    string reversStr = "";
    for (int i = str.length() - 1; i >= 0; i--)
    {
        reversStr = reversStr + str[i];
    }
    cout << reversStr << endl;
}