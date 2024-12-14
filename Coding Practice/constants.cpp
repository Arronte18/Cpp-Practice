#include <iostream>

using namespace std;
// comment
int main(){
    int smallRooms {0};
    int largeRooms {0};
    cout << "Welcome to Anthony's Carpet Cleaning Service" << endl;

    cout << "How many small rooms would you like cleaned? ";
    cin >> smallRooms;

    cout << "How many large rooms would you like cleaned? ";
    cin >> largeRooms;

    const int pricePerSmall {25};
    const int pricePerLarge {35};
    const double tax {0.06};

    cout << "Price per small room: " << pricePerSmall << endl;
    cout << "Price per large room: " << pricePerLarge << endl;

    int totalCost {(smallRooms * pricePerSmall) + (largeRooms * pricePerLarge)};
    cout << "Cost: " << totalCost << endl;
    cout << "Tax: " << totalCost * tax << endl;
    cout << "===========================================" << endl;
    cout << "Total estimate: " << totalCost + (totalCost * tax) << endl;
    cout << "This estimate is valid for 30 days" << endl;
    return 0;
}