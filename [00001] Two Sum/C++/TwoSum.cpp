#include "library/Include.hpp"
#include "class/TextFile.hpp"
#include "class/Solutions.hpp"

int main()
{
    TextFile inputFile;
    TextFile outputFile;

    std::vector<int> nums;
    inputFile.readVectorOfValue("input.txt", nums);
    int target = nums[0];
    nums.erase(nums.begin());

    Solutions solution;
    outputFile.write("output.txt", solution.TwoSum(nums, target));

    return 0;
}