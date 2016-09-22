/* 
 * File:   main.cpp
 * Author: dimitrios gizas
 *
 * Created on September 18, 2016, 1:01 PM
 * Purpose: Minimum/Maximum
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

   //Declare variables 
    int num1, num2;
    
   //Asking for the 2 numbers 
    cout << "Please type in your First number" << endl;
    cin >> num1;
    
    cout << "Please type in you Second number" << endl;
    cin >> num2; 
    
    //output results 
    if (num1 > num2) cout << num1 << " is larger then " << num2;
    if (num1 < num2) cout << num2 << " is larger then " << num1; 
    
    return 0;
}