#include <iostream>

int main()
{
   int amt;
   std::cin >> amt;
   // 100, 50, 20, 1 rupee notes   
   std::cout << "No. of 100 rupee note: " << amt / 100 << std::endl;
   amt -= (amt/100)*100;
   std::cout << "No. of 50 rupee note: " << amt / 50 << std::endl;
   amt -= (amt/50)*50;
   std::cout << "No. of 20 rupee note: " << amt / 20 << std::endl;
   amt -= (amt/20)*20;
   std::cout << "No. of 1 rupee coin: " << amt << std::endl;
}