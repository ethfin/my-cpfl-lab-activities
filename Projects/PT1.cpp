// Name: Christopher Galano
// Activity Name: PT1
// Description: A program that can tell if the input value is a odd or even number
// Date: October 14, 2021

#include <iostream>

using namespace std;

int main()
{
    // Variable Names
    int cons, num, i = 0;
    //----------------

    cout << "Enter range of numbers : ";
    cin >> num;
    cout << "Enter " << num << " consecutive numbers : ";
    
    while (i < num){
    
        cin >> cons;

        if(cons % 2 == 1 ) {
            cout << cons << " - Odd Number" << endl;
        } else if (cons % 2 == 0){
            cout << cons << " - Even Number" << endl;
        } else {
            cout << "Error" << endl;
        }

        i++;
    }

    return 0;
}