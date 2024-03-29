#include <iostream>

int main()
{
   // *  *  *  *
   // *  *  *  *
   // *  *  *  *
   // *  *  *  *
   // int inp;
   // std::cin >> inp;
   
   // for(int i = 0; i < inp; i++)
   // {
   //    for(size_t j = 0; j < inp; j++)
   //    {
   //       std::cout << " * ";
   //    }
   //    std::cout << std::endl;
   // }
   
   // 1  2  3  4
   // 1  2  3  4
   // 1  2  3  4
   // 1  2  3  4
   // int inp;
   // std::cin >> inp;
   
   // for(int i = 0; i < inp; i++)
   // {
   //    for(int j = 0; j < inp; j++)
   //    {
   //       std::cout << " " << j + 1 << " ";
   //    }
   //    std::cout << std::endl;
   // }

   // 3 2 1
   // 3 2 1
   // 3 2 1
   // int inp;
   // std::cin >> inp;

   // for(int i = 0; i < inp; i++)
   // {
   //    for(int j = inp; j > 0; j--)
   //    {
   //       std::cout << " " << j << " ";
   //    }
   //    std::cout << std::endl;
   // }

   // 1 2 3
   // 4 5 6
   // 7 8 9
   // int inp;
   // std::cin >> inp;

   // int i = 0;
   // for(; i < inp; i++)
   // {
   //    for(int j = 0; j< inp; j++)
   //    {
   //       std::cout << " " << (inp*i + j + 1) << " ";
   //    }
   //    std::cout << std::endl;
   // }

   // *
   // * *
   // * * *
   // int inp;
   // std::cin >> inp;

   // for(int i = 0; i < inp; i++)
   // {
   //    for(int j = 0; j < i+1; j++)
   //    {
   //       std::cout << " * ";
   //    }
   //    std::cout << std::endl;
   // }

   // 1
   // 1 2
   // 1 2 3
   // int inp;
   // std::cin >> inp;

   // for(int i = 0; i < inp; i++)
   // {
   //    for(int j = 0; j < i+1; j++)
   //    {
   //       std::cout << " " << i + 1 << " ";
   //    }
   //    std::cout << std::endl;
   // }

   // 1
   // 2 3
   // 3 4 5
   // int inp;
   // std::cin >> inp;

   // for(int i = 0; i < inp; i++)
   // {
   //    for(int j = 0; j < i+1; j++)
   //    {
   //       std::cout << " " << (i + j + 1) << " ";
   //    }
   //    std::cout << std::endl;
   // }

   // 1
   // 3 2
   // 3 2 1
   // int inp;
   // std::cin >> inp;

   // for(int i = 0; i < inp; i++)
   // {
   //    for(int j = 0; j < i+1; j++)
   //    {
   //       std::cout << " " << (i + 1) - j << " ";
   //    }
   //    std::cout << std::endl;
   // }

   // A A A
   // B B B
   // C C C
   // int inp;
   // std::cin >> inp;
   
   // for(int i = 0; i < inp; i++)
   // {
   //    for(int j = 0; j < inp; j++)
   //    {
   //       std::cout << " " << char(i + 65) << " ";
   //    }
   //    std::cout << std::endl;
   // }

   // A B C
   // A B C
   // A B C
   // int inp;
   // std::cin >> inp;
   
   // for(int i = 0; i < inp; i++)
   // {
   //    for(int j = 0; j < inp; j++)
   //    {
   //       std::cout << " " << char(j + 65) << " ";
   //    }
   //    std::cout << std::endl;
   // }
   
   // A B C
   // B C D
   // C D E
   // int inp;
   // std::cin >> inp;
   
   // for(int i = 0; i < inp; i++)
   // {
   //    for(int j = 0; j < inp; j++)
   //    {
   //       std::cout << " " << char(i + j + 65) << " ";
   //    }
   //    std::cout << std::endl;
   // }

   // A
   // A B
   // A B C
   // int inp;
   // std::cin >> inp;

   // for(int i = 0; i < inp; i++)
   // {
   //    for(int j = 0; j < i + 1; j++)
   //    {
   //       std::cout << " " << char(j + 65) << " ";
   //    }
   //    std::cout << std::endl;
   // }

   // A
   // B C
   // D E F
   // int inp;
   // std::cin >> inp;

   // int count = 0;
   // for(int i = 0; i < inp; i++)
   // {
   //    for(int j = 0; j < i + 1; j++)
   //    {
   //       std::cout << " " << char(65 + count++) << " ";
   //    }
   //    std::cout << std::endl;
   // }

   // A
   // B C
   // C D E
   // int inp;
   // std::cin >> inp;

   // int count = 0;
   // for(int i = 0; i < inp; i++)
   // {
   //    for(int j = 0; j < i + 1; j++)
   //    {
   //       std::cout << " " << char(i + j + 65) << " ";
   //    }
   //    std::cout << std::endl;
   // }

   // D
   // C D
   // B C D
   // int inp;
   // std::cin >> inp;

   // int count = 0;
   // for(int i = 0; i < inp; i++)
   // {
   //    for(int j = 0; j < i + 1; j++)
   //    {
   //       std::cout << " " << char((inp - i) + j + 64) << " ";
   //    }
   //    std::cout << std::endl;
   // }

   //     *
   //   * *
   // * * *
   // int inp;
   // std::cin >> inp;

   // for(int i = 0; i < inp; i++)
   // {
   //    for(int j = 0; j < inp - i; j++)
   //    {
   //       std::cout << " ";
   //    }
   //    for(int j = 0; j < i + 1; j++)
   //    {
   //       std::cout << "*";
   //    }
   //    std::cout << std::endl;
   // }

   // * * *   
   // * *   
   // *
   // int inp;
   // std::cin >> inp;    

   // for(int i = inp; i > 0; i--)
   // {
   //    for(int j = 0; j < i; j ++)
   //    {
   //       std::cout << " * ";
   //    }
   //    std::cout << std::endl;
   // }

   // 1 1 1  
   //   2 2  
   //     3
   // int inp;
   // std::cin >> inp;

   // for(int i = 0; i < inp; i++)
   // {
   //    for(int j = 0; j < i + 1; j++)
   //    {
   //       std::cout << " ";
   //    }
   //    for(int j = inp - i; j > 0; j--)
   //    {
   //       std::cout << i + 1;
   //    }
   //    std::cout << std::endl;
   // }
   
   //     1
   //   2 2
   // 3 3 3
   // int inp;
   // std::cin >> inp;

   // for(int i = 0; i < inp; i++)
   // {
   //    for(int j = 0; j < inp - i; j++)
   //    {
   //       std::cout << " ";
   //    }
   //    for(int j = 0; j < i + 1; j++)
   //    {
   //       std::cout << i + 1;
   //    }
   //    std::cout << std::endl;
   // }
     
   //     1
   //   2 3
   // 4 5 6
   // int inp;
   // std::cin >> inp;

   // int count = 1;
   // for(int i = 0; i < inp; i++)
   // {
   //    for(int j = 0; j < inp - i; j++)
   //    {
   //       std::cout << " ";
   //    }
   //    for(int j = 0; j < i + 1; j++)
   //    {
   //       std::cout << count++;
   //    }
   //    std::cout << std::endl;
   // }  

   //       *
   //     * * *
   //   * * * * *
   // * * * * * * *
   // int inp;
   // std::cin >> inp;    

   // for(int i = 0; i < inp ; i++)
   // {
   //    for(int j = 0; j < inp - i - 1; j++)
   //    {
   //       std::cout << " ";
   //    }
   //    for(int j = 0; j < 1 + (i+1 - 1)*2; j++)
   //    {
   //       std::cout << '*';
   //    }
   //    for(int j = 0; j < inp - i - 1; j++)
   //    {
   //       std::cout << " ";
   //    }
   //    std::cout << std::endl;
   // }

   //       1
   //     1 2 1
   //   1 2 3 2 1
   // 1 2 3 4 3 2 1 
   
   // int inp;
   // std::cin >> inp;

   // for(int i = 0; i < inp; i++)
   // {
   //    for(int j = 0; j < inp - i - 1; j++)
   //    {
   //       std::cout << "   ";
   //    }
   //    for(int j = 0; j < i + 1; j++)
   //    {
   //       std::cout << " " << j + 1 << " ";
   //    }
   //    for(int j = 0; j < i; j++)
   //    {
   //       std::cout << " " << i - j << " ";
   //    }
   //    for(int j = 0; j < inp - i - 1; j++)
   //    {
   //       std::cout << "   ";
   //    }
   //    std::cout << std::endl;
   // }

   // 1 2 3 4 4 3 2 1
   // 1 2 3 * * 3 2 1 
   // 1 2 * * * * 2 1 
   // 1 * * * * * * 1 
   
   // int inp;
   // std::cin >> inp;

   // for(int i = 0; i < inp; i++)
   // {
   //    for(int j = 0; j < inp - i; j++)
   //    {
   //       std::cout << " " << j + 1 << " ";
   //    }
   //    for(int j = 0; j < ((i+1 - 1) * 2); j++)
   //    {
   //       std::cout << " * ";
   //    }
   //    for(int j = 0; j < inp - i; j++)
   //    {
   //       std::cout << " " << (inp - i) - j << " ";
   //    }
   //    std::cout << std::endl;
   // }
}