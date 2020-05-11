// test_prime_number.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include "PrimeNumberLib/PrimeNumberLib.h"

int main()
{
    for (int i = 1; i <= 10000; i++) {
        if (is_prime_number(i)) {
            std::cout << i << ", ";
        }
    }

    system("PAUSE");
}