#include <iostream> 
using namespace std;

int main () {
    int numYears;

    cin >> numYears;

    if (numYears == 1) {
        cout <<"Newlyweds";
    }

    else if (numYears == 25) {
        cout<< "Sliver";
    }
    
    else if (numYears == 50) {
    cout<< "Golden";
    }

    else {
    cout<< "Congrats";
    }
}