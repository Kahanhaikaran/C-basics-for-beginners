#include <iostream>
#include <cmath>
using namespace std;


int main() 
{
    int age;
    
    cout << "Enter your age :";
    
    cin >> age;
    
    if(age > 100){
        cout << "You are too old for this website";
    }
    else if (age >= 18){
        cout << "Welcome to the website";
    }
    
    else{
        cout << "You are too small for this website";
    }
    return 0;
}
