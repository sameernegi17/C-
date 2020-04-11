#include <iostream>

class stack
{
    public:
    stack(int size)
    {
        max_size = size;
        arr = new int[size];
    }

    void push(int value)
    {
        if(top_element < (max_size-1))
        {
            ++top_element;
            arr[top_element] = value;
        }
        else
        {
            std::cout << "stack is full" << std::endl;
        }
        
    }
    void pop()
    {
        if (top_element != -1)
        {
            --top_element;
        }
        else
        {
            std::cout << "stack is empty" << std::endl;
        } 
    }
    int top()
    {
        if(top_element != -1)
        {
            return arr[top_element];
        }
        else
        {
            return -1;
        }
        
    }
    bool is_empty()
    {
        return top_element == -1;
    }
    private:
    int top_element{-1};
    int max_size{0};
    int *arr;
};

int main()
{
    stack s(5);
    std::cout << s.is_empty() << std::endl;
    s.pop();
    s.push(1);
    std::cout << s.is_empty() << std::endl;
    std::cout << s.top() << std::endl;
    s.pop();
    std::cout << s.is_empty() << std::endl;
    std::cout << "+++++++++++++++++++++++" << std::endl;
    std::cout << s.top() << std::endl;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
   std::cout << s.top() << std::endl;
}