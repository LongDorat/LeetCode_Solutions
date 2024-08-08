#include "library/Include.hpp"
class Solutions
{
public:
    void merge(std::vector<int> &nums1, int m, std::vector<int> &nums2, int n)
    {
        int SwapPosition = m + n - 1;
        m--;
        n--;
        while (m >= 0 && n >= 0)
        {
            if (nums1[m] > nums2[n])
            {
                nums1[SwapPosition] = nums1[m];
                m--;
            }
            else
            {
                nums1[SwapPosition] = nums2[n];
                n--;
            }
            SwapPosition--;
        }
        while (n >= 0)
        {
            nums1[SwapPosition] = nums2[n];
            n--;
            SwapPosition--;
        }
    }
};