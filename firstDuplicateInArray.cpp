#include <iostream>
#include <vector>
#include <unordered_map>

int firstDuplicate(std::vector<int> a) {

    std::unordered_map<int,int> count_map;

    for(int i=0;i<a.size();i++)
    {
        if(count_map.find(a[i]) == count_map.end())
        {
            count_map[a[i]] = 0;
        }
        else if(count_map[a[i]] == 0)
        {
            count_map[a[i]] = i;
        }
    }

    auto min_index = 999999;
    for(auto it = count_map.begin(); it  != count_map.end() ; it++)
    {
        if(it->second < min_index &&  it->second != 0)
        {
            min_index = it->second;
        }
    }

    if(min_index == 999999)
    {
        return -1;
    }
    else
    {
        return a[min_index];
    }
    
}

int main()
{
    std::vector<int> test_value{2, 1, 3, 5, 3, 2};

    std::vector<int> test_value2{2, 2};

    std::vector<int> test_value3{2, 4, 3, 5, 1};

    std::cout << firstDuplicate(test_value2) << std::endl;
}