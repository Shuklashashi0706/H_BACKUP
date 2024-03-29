#include <iostream>

void Tennify(int& a)
{
   a = 6;
}
void Tennify(int* a)
{
   *a = 12;
}

void Tennify_(int a)
{
   a = 20;
}

int main()
{
   int a = 10;
   
   std::cout << a << std::endl;
   Tennify(a); 
   std::cout << a << std::endl; 
   Tennify(&a); 
   std::cout << a << std::endl; 
   Tennify_(a); 
   std::cout << a << std::endl; 
}

