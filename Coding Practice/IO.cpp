#include <iostream>
#include <string>
#include <fstream>



int main(){
    // this adds to output, not rewrite
    //     std::ofstream out_file("../output.txt", std::ios::app);

    // creates output.txt, rewrites if it already exists
    std::ofstream out_file("../output.txt");
    if(!out_file){
        std::cerr << "Error creating file" << std::endl;
        return 1;
    }

    std::string line;
    std::cout << "Enter something to write to the file: ";
    std::getline(std::cin, line);
    out_file << line;
    return 0;
}