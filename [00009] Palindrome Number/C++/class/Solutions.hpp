class Solutions
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0 || (x != 0 && x % 10 == 0))
            return false;

        if (x < 10)
            return true;

        int reverted = 0;
        int original = x;
        while (original > 0)
        {
            reverted = reverted * 10 + original % 10;
            original /= 10;
        }
        return x == reverted;
    }
};