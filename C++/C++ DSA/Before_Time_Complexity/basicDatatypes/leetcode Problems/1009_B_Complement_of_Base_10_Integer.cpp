#include <iostream>

// ex: input = 10
// 10 = 1010
// complement = 0101 = 5

int bitwiseComplement(int n) 
{
    //         00011101   n = 29
    //*****************
    //         11100010   ~n
    //      &  00011111   mask
    //-----------------
    //         00000010 = ans = 00010 = 2
    //*****************
    int m = n;
    int mask = 0;
    for(;m!=0;)
    {
        mask = (mask << 1) | 1;
        m = m>>1;
    }
    m = (~n) & mask;
    if(n == 0) return 1;
    return m;
}

int main()
{
   int n;
   std::cin >> n;
   std::cout << bitwiseComplement(n) << std::endl;
}