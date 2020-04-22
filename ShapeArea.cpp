#include<iostream>

int ShapeArea(int n)
{
    int num = 1;
    int i = 0;
    int result = 1;
    while(num <= n)
    {
        result = result + 4 * i;
        ++num;
        ++i;
    }
    return result;
}

int main()
{
    std::cout << (ShapeArea(2) == 5) << std::endl;
    std::cout << (ShapeArea(3) == 13) << std::endl;
    std::cout << (ShapeArea(4) == 25) << std::endl;

}