#include <iostream>

int reverse_of_a_number(int num)
{
    int reverse = 0;
    int temp = 0;
    while(num != 0)
    {
        temp = num % 10;
        reverse = reverse * 10 + temp;
        num = num / 10;
    }
    return reverse;
}


int main()
{
    int number = 57898;
    std::cout << reverse_of_a_number(number);
}