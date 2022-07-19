#include <iostream> 
using namespace std;

int main() {
    int userAge;
    int insurePrice;

    cin>> userAge;

    if (userAge < 16) {
        //younger than 16
        cout<< "Too Young\n";
        insurePrice = 0;
    }

    else if (userAge < 25) {
        // 16 - 24
        insurePrice = 4800;
    }

    else if (userAge < 40) {
        //25 - 39
        insurePrice = 2350;}
   
    else
   // over 40
   insurePrice = 2100;
   
    cout<< "Annual Price: $" << insurePrice;
   
}