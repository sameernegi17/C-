#include <iostream>
#include <stack>
#include <map>

std::string isBalanced(std::string s)
{
    std::string result{"NO"};
    std::stack<char> string_stack;
    std::map<char,char> paranthesis_map{{')','('},{']','['},{'}','{'}};

    for(auto character : s)
    {
        if(character == '{' || character == '(' || character == '[' )
        {
            string_stack.push(character);
        }
        else if(character == '}'|| character == ')' || character == ']')
        {
            if(string_stack.empty())
            {
                return result;
            }
            else
            {
                auto top_element = string_stack.top();
                if(top_element != paranthesis_map[character]) // paranthesis_map['}'] => {
                {
                    return result;
                }
                string_stack.pop();
            }
            
        }
    }

    if(string_stack.empty())
    {
        result = "YES";
    }
        
    return result;
}


int main()
{
    std::string s{"(abc]"};

    auto result = isBalanced(s);

    std::cout << result << std::endl;

    return 0;
}

