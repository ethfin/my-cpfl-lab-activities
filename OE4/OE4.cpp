//Name: Christopher L. Galano
//Activity Name: OE4
//Description: Create 3 triangles using for loops
//Date: October 14 2021
#include <iostream>

using namespace std;

int main(){
    //--------------Variable names---------------
    int rows, var1, var2, var3, triangle1, triangle2, triangle3;
    //-------------------------------------------

    cout << "Enter input : "; 
    cin >> rows;

    if(rows < 1){
        cout << "Error, input value should be greater than 0";
        return 0;
    }

    for (int triangleH = 1; triangleH <= rows; triangleH++){
        //----------------------
        var1 = rows - triangleH;
        var2 = triangleH * 2;
        var3 = var2 - 1;
        //----------------------

        //--------------------FIRST TRIANGLE--------------------
        for (int i = 1; i <= var1; i++){
            cout << " ";
        }
        for (triangle1 = 1; triangle1 <= var3; triangle1++){
            if (triangle1 == 1 || triangle1 == var3) {
                cout << "*";
            } else if (triangleH == rows) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << " ";
        //-----------------------------------------------------

        //--------------------SECOND TRIANGLE--------------------
        for (int i = 1; i <= var1; i++){
            cout << "  ";
        }
        for (triangle2 = 1; triangle2 <= var3; triangle2++){
            if (triangle2 == 1 || triangle2 == var3) {
                cout << "*";
            } else if (triangleH == rows) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << " ";
        //-----------------------------------------------------

        //--------------------THIRD TRIANGLE--------------------
        for (int i = 1; i <= var1; i++){
            cout << "  ";
        }
        for (triangle3 = 1; triangle3 <= var3; triangle3++){
            if (triangle3 == 1 || triangle3 == var3) {
                cout << "*";
            } else if (triangleH == rows) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
        //-----------------------------------------------------
    }
    return 0;
}