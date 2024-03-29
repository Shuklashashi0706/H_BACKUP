#include <iostream>

class Int_array
{
   int *m_array;
   size_t m_size;

public:
   Int_array(size_t size)
       : m_array(new int[size]), m_size(size)
   {
   }

   ~Int_array()
   {
      delete[] m_array;
   }

   int &operator[](size_t i)
   {
      return this->m_array[i];
   }

   int get_size()
   {
      return m_size;
   }
};

int main()
{
   Int_array arr(12);
   arr[1] = 10;
   std::cout << arr[1] << ", size: " << arr.get_size() << std::endl;
   return 0;
}