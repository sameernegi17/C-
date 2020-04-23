/*
Sameer got statues of different sizes as a present from CodeMaster for his birthday, each statue having an non-negative integer size. Since he likes to make things perfect, 
he wants to arrange them from smallest to largest so that each statue will be bigger than the previous one exactly by 1. He may need some additional statues to be able to
accomplish that. Help him figure out the minimum number of additional statues needed.

For statues = [6, 2, 3, 8], the output should be
makeArrayConsecutive(statues) = 3.

For statues = [0, 3], the output should be
makeArrayConsecutive(statues) = 2.
*/

#include <iostream>
#include <vector>

int makeArrayConsecutive(std::vector<int> statues)
{
    int value;

    int max = 0,min=99999;

    for(int i = 0; i< statues.size(); i++)
    {
        if(max<statues[i])
        {
            max = statues[i];
        }

        if(min >statues[i])
        {
            min = statues[i];
        }
    }

    value = (max - min + 1) - statues.size();
    return value;
}


int main()
{
    std::cout << (makeArrayConsecutive({6,2,3,8}) == 3) << std::endl;
    std::cout << (makeArrayConsecutive({0,3}) == 2) << std::endl;
    return 0;
}