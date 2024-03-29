#include <iostream>

int main()
{
   // [capture list](parameter) -> return type
   // {

   // };

   // auto func = [](){
   //    std::cout << "Hello \n";
   // };
   // func();

   // func();
   // [](){
   //    std::cout << "Hello \n";
   // }();

   // // parameter:
   // [](int a, int b){
   //    std::cout << a + b << std::endl;
   // }(1,2);

   // // returns
   // int sum = [](int a, int b) -> int
   // {
   //    std::cout << a + b << std::endl;
   //    return a + b;
   // }(1, 2);
   // std::cout << sum << std::endl;

   // std::cout << [](int a, int b)
   // {
   //    std::cout << a + b << std::endl;
   //    return a + b;
   // }(1, 2) << std::endl;

   // // 1.capture lists
   // int a = 10, b = 20;
   // std::cout << a << " " << &a << " " << b << " " << &b << std::endl;
   // []()
   // {
   //    std::cout << a + b << std::endl; // ERROR
   // }();
   // [a]() // Capturing By value
   // {
   //    // std::cout << a << " " << b << std::endl; // ERROR
   //    std::cout << a << " " << &a << std::endl;
   // }();
   // [a, b]()
   // {
   //    std::cout << a << " " << &a << " " << b << " " << &b << std::endl;
   // }();
   // [a, &b]() // Capturing by reff
   // {
   //    std::cout << a << " " << &a << " " << b << " " << &b << std::endl;
   //    // a = 2; //ERROR
   //    b = 2;
   // }();

   // // 2.capture lists
   // int c{10};
   // auto func = [c]() // capturing by value
   // {
   //    std::cout << "Inner value: " << c << std::endl;
   // };
   // for (size_t i = 0; i < 5; ++i)
   // {
   //    std::cout << "Outer value: " << c << std::endl;
   //    func();
   //    ++c;
   // }
   // int c{10};
   // auto func = [&c]() // capturing by ref
   // {
   //    std::cout << "Inner value: " << c << std::endl;
   // };
   // for (size_t i = 0; i < 5; ++i)
   // {
   //    std::cout << "Outer value: " << c << std::endl;
   //    func();
   //    ++c;
   // }

   // 3.capture lists
   // int a{10};
   // int b{20};
   // int c{30};
   // std::cout << a << " " << &a << " " << b << " " << &b << " " << c << " " << &c << " " << std::endl;
   // [&]() // capturing everything by ref
   // {
   //    std::cout << a << " " << &a << " " << b << " " << &b << " " << c << " " << &c << std::endl;
   // }();
   // [=]() // capturing everything by value
   // {
   //    std::cout << a << " " << &a << " " << b << " " << &b << " " << c << " " << &c << std::endl;
   // }();

   // USE:
   // int i = 0;
   // for ([=]()
   //      {
   //          std::cout <<  i << " Hello ";
   //          std::cout << "Bii\n"; }();
   //      i < 10; [&]()
   //      {
   //          std::cout << "incrementing " << i << std::endl;
   //          i++; }())
   // {
   //    std::cout << i << std::endl;
   // }
   // std::cout << "****************" << std::endl;
   // std::cout << i << std::endl;

   return 0;
}