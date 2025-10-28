#include<vector>
#include<iostream>
#include<SelectSort.hpp>
#include<BubbleSort.hpp>
#include<InsertSort.hpp>
#include<ShellSort.hpp>
#include<QuickSort.hpp>
int main()
{
   std::vector<int> nums = {5,4,9,6,7,3,1,8,2}; 
   // SelectSort(nums);
   // BubbleSort(nums);
   // InsertSort(nums);
   // ShellSort(nums);
   QuickSort(nums);
   
   for(int num : nums)
   {
      std::cout << num << " ";
   }
}




