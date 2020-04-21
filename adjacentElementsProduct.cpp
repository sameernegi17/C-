#include <iostream>
#include <vector>

int adjacementElementMaxProduct(std::vector<int> inputArray)
{
    int max = -999999;
    int i = 0, j = 1;
    int multiply = 0;

    while(j < inputArray.size())
    {
    multiply = inputArray[i] * inputArray[j];
    if(max < multiply)
        max = multiply;
    ++i;
    ++j;
    }

    return max;

}

int main()
{
    std::vector<int> Elements{-23,4,-3,8,-12};
    std::cout << (adjacementElementMaxProduct(Elements) == -12);
    return 0;
}