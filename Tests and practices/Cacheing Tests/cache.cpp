#include <iostream>
#include <vector>
#include <chrono>

int main () {
    const int SIZE = 1024 * 1024 * 64; //64 միլիոն տարր
    const int STEP1 = 1;
    const int STEP2 = 64;

    std::vector <int> arr (SIZE, 1);
    long long sum = 0;

    auto start1 = std::chrono::high_resolution_clock::now ();
    for (int i = 0; i < SIZE; i += STEP1)
        sum += arr[i];
    auto end1 = std::chrono::high_resolution_clock::now ();

    auto start2 = std::chrono::high_resolution_clock::now ();
    for (int i = 0; i < SIZE; i += STEP2)
        sum += arr[i];
    auto end2 = std::chrono::high_resolution_clock::now ();

    std::chrono::duration <double> time1 = end1 - start1;
    std::chrono::duration <double> time2 = end2 - start2;

    std::cout << "Step = 1: " << time1.count () << " sec\n";
    std::cout << "Step = 64: " << time2.count () << " sec\n";
    std::cout << "Summary = " << sum << std::endl;

    return 0;
}

/*Ստեղ step = 1-ը իդեալականա cache-ի համար, բայց step = 64-ի ժամանակ cache line-ը չի հասցնում պահել տվյալները */
