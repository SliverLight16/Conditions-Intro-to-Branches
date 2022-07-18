#include <iostream>
using namespace std;

int main() {
    int hotelRate;
    int userAge;

    hotelRate = 135;
    cout << "Type a number:";
    cin >> userAge;

if (userAge < 65) {
   cout << "Your Rate: ";
   cout << hotelRate; }
   
else 
   hotelRate = hotelRate - 20;
   cout << "Your Rate: ";
   cout << hotelRate;

return 0;
}