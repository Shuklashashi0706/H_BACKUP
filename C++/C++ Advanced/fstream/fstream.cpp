#include <iostream>
#include <fstream>
#include <string>

int main()
{
   std::fstream hii("./hii.txt", std::fstream::in | std::fstream::out);
   // hii.open("./hii.txt", std::fstream::in | std::fstream::out | std::fstream::app);
   std::string FirstToken;
   hii >> FirstToken;
   std::cout << FirstToken << std::endl;
   hii >> FirstToken;
   std::cout << FirstToken << std::endl;
   hii.close();
   hii.open("./hii.txt", std::fstream::in | std::fstream::out | std::fstream::app);
   std::cout << hii.tellg() << std::endl;
   char str[12]; 
   hii.getline(str, 12);
   std::cout << str << std::endl;
   std::cout << hii.tellg() << std::endl;
   hii.getline(str, 12);
   std::cout << str << std::endl;
   hii.seekg(0);
   hii.getline(str, 12);
   std::cout << str << std::endl;
   hii.getline(str, 12);
   std::cout << str << std::endl;
}