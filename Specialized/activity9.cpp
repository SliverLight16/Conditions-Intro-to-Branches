#include <iostream>
using namespace std;

int main() {
    int rideAge;
    int rideHeight;

    cin>> rideAge >> rideHeight;

    if (rideAge < 10) {
        cout<< "Too Young, Can't Ride";
    }
   
    else
        if (rideAge < 80)
            if (rideHeight < 48) {
                cout<< "Too Short, Can't Ride";
            }
      
            else {
                cout << "Can Ride :)";
            }
      
        else {
            cout<< "Can ride, but IDK";
        }
}