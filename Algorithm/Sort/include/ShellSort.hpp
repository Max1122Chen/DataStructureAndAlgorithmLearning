#include<vector>

void ShellSort(std::vector<int>& nums)
{
    int d = nums.size()/2;
    while(1 <= d)
    {
        //分组处理
        for(int i = 0; i < d; ++i)
        {
            //一个组别的插入排序
            for(int j = i; j < nums.size(); j += d)
            {
                int tmp = nums[j];
                int k = j - d;
                while(k >=0 && nums[k] > tmp)
                {
                    nums[k + d] = nums[k];
                    k -= d;
                }
                nums[k + d] = tmp;
            }
        }

        d = d/2;
    }
}