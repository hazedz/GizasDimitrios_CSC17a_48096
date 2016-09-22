/* 
 * File:   main.cpp
 * Author: dimitrios gizas
 *
 * Created on September 18, 2016, 1:01 PM
 * purpose: Write a program to predict the growth of organisms
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    //Declare Variables
    int start,days;
    float grate;
    
    //Input
    cout << "What is the starting population?" << endl;
    cin >> start;
    cout << "What is the growth rate?(by percentage)" << endl;
    cin >> grate;
    grate /= 100.00;
    cout << "How many days will the population grow?" << endl;
    cin >> days;
    
    //loops and output
    for(int i=0;i<=days;i++){
        cout << "Day " << i << ": " << start << "\n";
        start = (start * grate) + start;
    }
    return 0;
}