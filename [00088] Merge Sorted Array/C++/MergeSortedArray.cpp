#include "library/Include.hpp"
#include "class/Solutions.hpp"
#include "class/TextFile.hpp"

int main()
{
    std::vector<int> inputVector;
    TextFile().readVectorOfValue("input.txt", inputVector);

    int n = inputVector[inputVector.size() - 1];
    int m = inputVector[inputVector.size() - 2];
    std::vector<int> nums1(inputVector.begin(), inputVector.begin() + m + n);
    std::vector<int> nums2(inputVector.begin() + m + n, inputVector.begin() + m + n + n);

    Solutions().merge(nums1, m, nums2, n);
    TextFile().write("output.txt", nums1);
    return 0;
}