#include <iostream>
#include <vector>
using namespace std;

void reversArray(vector<int> &arr)
{
    int st = 0;
    int end = arr.size() - 1;
    while (st < end)
    {
        swap(arr[st], arr[end]);
        st++;
        end--;
    }
}

void printArray(vector<int>&arr){

for(int num:arr){
    cout << num <<" " ;
}
cout << endl;

}

int main()
{
    vector<int> arr = { 3,
                        2,
                        4,
                        2,
                        53,
                        5,
                        3 };
                        reversArray(arr);
                        printArray(arr);
}