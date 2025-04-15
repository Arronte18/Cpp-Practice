#include <iostream>
#include <vector>
int main(){
    // empty array of size 5, garbage value at test_scores[0]
    int test_scores [5];
    // init array to 3,5 and the rest are 0
    int high_scores [10] {3, 5};
    // init array of size 365, all elems are 0
    double hi_temps [365] {0};
    //size automatically calculated
    int another_array[] {1, 2, 3 , 4,5};
    //to get size of array
    int size = sizeof(another_array) / (sizeof(another_array[0]));


    //=========================================================
    //empty vector of no elements
    std::vector<char> vowels;
    // makes vector of 10 ints all set to 0
    std::vector<int> testy_scores (10);

    std::vector<char> vowelss {'a','e','i','o','u'};
    //init vector of size 365, elem default value is 80
    std::vector<double> high_temp  (365, 80.0);

    // return 365
    int length = high_temp.size();
    std::cout << length << std::endl;

    high_temp.push_back(98);
    length = high_temp.size();
    std::cout << length;

    return 0;
}