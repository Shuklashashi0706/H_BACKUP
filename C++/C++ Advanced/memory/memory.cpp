#include <iostream>
#include <string.h>

// malloc : memory allocation
// int main()
// {
//    int *arr = (int *)malloc(4 * sizeof(int));
//    if (arr == nullptr)
//    {
//       return -1;
//    }
//    for (size_t i = 0; i < 4; i++)
//    {
//       *(arr + i) = i;
//    }
//    for (size_t i = 0; i < 4; i++)
//    {
//       std::cout << *(arr + i) << std::endl;
//    }

//    return 0;
// }

// calloc : clear allocation
// int main()
// {
//    int *arr = (int *)calloc(4, sizeof(int)); // mem allocated is 0
//    if (arr == nullptr)
//    {
//       return -1;
//    }
//    for (size_t i = 0; i < 4; i++)
//    {
//       *(arr + i) = i;
//    }
//    for (size_t i = 0; i < 4; i++)
//    {
//       std::cout << *(arr + i) << std::endl;
//    }

//    return 0;
// }

// realloc() function is used to change the size of the memory block without
// This will allocate memory space of 2*sizeof(int).
// Also, this function moves the contents of the old block
// to a new block and the data of the old block is not lost.
// We may lose the data when the new size is smaller than
// the old size.
// Newly allocated bytes are uninitialized.
// int main()
// {
//    int *arr = (int *)calloc(4, sizeof(int)); // mem allocated is 0
//    if (arr == nullptr)
//    {
//       return EXIT_FAILURE;
//    }
//    for (size_t i = 0; i < 4; i++)
//    {
//       std::cout << (arr + i) << " " << *(arr + i) << std::endl;
//    }

//    // grow the size
//    arr = (int *)realloc(arr, 6 * sizeof(int));
//    if (arr == nullptr)
//    {
      // return EXIT_FAILURE;
//    }
//    for (size_t i = 0; i < 6; i++)
//    {
//       *(arr + i) = i+1;
//    }
//    for (size_t i = 0; i < 6; i++)
//    {
//       std::cout << (arr + i) << " " << *(arr + i) << std::endl;
//    }

//    // shrink the size
//    arr = (int *)realloc(arr, 4 * sizeof(int));
//    if (arr == nullptr)
//    {
//       return EXIT_FAILURE;
//    }
//    for (size_t i = 0; i < 4; i++)
//    {
//       *(arr + i) = i+1;
//    }
//    for (size_t i = 0; i < 4; i++)
//    {
//       std::cout << (arr + i) << " " << *(arr + i) << std::endl;
//    }
   
//    return 0;
// }

// free: free function is used to release the dynamically allocated memory in heap.
// int main()
// {
//    int *arr = (int *)calloc(4, sizeof(int)); // mem allocated is 0
//    if (arr == nullptr)
//    {
//       return EXIT_FAILURE;
//    }
//    for (size_t i = 0; i < 4; i++)
//    {
//       std::cout << *(arr + i) << std::endl;
//    }

//    free(arr);
//    arr = nullptr;

//    return 0;
// }

// // Sizeof
// int main() {
//    printf("%d\n",sizeof(int)); // returns size_t

//    int arr[10];
//    printf("%d\n",sizeof(arr));
//    int * arrP1;
//    printf("%d\n",sizeof(arrP1));
//    int * arrP2 = calloc(10,sizeof(int));
//    printf("%d\n",sizeof(arrP2));

//    printf("%d\n",sizeof(sizeof(char)));
//    printf("%d\n",sizeof(size_t));

//    return 0;
// }

// int main()
// {
//    // memcmp()
//    char arr1[] = {0, 1};
//    char arr2[] = {0, 2};
//    char arr3[] = {0, 1};
//    std::cout << memcmp(arr1, arr2, 2 * sizeof(char)) << std::endl;
//    std::cout << memcmp(arr1, arr3, 2 * sizeof(char)) << std::endl;

//    // memcpy()
//    char arr1[] = {0, 1};
//    char arr2[] = {0, 2};
//    std::cout << memcmp(arr1, arr2, 2 * sizeof(char)) << std::endl;
//    memcpy(arr1, arr2, 2 * sizeof(char));
//    std::cout << memcmp(arr1, arr2, 2 * sizeof(char)) << std::endl;

//    // memset()
//    char arr1[] = {0, 1};
//    char arr2[] = {0, 2};
//    std::cout << memcmp(arr1, arr2, 2 * sizeof(char)) << std::endl;
//    memset(&arr1[1], 2, 1 * sizeof(int));
//    std::cout << memcmp(arr1, arr2, 2 * sizeof(char)) << std::endl;

//    // memchr()
//    char arr[] = {1, 2, 3};
//    std::cout << memchr(arr, 3, 3 * sizeof(char)) << std::endl;
//    std::cout << *(char *)memchr(arr, 3, 3 * sizeof(char)) << std::endl;
//    std::cout << int(*(char *)memchr(arr, 3, 3 * sizeof(char))) << std::endl;

//    // memmove() and memcpy()
//    char arr1[] = {65, 66, 67, 68, 0};
//    char arr2[] = {65, 66, 67, 68, 0};
//    memcpy(arr1, arr1 + 1, 3); // directly copies
//    std::cout << arr1 << std::endl;
//    memmove(arr2, arr2 + 1, 3); // makes a copy and puts it into a buffer
//    std::cout << arr2 << std::endl;

//    return 0;
// }
