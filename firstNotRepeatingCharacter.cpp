
/*
Given a string s consisting of small English letters, find and return the first instance of a non-repeating character in it. If there is no such character, return '_'.
Example
•	For s = "abacabade", the output should be
firstNotRepeatingCharacter(s) = 'c'.
There are 2 non-repeating characters in the string: 'c' and 'd'. Return c since it appears in the string first.
•	For s = "abacabaabacaba", the output should be
firstNotRepeatingCharacter(s) = '_'.
There are no characters in this string that do not repeat.
*/
#include <iostream>
#include <unordered_map>

char firstNotRepeatingCharacter(std::string s)
{

std::unordered_map<int,int> count_map;


for(int i = 0; i < s.size(); i++)
{
    if(count_map.find(s[i]) == count_map.end())
    {
        count_map[s[i]] = i;
    }
    else
    {
        count_map[s[i]] = s.size() + 1;
    }
}

    auto min_index = s.size();
    {
        for(auto it = count_map.begin(); it !=count_map.end(); it++)
        {
            if(it->second < min_index)
            {
                min_index = it->second;
            }
        }
    }

    if (min_index == s.size())
    {
        return  '_';
    }
    else
    {
        return s[min_index];
    }
    

}

int main()
{
    std::cout << firstNotRepeatingCharacter("abacabaabacaba") << std::endl;
    return 0;
}