#include <iostream>
using namespace std;

int main() {
    int age;

    cin>> age;

    if (age < 6) {
        cout<< "No Teams Available";
    }

    else if (age < 8) {
        cout<< "Play on U8 team.";
    }
   
    else if (age < 10) {
        cout<< "Play on U10 team";
    }

    else if (age < 12) {
        cout<< "Play on U12 team";
    }
   
    else
        cout<< "No Teams Available";
}