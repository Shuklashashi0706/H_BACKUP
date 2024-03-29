#include <iostream>

class Vector
{
private:
   int *elem;
   int s;

public:
   Vector(std::initializer_list<int> lst)
       : elem{new int[lst.size()]}, s{(int)lst.size()}
   {
      std::copy(lst.begin(), lst.end(), elem);
   }
   ~Vector() { delete[] elem; }
   int &operator[](int i)
   {
      return this->elem[i];
   }
   int size() const
   {
      return s;
   }
};

int main()
{
   Vector a = {102, 32, 82};
   std::cout << a[0] << std::endl;
   std::cout << a[1] << std::endl;
   std::cout << a[2] << std::endl;
}