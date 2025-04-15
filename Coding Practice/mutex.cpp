#include <iostream>
#include <thread>
#include <mutex>

std::mutex carMutex;

void driveCar(std::string driverName){
    
    std::unique_lock<std::mutex> carLock(carMutex);
    std::cout << driverName << " is driving" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << driverName << " is done driving" << std::endl;
    carLock.unlock();
}


int main(){
    // gives error
    std::thread t1(driveCar,"Anthony");
    std::thread t2(driveCar, "Gabrielle");

    t1.join();
    t2.join();
    return 0;

    
}