#include <iostream>
#include <vector>
using namespace std;

int largeNum(vector<int> nums)
{
    if (nums.empty())
    {
        throw invalid_argument("Empty list");
    }
    int ans = nums[0];
    for (int n : nums)
    {
        if (n > ans)
        {
            ans = n;
        }
    }
    return ans;
}

int main()
{
    vector<int> numbers = {};
    try
    {

        cout << largeNum(numbers) << endl;
    }
    catch (const invalid_argument& e)
    {
        cout << e.what() << endl;
    }
}