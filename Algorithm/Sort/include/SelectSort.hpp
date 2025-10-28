#include<vector>

void SelectSort(std::vector<int>& nums)
{
    for(int i = 0; i < nums.size(); ++i)
    {
        int minIndex = i;
        for(int j = i; j < nums.size(); ++j)
        {
            if(nums[j] < nums[minIndex])
            {
                minIndex = j;
            }
        }
        //swap
        int tmp = nums[i];
        nums[i] = nums[minIndex];
        nums[minIndex] = tmp;
    }
}