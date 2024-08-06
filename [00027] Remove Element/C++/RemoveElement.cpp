#include "library/Include.hpp"
#include "class/TextFile.hpp"
#include "class/Solutions.hpp"

int main()
{
    std::vector<int> nums;
    TextFile().readVectorOfValue("input.txt", nums);
    int val = nums[nums.size() - 1];
    nums.erase(nums.begin() + nums.size() - 1);

    std::cout << val << std::endl;
    Solutions solution;
    int result = solution.removeElement(nums, val);

    std::vector<int> output(nums.begin(), nums.begin() + result);
    TextFile().write("output.txt", output);
    return 0;
}