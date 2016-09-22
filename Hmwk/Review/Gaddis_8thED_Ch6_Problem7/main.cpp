/* 
 * File:   main.cpp
 * Author: dimitrios gizas
 *
 * Created on September 18, 2016, 1:01 PM
 * purpose: Demonstrate the function by calling it in a loop that 
 * displays a table of the Fahrenheit temperatures 0 - 20 and thier Celsius equivalents.
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

// Function Prototypes
float celsius(float);

// Execution begins here
int main(int argc, char** argv)
{
        cout << "Fahrenheit " << setw(12) << " Celsius" << endl;
	cout << "________________________" << endl;

	// con converts values from 0 thru 20 to celsuis from farenhiet
	for(int con = 0; con < 21; con++)
        {
                cout << setw(4) << con << setw(10) << "" << setw(10) << fixed
                     << showpoint << setprecision(2)
                     << celsius(con) << endl; 
	}

        return 0;
}

float celsius(float F)
{
        //return ((5/9) * (Fahrenheit - 32)) given from book
        //make sure to add.0f to remind program its a float
        return (( 5 / 9.0 ) * ( F - 32.0) );
}