#include "library/Include.hpp"
#include "class/TextFile.hpp"
#include "class/Solutions.hpp"

int main()
{
    TextFile textFile;
    std::vector<int> nums;
    textFile.readVectorOfValue("input.txt", nums);

    Solutions solution;
    int resultLength = solution.removeDuplicates(nums);
    std::vector<int> result = std::vector<int>(nums.begin(), nums.end());
    result.insert(result.begin(), resultLength);

    textFile.write("output.txt", result);
    return 0;
}