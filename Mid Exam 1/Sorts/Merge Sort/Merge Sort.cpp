#include <iostream>
#include <vector>
#include <climits> /* INT_MAX-ի համար */

void merge (std::vector<int> &A, int p, int q, int r) {
    /* p - left index, r - right index */
    int n1 = q - p + 1;
    int n2 = r - q;
    
    std::vector <int> L(n1 + 1);
    std::vector <int> R(n2 + 1);
    
    //Copying left side
    for (int i = 0; i < n1; ++i)
        L[i] = A[p + i];
    
    //Copying right side
    for (int j = 0; j < n2; ++j)
        R[j] = A[q + 1 + j];
    
    //Highest element would be infinity
    L[n1] = INT_MAX;
    R[n2] = INT_MAX;
    
    int i = 0, j = 0;
    for (size_t k = p; k <= r; ++k) {
        if (L[i] <= R[j])
            A[k] = L[i++];
        else
            A[k] = R[j++];
    }
}

void merge_sort (std::vector<int> &A, int p, int r) {
    /* We are dividing array, if there are more than 2 elements */
    if (p < r) {
        /* q - middle index */
        int q = (p + r) / 2;
        merge_sort (A, p, q);
        merge_sort (A, q + 1, r);
        merge (A, p, q, r);
    }
}

int main () {
    std::vector <int> arr = {5, 2, 4, 6, 1, 3};
    
    merge_sort (arr, 0, arr.size () - 1);
    
    std::cout << "Sorted Array: ";
    for (size_t i = 0; i < arr.size (); ++i)
        std::cout << arr[i] << " ";

    std::cout << std::endl;
    
    return 0;
}