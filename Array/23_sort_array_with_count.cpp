// same question as of 22 but approach will be less optimal but easy to understand which id count frequency and overwrite array

#include <iostream>
#include <vector>
using namespace std;

void sorted_arr(vector<int> &nums)
{
    int count_one = 0;
    int count_two = 0;
    int count_zero = 0;

    for (int i = 0; i<nums.size() ; i++)
    {
        if (nums[i] == 0)
        {
            count_zero++;
        }
        else if (nums[i] == 1)
        {
            count_one++;
        }
        else
        {
            count_two++;
        }
    }

    int idx = 0;
    for (int i = 0; i < count_zero; i++)
    {
        nums[idx++] = 0;
    }
    for (int i = 0; i < count_one; i++)
    {
        nums[idx++] = 1;
    }
    for (int i = 0; i < count_two; i++)
    {
        nums[idx++] = 2;
    }
}




//calling function :
int main()
{
    vector<int> nums = {2, 0, 1, 2, 1, 0, 1, 2, 0};  

    cout << "Original array: ";
    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << endl;

    sorted_arr(nums);

    cout << "Sorted array: ";
    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
