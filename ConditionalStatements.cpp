#include <iostream>

int main(int argc, char const *argv[])
{
    int a = 1;
    /*
    if(a==0)
    {
        std::cout << "Do Something" << std::endl;
    }
    else if (a == 1)
    {
        std::cout << "We watch TV" << std::endl;
    }
    else if (a == 2)
    {
        std::cout << "We eat food" << std::endl;
    }
    else if (a == 3)
    {
        std::cout << "We play" << std::endl;
    }
    else
    {
        std::cout << "Don't Do Anything" << std::endl;
    }
    */
    switch (a)
    {
        case 0:
    std::cout << "Do Something" << std::endl;
        break;
    case 1:
    std::cout << "We watch TV" << std::endl;
   //     break;
     case 2:
     std::cout << "We eat food" << std::endl;
    //    break;
         case 3:
    std::cout << "We play" << std::endl;
    //   break;
    
    default:
        std::cout << "Don't Do Anything" << std::endl;
        break;
    }
    
    return 0;
}
