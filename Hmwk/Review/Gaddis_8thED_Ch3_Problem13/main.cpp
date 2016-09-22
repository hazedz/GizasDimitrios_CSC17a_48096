/* 
 * File:   main.cpp
 * Author: dimitrios gizas
 *
 * Created on September 20, 2016, 11:59 PM
 * Purpose: Convert US Dollars to Yen and Euro
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants as of 1/14
const float YEN_PER_DOLLAR = 102.63;
const float EUROS_PER_DOLLAR = 0.89;

int main(int argc, char** argv) {
    //declare variables
    float yen, euro;
    int dollar;
    
    
    //input
    cout << "How many dollars would you like to convert to Yen and Euros\n$";
    cin >> dollar;
    
    //calculations
    yen = dollar * YEN_PER_DOLLAR;
    euro = dollar * EUROS_PER_DOLLAR;
    std::cout <<std::fixed;
    std::cout <<std::setprecision(2);

    //output
    cout << euro << " Euros\n" << yen << " Yen" <<endl;
    return 0;
}
