#include<vector>
int Partition(std::vector<int>& nums, int left, int right)
{
    int pivot = nums[left];
    while(left < right)
    {
        while(left < right && nums[right] >= pivot)
        {
            --right;
        }
        nums[left] = nums[right];
        while(left < right && nums[left] <= pivot)
        {
            ++left;
        }
        nums[right] = nums[left];
    }
    nums[left] = pivot;
    return left;
}

struct Range
{
    int start;
    int end;
    Range(int s, int e)
    :start(s),end(e)
    {}
};


void QuickSort(std::vector<int>& nums)
{
    if(nums.size() == 0)
        return;

   std::vector<Range> rg = {Range(0,nums.size() - 1)};
   for(int i = 0; i < rg.size(); ++i)
   {
        int mid = Partition(nums,rg[i].start,rg[i].end);
        int leftEnd = mid - 1;
        int rightStart = mid + 1;
        if(rg[i].start < leftEnd)
        {
            rg.push_back(Range(rg[i].start,leftEnd));
        }
        if(rightStart < rg[i].end)
        {
            rg.push_back(Range(rightStart,rg[i].end));
        }
   }
}