// #include <iostream>
// #include <string>

// template <typename T>
// class Array
// {
//    T *m_array;
//    size_t m_size;

// public:
//    Array(size_t size)
//    {
//       m_array = new T[size];
//       m_size = size;
//    }

//    ~Array()
//    {
//       delete[] m_array;
//    }

//    T &operator[](size_t i)
//    {
//       return this->m_array[i];
//    }
//    const T &operator[](size_t i) const
//    {
//       return this->m_array[i];
//    }

//    int get_size() const
//    {
//       return m_size;
//    }
// };

// class a
// {
// public:
//    std::string name = "Hii";
// };

// int main()
// {
//    Array<a> arr(12);
//    std::cout << arr[0].name << ", size: " << arr.get_size() << std::endl;
//    const Array<a> arr2(12);
//    std::cout << arr2[0].name << ", size: " << arr2.get_size() << std::endl;

//    return 0;
// }


// #include <iostream>
// template <typename t1, typename t2>
// void hii(t1 a, t2 b)
// {
//    std::cout << a << " " << b << std::endl;
// }
// int main()
// {
//    hii(1,2);
//    hii(1,"hii");
//    hii<int,int>(2.2f,2.5f);
//    hii<double,double>(2.2f,2.2f);
// }

#include <iostream>
template<typename t>
void hii(t a)
{
   std::cout << a << std::endl;
   std::cout << "Normal" << std::endl;
}
template<>
void hii<const char*> (const char* a) // Template specialization
{
   std::cout << a << std::endl;
   std::cout << "specialised!" << std::endl;
}

int main()
{
   hii(2);
   hii("hii");
}