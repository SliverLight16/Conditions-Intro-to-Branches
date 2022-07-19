#include <iostream> 
using namespace std;

int main () {
int val;

cin >> val;

    if (val < 0) {
        val = -val;

        cout << val; 
    }
}