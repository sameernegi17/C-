#include <iostream>

class queue
{
    public:
    queue(int size)
    {
        capacity = size;
        arr = new int[size];
    }
    void enqueue(int value)
    {
        if(is_full())
        {
            std::cout << "queue is full" << std::endl;
        }
        else
        {
            back = (back + 1) % capacity;
            arr[back] = value;
            ++count;
        }
        
    }
    void dequeue()
    {
        if(!is_empty())
        {
            front = (front + 1) % capacity;
            --count;
        }
        else
        {
            std::cout << "queue is empty" << std::endl;
        }
        
    }

    int peek()
    {
        if(!is_empty())
        {
            return arr[front];
        }
        else
        {
            return -1;
        }
        
    }


    bool is_full()
    {
        return (size()== capacity);
    }

    bool is_empty()
    {
        return (size()== 0);
    }

    int size()
    {
        return count;
    }

    private:
    int front{0};
    int back{-1};
    int capacity{0};
    int count{0};
    int *arr;
};

int main()
{
    queue q(5);
    std::cout << q.is_full() << std::endl;
    std::cout << q.is_empty() << std::endl;
    std::cout << q.size() << std::endl;
    std::cout << q.peek() << std::endl;

    q.enqueue(10);

    std::cout << "+++++++++++++++++++++++" << std::endl;

    std::cout << q.is_full() << std::endl;
    std::cout << q.is_empty() << std::endl;
    std::cout << q.size() << std::endl;
    std::cout << q.peek() << std::endl;

    std::cout << "+++++++++++++++++++++++" << std::endl;

    q.dequeue();

    q.dequeue();

    std::cout << "+++++++++++++++++++++++" << std::endl;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);

    std::cout << q.is_full() << std::endl;
    std::cout << q.is_empty() << std::endl;
    std::cout << q.size() << std::endl;
    std::cout << q.peek() << std::endl;

    q.dequeue();
    q.enqueue(70);
    std::cout << q.peek() << std::endl;
    q.dequeue();
    std::cout << q.peek() << std::endl;
    q.dequeue();
    std::cout << q.peek() << std::endl;
    q.dequeue();
    std::cout << q.peek() << std::endl;
    q.dequeue();
    std::cout << q.peek() << std::endl;
    q.dequeue();
    std::cout << q.is_empty() << std::endl;
    std::cout << q.peek() << std::endl;
    q.dequeue();



    return 0;
}