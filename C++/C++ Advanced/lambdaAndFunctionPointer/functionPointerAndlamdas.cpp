#include <iostream>
#include <vector>
#include <algorithm>

// void Hello()
// {
//    std::cout << "Hello\n";
// }
// int main()
// {
//    auto hello1 = &Hello;
//    auto hello2 = Hello; // implicitly coverts, no need to add &Hello
//    hello1();
//    hello2();
//    // type(*name)(parameter) = &Hello;
//    void(*hello3)() = &Hello;
//    hello3();
//    void(*hello4)() = Hello;
//    hello4();
// }

// void ForEach(const std::vector<int> &values, void(*func)(int))
// {
//    for (int value : values)
//       func(value);
// }
// int main()
// {
//    std::vector<int> values = {1, 5, 4, 2, 3};
//    ForEach(values, [](int value)
//    { std::cout << "Value:" << value << std::endl; });
// }