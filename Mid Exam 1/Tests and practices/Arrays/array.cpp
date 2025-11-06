#include <iostream>

int main () {
    //էս տարբերակը սխալ է
    int size1 = 8;
    int array1[size];
    //Պետք է անել այսպես
    const int size2 = 8;
    int array2[size];

    int arr[4] = {10, 20, 30, 40};
    
    std::cout << arr[2] << "\n"; //կտպի 30
    std::cout << * (arr + 2) << "\n"; //կտպի 30
    
    std::cout << arr[17] << " "; //կտպի Garbage կամ Undefined Behavior
    std::cout << "\n";
    
    int arr1[10] = {}; //լրիվ 0   
    for (size_t i = 0; i < 10; ++i)
        std::cout << arr1[i] << " ";
    std::cout << "\n";
        
    int arr2[10] = {0}; //լրիվ 0
    for (size_t i = 0; i < 10; ++i)
        std::cout << arr2[i] << " ";
    std::cout << "\n";
    
    int arr3[10] = {0, 1, 2}; //0 1 2, իսկ մնացածը 0
    for (size_t i = 0; i < 10; ++i)
        std::cout << arr3[i] << " ";
    std::cout << "\n";
        
    int arr4[10]; //Garbage
    for (size_t i = 0; i < 10; ++i)
        std::cout << arr4[i] << " ";
    std::cout << "\n";
    
    std::cout << std::endl;
    
    return 0;
}
