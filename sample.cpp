#include <iostream> 
#include <cstdlib>
#include <string> 

using namespace std;

int main ()
{
    string name; 
    cout << "Enter your name: ";
    cin >> name; 

    cout << "Hello there, " + name + "!";
    return 0; 
}