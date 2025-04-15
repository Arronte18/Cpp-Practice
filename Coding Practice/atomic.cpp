#include <iostream>
#include <thread>
#include <atomic>


int main(){
    // gives error

    std::atomic<int> counter = 0;
    auto work = [&counter](){
        for(int i = 0; i < 10000; ++i){
            ++counter;
        }
    };
    std::thread worker1(work);
    std::thread worker2(work);

    worker1.join();
    worker2.join();

    std::cout << counter << std::endl;
    return 0;

    
}