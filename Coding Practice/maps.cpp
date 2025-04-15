#include <iostream>
#include <map>
#include <set>

void display(const std::map<std::string, std::set<int>> &m){
    std::cout << "[ ";
    for(const auto &elem: m){
        std::cout << elem.first << ": [ ";
        for(const auto &set_elem: elem.second)
            std::cout << set_elem << " ";
        std::cout << "] ";
    }
    std::cout << "] " << std::endl;
}

void test1(){
    std::cout << "\nTest1==========================="<< std::endl;
    std::map<std::string, int> m{
        {"Larry", 3},
        {"Moe", 1},
        {"Curly", 2}
    };
    //display(m);

    m.insert(std::pair<std::string, int>("Anna", 10));
    //display(m);

    m.insert(std::make_pair("Joe", 5));
   // display(m);

    m["Frank"] = 18;
    //display(m);

    m["Frank"] += 10;
   // display(m);

    m.erase("Frank");
    //display(m);

    //m.count returns 0 or 1 depending if key is in the map

    //finds reference to the std::pair with key larry and saves it
    auto it = m.find("Larry");
    if(it != m.end()){
        //it is now a pointer to the map pair
        std::cout << "Found: " << it->first <<":" << it->second << std::endl;
    }

    m.clear();
}

void test2(){
    std::cout << "\nTest2===================" << std::endl;
    std::map<std::string, std::set<int>> grades{
        {"Larry", {100, 90}},
        {"Moe", {94}},
        {"Curly", {80, 90, 100}}
    };
    display(grades);

    grades["Larry"].insert(95);

    auto it = grades.find("Moe");
    if(it != grades.end()){
        it->second.insert(1000);
    }

    display(grades);
}
int main(){


    test2();
    return 0;
}