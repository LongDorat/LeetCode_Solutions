#include "library/Include.hpp"
#include "class/TextFile.hpp"
#include "class/Solutions.hpp"

int main()
{
    int x;
    TextFile textFile = TextFile();
    textFile.readSingleValue("input.txt", x);

    Solutions solution;
    textFile.write("output.txt", solution.isPalindrome(x) ? "true" : "false");

    return 0;
}