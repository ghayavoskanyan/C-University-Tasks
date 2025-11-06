#include <iostream>
#include <chrono> //ժամանակի չափման համար

int main () {
    const int N = 100; //Քանի անգամ պիտի տպի
    using namespace std::chrono;

    //1-ին փորձարկում std::end
    auto start1 = high_resolution_clock::now ();
    for (int i = 0; i < N; ++i)
        std::cout << "Hello" << std::endl;
    auto end1 = high_resolution_clock::now ();

    auto time1 = duration_cast <milliseconds> (end1 - start1).count ();
    std::cout << "Time with std::endl: " << time1 << " ms" << std::endl;

    //2-րդ փորձարկում '\n' 
    auto start2 = high_resolution_clock::now();
    for (int i = 0; i < N; ++i)
        std::cout << "Hello\n";
    auto end2 = high_resolution_clock::now();

    auto time2 = duration_cast <milliseconds> (end2 - start2).count ();
    std::cout << "Time with \\n: " << time2 << " ms\n";

    auto sub = time1 - time2;
    std::cout << "Subtraction of them: " << sub << " ms" << std::endl;

    return 0;
}