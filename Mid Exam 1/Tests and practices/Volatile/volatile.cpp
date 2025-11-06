#include <iostream>
#include <chrono>

int main () {
    auto start = std::chrono::steady_clock::now ();
    volatile int sum = 0;
    for (size_t i = 1; i <= 500; i ++)
        sum += i;
    auto end = std::chrono::steady_clock::now ();

    auto sub = std::chrono::duration_cast <std::chrono::microseconds> (end - start).count ();

    std::cout << "The Time Of Summary = " << sub << " ms" << std::endl;
}