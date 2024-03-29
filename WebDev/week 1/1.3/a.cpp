#include <iostream>

void Hii1(const char* name)
{
   std::cout << "Hii " << name << std::endl;
}
void Hii2(const char* name)
{
   std::cout << "Hii Bro " << name << std::endl;
}

void useHii(void(*fn)(const char*), const char* name)
{
   fn(name);
}

int main()
{
   useHii(Hii1, "Hari");
   useHii(Hii2, "Shashi");
}