#include <iostream>
using namespace std;

int main() {
    int numStrokes;

    cin>> numStrokes;

    if (numStrokes <= 0) {
        cout<< "Invalid Entry";
    }

    else if (numStrokes == 1) {
        cout<< "Hole in 1";
    }
   
    else if (numStrokes == 2) {
        cout<< "Eagle";
        }

    else if (numStrokes == 3){
        cout<< "Birdie";
    }
   
    else if (numStrokes == 4) {
        cout<< "Par";
    }
    
    else 
        {cout<< "Better Luck Next Time!";
}    
}