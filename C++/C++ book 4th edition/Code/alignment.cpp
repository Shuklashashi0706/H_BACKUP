#include <iostream>

// #region A
//  int main()
//  {
//     std::cout << alignof(int) << std::endl;
//     std::cout << alignof(char) << std::endl;
//     std::cout << alignof(long long) << std::endl;
//  }
//  00 int, char, long long [Can live here]
//  01 char                 [Can live here]
//  02 char                 [Can live here]
//  03 char                 [Can live here]
//  04 int                  [Can live here]
//  05 char                 [Can live here]
//  06 char                 [Can live here]
//  07 char                 [Can live here]
//  08 int, char, long long [Can live here]
// #endregion

// #region B
//  struct S1
//  {
//     char a;         // 1    // 0
//     int i;          // 4    // 1 -> [X]
//                             // therefore 4,5,6,7
//     char b;         // 1    // 8
//     int j;          // 4    // 9 -> [X]
//                             // therefore 12,13,14,15
//     long long l;    // 8    // 16,17,18,19,20,21,22,23
//     char c;         // 1    // 24, padding = 25,26,27,28,29,30,31
//     // 19 bytes worth data  // actual size = 32
//  };
//  struct S2
//  {
//     char a;         // 1    // 0
//     char b;         // 1    // 1
//     char c;         // 1    // 2
//     int i;          // 4    // 3 -> [X]
//                             // therefore 4,5,6,7
//     int j;          // 4    // 8,9,10,11
//     long long l;    // 8    // 12 -> [X]
//                             // therefore 16,17,18,19,20,21,22,23
//     // 19 bytes worth data  // actual size = 24
//  };
//  int main()
//  {
//     std::cout << sizeof(S1) << std::endl;
//     std::cout << sizeof(S2) << std::endl;
//     return 0;
//  }
// #endregion

// #region C
//  #pragma pack(1)
//  #pragma pack(2)
//  #pragma pack(4)
//  struct S1
//  {
//     char a;
//     int i;
//     char b;
//     int j;
//     long long l;
//     char c;
//  };
//  int main()
//  {
//     std::cout << sizeof(S1) << std::endl;
//  }
// #endregion
