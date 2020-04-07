#include<iostream>
#include <cstdint>
#include <limits>

int main()
{

  bool value = true;
  std::cout << value << std::endl;
  std::cout << sizeof(value) << std :: endl;


  char value_1 = 'a';
  std::cout << value_1 << std::endl;
  std::cout << sizeof(value_1) << std :: endl;
  

  short a = 1;
  int b = 10;
  long c = 15;

  std::cout << sizeof(a) << std::endl;
  std::cout << sizeof(b) << std::endl;
  std::cout << sizeof(c) << std::endl;

  std::int16_t acstd;
  std::int32_t bcstd;
  std::int64_t ccstd;

  std::cout << sizeof(acstd) << std::endl;
  std::cout << sizeof(bcstd) << std::endl;
  std::cout << sizeof(ccstd) << std::endl;

  std::cout << std::numeric_limits<short>::max() << std::endl;

  a = 32767;

  std::cout << a << std::endl;

  float f;
  double d;
  long double ld;

  std::cout << sizeof(f) << std::endl;
  std::cout << sizeof(d) << std::endl;
  std::cout << sizeof(ld) << std::endl;

  std::cout << std::numeric_limits<long double>::max() << std::endl;


 unsigned short us;

 std::cout << std::numeric_limits<unsigned short>::max() << std::endl;
 std::cout << std::numeric_limits<unsigned short>::min() << std::endl;

  int x = 10;
  const int ci = x;
  constexpr int cci = 10;


  return 0;
}