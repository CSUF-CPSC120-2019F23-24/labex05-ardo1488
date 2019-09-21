// Random Rectangle

#include<iostream>
#include<ctime>
#include<string>
#include<iomanip>
#include <random>


int main()
{
 srand(time(0));
//Making a variable that generates the random number.
 int start = rand() % 40 + 1;
 std::string pound;
 pound.assign(start, '#');

 //outputting the random number of #

  std::cout << pound << std::endl;
  std::cout << pound << std::endl;
  std::cout << pound << std::endl;





  return 0;
}
