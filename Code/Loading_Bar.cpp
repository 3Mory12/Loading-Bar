#include <iostream>
#include <windows.h> // Using This Library To The Function -> Sleep() .. That can make delay for thing you want delay it :)
using namespace std;

int main() {

    int   bar1 = 219
        , bar2 = 273
        , barSZ = 25; // You Can Change The Bar Size.. if you want :)

    cout << "\n\t\t\t        Loading ... " << endl;
    cout << "\n\t\t\t\t";
    for (int i = 1; i <= barSZ; i++) {
        cout << char(bar2);
    }
    cout << "\r"; // ( /r ) -> means that i want the next code to return to the beginning of the line
    cout << "\t\t\t\t";
    for (int i = 1; i <= barSZ; i++) {
        cout << char(bar1);
        Sleep(100); // The number in the brackets is the number of milliseconds of the thing will be delayed... You can control the speed of delay from here 
    }
    cout << endl << endl;

    return 0;
}