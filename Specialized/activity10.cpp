#include <iostream>
using namespace std;

int main() {
    int userAge;
    cin>> userAge;

    if (userAge < 16) {
        cout<< "Enjoy your early years.\n";
    }
   
    if (userAge > 15) {
        cout<< "You are old enough to drive.\n";
    }

    if (userAge > 17) {
        cout<< "You are old enough to vote.\n";
    }

    if (userAge > 24) {
        cout<< "You can easily rent a car.\n";
    }

    if (userAge > 34) {
        cout<< "You can run for president.\n";
    }
}