/*
Given an array of strings, return another array containing all of its longest strings.
Example
For inputArray = ["aba", "aa", "ad", "vcd", "aba"], 

the output should be
allLongestStrings(inputArray) = ["aba", "vcd", "aba"].
*/

#include <vector>
#include <iostream>

std::vector<std::string> allLongestString(std::vector<std::string> input_array)
{
    std::vector<std::string> output_array;
    auto current_size = 0;

    for(auto string : input_array)
    {
        if(string.size() > current_size)
        {
            output_array.clear();
            output_array.push_back(string);
            current_size = string.size();
        }
        else if (string.size() == current_size)
        {
            output_array.push_back(string);
        }
    }

    return output_array;

}

int main()
{
    auto output = allLongestString({"aba", "aa", "adbc", "vcd", "aba"});
    for(auto element : output)
    {
        std::cout << " " << element ;
    }
    std::cout << std::endl;
    return 0;
}