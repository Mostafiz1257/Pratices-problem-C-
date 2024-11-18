#include <iostream>
#include <vector>

using namespace std;

int findMissNum(vector<int> &nums)
{
    int n = nums.size() +1;
    int actualSum = (n * (n + 1)) / 2;
    int cuuAns = 0;
    for (int num : nums)
    {
        cuuAns += num;
    }
    return actualSum - cuuAns;
}

int main()
{
    vector<int> nums = {1, 2, 3, 5, 6, 7};
    cout << findMissNum(nums) << endl;
}