#include <iostream>

//#define SPRING 1
//#define SUMMER 2
//#define AUTUMN 3
//#define WINTER 4

int main() {

#ifdef SPRING
  std::cout << "Spring" << std::endl;
#endif

#ifdef SUMMER
  std::cout << "Summer" << std::endl;
#endif

#ifdef AUTUMN
  std::cout << "Autumn" << std::endl;
#endif

#ifdef WINTER
  std::cout << "Winter" << std::endl;
#endif

  return 0;
}
