long arrayManipulation (int n, vector <vector <int>> queries) {
    vector <int> arr (n, 0);
    
    for (size_t j = 0; j < queries.size (); ++j) {
        size_t a = queries[j][0];
        size_t b = queries[j][1];
        size_t k = queries[j][2];
        
        for (size_t i = a - 1; i < b; ++i)
            arr[i] += k;
    }
    
    size_t max = arr[0];

    for (size_t i = 0; i < n; ++i)
        if (arr[i] > max)
            max = arr[i];
            
    return max;
}