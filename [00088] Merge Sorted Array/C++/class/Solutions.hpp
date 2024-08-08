#include "library/Include.hpp"
class Solutions
{
public:
    void merge(std::vector<int> &nums1, int m, std::vector<int> &nums2, int n)
    {
        int swapPosition = m + n - 1;
        m--;
        n--;
        while (m >= 0 && n >= 0)
        {
            if (nums1[m] > nums2[n])
            {
                nums1[swapPosition] = nums1[m];
                m--;
            }
            else
            {
                nums1[swapPosition] = nums2[n];
                n--;
            }
            swapPosition--;
        }
        while (n >= 0)
        {
            nums1[swapPosition] = nums2[n];
            n--;
            swapPosition--;
        }
    }
};