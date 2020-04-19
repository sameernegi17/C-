#include <iostream>

int main()
{    
    for(int i=0; i<0 ; i++)
    {
        std::cout << i << " " ;
    }
     std::cout << std::endl;

    int j =0;
    while(j<0)
    {
        std::cout << j << " " ;
        ++j;
    }

    std::cout << std::endl;
    int k =0;
    do
    {
        std::cout << k << " " ;
            ++k;
    } while (k<0);
    
    return 0;

}