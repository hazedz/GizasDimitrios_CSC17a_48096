/* 
 * File:   main.cpp
 * Author: dimitrios gizas
 *
 * Created on September 18, 2016, 1:01 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;
//constant for array size
const int NUM_NAMES=20;

//functions
void showArry(string [], int);
void bubbleSort(string [], int);
void search(string [], int);

int main(int argc, char** argv) {
    //variables
    string names[NUM_NAMES]={
        "Collins, Bill", "Smith, Bart", "Allen, Jim", "Griffin, Jim",
        "Stamey, Marty", "Rose, Geri", "Taylor, Terri", "Johnson, Jill",
        "Allison, Jeff", "Looney, Joe", "Wolfe, Bill", "James, Jean",
        "Weaver, Jim", "Pore, Bob", "Butherfod, Greg", "Javens, Renee",
        "Harrison, Rose", "Setzer, Cathy", "Pike, Gordon", "Holland, Beth"};
    

    //sort the string array
    search(names, NUM_NAMES);
    
    cout << "Sorted String Array" << endl;
    showArry(names, NUM_NAMES);
    cout << endl;
    return 0;
}

void showArry(string arr[], int S){
    for(int i=0;i<S;i++){
        cout << "Name #" << i+1 << ": " << arr[i] << endl;
    }
}
   
void bubbleSort(string strArr[], int S){
    bool swap;
    string temp;
    
    do{
        swap = false;
        for(int count=0;count<(S-1);count++){
            if(strArr[count]>strArr[count+1]){
                temp = strArr [count];
                strArr[count] = strArr[count+1];
                strArr[count+1] = temp;
                swap=true;
            }
        }
    }while(swap);
}

void search(string str[], int S){
    bubbleSort(str,S);
}