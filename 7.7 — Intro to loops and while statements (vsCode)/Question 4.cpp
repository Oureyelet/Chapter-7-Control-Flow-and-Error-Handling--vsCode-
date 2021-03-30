  /*
  Question #4

  Now make the numbers print like this:

          1
        2 1
      3 2 1
    4 3 2 1
  5 4 3 2 1

  Hint: Figure out how to make it print like this first:

  X X X X 1
  X X X 2 1
  X X 3 2 1
  X 4 3 2 1
  5 4 3 2 1
  */
#include <iostream>

int main()
{
  int outer { 1 };
  while (outer <= 5)
  {
    int inner { 5 };
    while (inner >= 1)
    {
      if (inner <= outer)
      {
        std::cout << inner << ' ';
      }
      else
      {
        std::cout << ' ' << ' ';
      }
      --inner;
    }
    std::cout << '\n';
    ++outer;
  }
  return 0;
}