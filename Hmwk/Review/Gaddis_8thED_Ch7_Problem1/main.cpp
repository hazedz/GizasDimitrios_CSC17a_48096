/* 
 * File:   main.cpp
 * Author: Dimitrios Gizas
 * Created on May 17, 2016, 6:18 PM
 * Purpose:Largest/Smallest Array Values
 */


//System Libraries
#include <iostream>
using namespace std;


//User Libraries

//Global Constants

//Function Prototypes

//Execution Beings Here
int main(int argc, char** argv) {
    const int NUM = 10;
    int hNum; //Maximum number
    int lNum; //Minimum number
    int a[NUM];

    cout << "Enter 10 value" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Enter value: " << endl;
        ;
        cin >> a[i];
    }
    hNum = a[0];
    lNum = a[0];
    for (int i = 1; i < 10; i++) {
        if (hNum > a[i]) {
            hNum = a[i];
        } else if (lNum < a[i]) {
            lNum = a[i];
        }
    }

    cout << "The highest number inputed is  : " << lNum << endl;
    cout << "The lowest number inputed is : " << hNum << endl;
    return 0;
}