#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main(){
    srand(time(0));
    string r;
    cout << "Press Enter 3 times to reveal your future.\n";
    for(int i = 0; i < 3; i++){
        cin.get();
    }
    int x = rand() % 9 + 1;
    if(x == 1) r = "A";
    else if(x == 2) r = "B+";
    else if(x == 3) r = "B";
    else if(x == 4) r = "C+";
    else if(x == 5) r = "C";
    else if(x == 6) r = "D+";
    else if(x == 7) r = "D";
    else if(x == 8) r = "F";
    else r = "W";
    
    cout << "You will get " << r << " in this 261102.";
}