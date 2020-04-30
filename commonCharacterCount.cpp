/*
    Given two strings, find the number of common characters between them.
    Example
    For s1 = "aabcc" and s2 = "adcaa", the output should be
    commonCharacterCount(s1, s2) = 3.

    Strings have 3 common characters - 2 "a"s and 1 "c".
*/
#include<array>
#include<iostream>

int commonCharacterCount(std::string s1, std::string s2) {

    std::array<int, 26> freq_s1{0};
    std::array<int, 26> freq_s2{0};

    for(auto character : s1)
    {
        freq_s1[character - 'a']++;
    }
    
    for(auto character : s2)
    {
        freq_s2[character - 'a']++;
    }

    auto count = 0;
    for(int i = 0; i < freq_s1.size();i++)
    {
        count+= std::min(freq_s1[i],freq_s2[i]);
    }

    return count;
}



int main()
{
    auto s1{"aabccd"};
    auto s2{"adcaa"};

    std::cout << commonCharacterCount(s1,s2);

    return 0;
}