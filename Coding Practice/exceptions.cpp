#include <iostream>
    
    /** Simple try catch
    int main(){
    
     
    int miles{};
    int gallons {};
    double miles_per_gallon{};

    std::cout << "Enter the miles driven: ";
    std::cin >> miles;
    std::cout << "Enter the gallons used: ";
    std::cin >> gallons;

    try {
        if(gallons == 0){
            throw 0;
        }
        miles_per_gallon = static_cast<double>(miles) / gallons;
        std::cout << "Result: " << miles_per_gallon << std::endl;
    }
    catch (int &ex){
        std::cerr << "Sorry, you cant divide by zero" << std::endl;
    }
    std::cout << "BYE!" << std::endl;
    return 0;
    */
    

    //-----------------------------------------------
    //Function error handling
    /** 
    double calculate_mpg(int miles, int gallons){
            if (gallons == 0)
                throw 0;
            return static_cast<double>(miles) / gallons;
    }

    int main() {

        int miles{};
        int gallons {};
        double miles_per_gallon{};

        std::cout << "Enter the miles driven: ";
        std::cin >> miles;
        std::cout << "Enter the gallons used: ";
        std::cin >> gallons;


        try {
        miles_per_gallon = calculate_mpg(miles, gallons);
        std::cout << "Result: " << miles_per_gallon << std::endl;
        }
        catch (int &ex){
        std::cerr << "Sorry, you cant divide by zero" << std::endl;
        }
        std::cout << "BYE!" << std::endl;
        return 0;
    }

    */

    //-----------------------------------------------
   // Handling Multiple Exceptions
    /** 
    double calculate_mpg(int miles, int gallons){
            if (gallons == 0)
                throw 0;
            if (miles < 0 || gallons < 0)
                throw std::string("Negative Value Error");
            return static_cast<double>(miles) / gallons;
    }

    int main (){
    
     int miles{};
        int gallons {};
        double miles_per_gallon{};

        std::cout << "Enter the miles driven: ";
        std::cin >> miles;
        std::cout << "Enter the gallons used: ";
        std::cin >> gallons;


        try {
        miles_per_gallon = calculate_mpg(miles, gallons);
        std::cout << "Result: " << miles_per_gallon << std::endl;
        }
        catch (int &ex){
        std::cerr << "Sorry, you cant divide by zero" << std::endl;
        }
        catch(std::string &ex){
            std::cerr << ex << std::endl;
        }
        std::cout << "BYE!" << std::endl;
        return 0;
    return 0;

   }
    */

    //-----------------------------------------------
    // User-Defined Exception Classes
    /** 
    class DivideByZeroException {

    };
    class NegativeValueException{

    };
    double calculate_mpg(int miles, int gallons){
            if (gallons == 0)
                throw DivideByZeroException();
            if (miles < 0 || gallons < 0)
                throw NegativeValueException();
            return static_cast<double>(miles) / gallons;
    }

    int main (){
    
     int miles{};
        int gallons {};
        double miles_per_gallon{};

        std::cout << "Enter the miles driven: ";
        std::cin >> miles;
        std::cout << "Enter the gallons used: ";
        std::cin >> gallons;


        try {
        miles_per_gallon = calculate_mpg(miles, gallons);
        std::cout << "Result: " << miles_per_gallon << std::endl;
        }
        catch (const DivideByZeroException &ex){
        std::cerr << "Sorry, you cant divide by zero" << std::endl;
        }
        catch(const NegativeValueException &ex){
            std::cerr << "Sorry, one of our parameters is negative" << std::endl;
        }
        std::cout << "BYE!" << std::endl;
        return 0;
    return 0;
   }
   */

  