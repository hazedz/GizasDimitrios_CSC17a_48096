/* 
 * File:   main.cpp
 * Author: dimitrios gizas
 *
 * Created on September 18, 2016, 1:01 PM
 * Purpose:Celsius to Fahrenheit
 */


#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
//Introduce the variables.
    float f,c;
//Introduce the outputs for the user.
    cout << "Conversion From Celsius To Fahrenheit" << endl;
    cout << "Enter the Celsius" << endl;
    cin >> c;
//Introduce the equation to find the Fahrenheit.
    f = (1.8) * (c) + 32;
//Introduce the display to show user the Fahrenheit conversion.
    cout << "Fahrenheit:" << setprecision(3) << f << endl;
    return 0;
}
