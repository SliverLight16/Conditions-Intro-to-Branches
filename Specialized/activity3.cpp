#include <iostream>
using namespace std;

int main() {
    int userAge;
    int insurePrice;

    cin >> userAge;

    if (userAge < 25) {
        insurePrice = 4800;
    }

    else {
        insurePrice = 2200;
    }

    cout << " Insurance Price: $" << insurePrice;
}