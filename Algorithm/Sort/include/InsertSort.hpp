#include<vector>

void InsertSort(std::vector<int>& nums)
{
    for(int i = 1; i < nums.size(); ++i)
    {
        int tmp = nums[i];
        int j = i - 1;
        while(j >= 0 && nums[j] > tmp)
        {
            nums[j + 1] = nums[j];
            --j;
        }
        nums[j + 1] = tmp;
    }
}