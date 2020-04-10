#include <iostream>

int main()
{

    int a,b,c;
    // Example 1

    a=10; 
    std::cout<< a++ << std::endl;
    std::cout<< a << std::endl;

    std::cout << "=======================================" << std::endl;
    // Example 2

    a = 20;
    b = 20;
    a = 90/b;
    std::cout << a << std::endl;

     std::cout << "=======================================" << std::endl;

  a=10;
  b = a++;
  c = a;
  std::cout<< a << ","<<b << ","<< c << std::endl;

  std::cout << "=======================================" << std::endl;

    int c1,c2;
a = -8;
b = 3;
c1 = --a + b;
c2 = a-- + b;
std::cout<<"c1="<<c1<<", "<<"c2="<<c2<< std::endl;
std::cout<<a<< std::endl;

std::cout << "=======================================" << std::endl;
a = 10,b=11;

a==b?c=a:c=b;

std::cout << c << std::endl;

std::cout << "=======================================" << std::endl;

a = 1;// 0001
a = a << 1; // 0010
std::cout << a << ", ";
a = a << 1; //0100
std::cout << a << ", ";
a = a >> 1; // 0010
std::cout << a << std::endl;

std::cout << "=======================================" << std::endl;

a = 1; //0001
b = 2; //0010
c = a | b ; // 0011
std::cout << c << ", ";
c = a & b; //0000
std::cout << c << ", ";
c = ~a & b; // 1110 & 0010 = 0010
std::cout << c << std::endl;

    return 0;
}
