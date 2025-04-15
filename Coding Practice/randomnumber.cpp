#include <iostream>
#include <cstdlib> //req for rand()
#include <ctime> //req for time()

int main(){

    int randomNumber {};
    size_t count {10};
    int min{1};
    int max {6};

    std::cout << "RAND_MAX on my system is: " << RAND_MAX << std::endl;
    srand(time(nullptr));

    for(size_t i{1}; i <= count; ++i){
        randomNumber = rand() % max + min;
        std::cout << randomNumber << std::endl;
    }
    std::cout << std::endl;
    return 0;
}
