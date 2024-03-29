// #include <iostream>
// int main()
// {
//    int a = 50;
//    int b = 20;
//    std::cout << &b - &a << std::endl;
//    std::cout << *(&b + (&a - &b)) << std::endl;
//    std::cout << *((&a - &b) + &b) << std::endl;
//    std::cout << (&a - &b)[&b] << std::endl;
//    std::cout << (&b)[(&a - &b)] << std::endl;

//    int arr[]{1, 2, 3};
//    int c = *((char *)&arr + (0 * sizeof(int)));
//    std::cout << c << std::endl;
//    c = *((char *)&arr + sizeof(int));
//    std::cout << c << std::endl;
//    c = *((char *)&arr + 2*sizeof(int));
//    std::cout << c << std::endl;

//    return 0;
// }

// #include <iostream>
// void pp(int i)
// {
//    std::cout << &i << " " << i << " " << sizeof(i) << "\n";
// }
// int main(int argc, char *argv[])
// {
//    int a = 10;
//    int b = 25;
//    pp(a);
//    pp(b);
//    return 0;
// }

// #include <iostream>
// void printMemory(size_t numOfBytes, char *address)
// {
//    for (size_t i = 0; i < numOfBytes; i++)
//    {
//       if (i % 4 == 0)
//       {
//          std::cout << std::endl;
//       }
//       std::cout << int(*((char *)address + i));
//    }
// }
// int main()
// {
//    int arr1[]{1, 2, 3};
//    char arr2[]{1, 2, 3};
//    // printMemory(3 * sizeof(int), arr1); // wont work
//    printMemory(3 * sizeof(char), arr2);
// }

// // using void*
// #include <iostream>
// void printMemory(size_t numOfBytes, void *address)
// {
//    for (size_t i = 0; i < numOfBytes; i++)
//    {
//       if (i % 4 == 0)
//       {
//          std::cout << std::endl;
//       }
//       std::cout << int(*((char *)address + i));
//    }
// }
// int main()
// {
//    int arr1[]{1, 2, 3};
//    char arr2[]{1, 2, 3};
//    printMemory(3 * sizeof(int), arr1);
//    printMemory(3 * sizeof(char), arr2);
// }

// #include <iostream>
// void printMemory(size_t numOfBytes, void *address)
// {
//    for (size_t i = 0; i < numOfBytes; i++)
//    {
//       if (i % 4 == 0)
//       {
//          std::cout << std::endl;
//       }
//       std::cout << int(*((char *)address + i));
//    }
// }
// int main()
// {
//    // int* a,  b; // is not the way
//    // int *a, *b; // is the correct way

//    // void* c[12];
//    // *(char*)c = 5;
//    // std::cout << *(int*)c << std::endl;
//    // std::cout << int(*(char*)c) << std::endl;

//    void* c[5];
//    *(int*)c = 5;
//    *((char*)c + sizeof(int)) = 4;
//    printMemory(5,c);
// }

// #include <iostream>
// void printMemory(size_t numOfBytes, void *address)
// {
//    for (size_t i = 0; i < numOfBytes; i++)
//    {
//       if (i % 4 == 0 && i != 0)
//       {
//          std::cout << std::endl;
//       }
//       std::cout << int(*((char *)address + i)) << " ";
//    }
// }
// int main()
// {
//    int a = -1;
//    printMemory(4, &a);
//    ((char *)&a)[0] = 4;
//    std::cout << std::endl;
//    printMemory(4, &a);
//    ((char *)&a)[1] = 2;
//    std::cout << std::endl;
//    printMemory(4, &a);
// }