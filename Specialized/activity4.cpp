#include <iostream> 
using namespace std;

int main () {
    int y;
    int x;
    int max;

    cin >> x >> y;

    if (x < y) {
        max = y;
    }

    else {
        max = x;
    }

cout<< max;
}