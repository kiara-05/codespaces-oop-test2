/*
Without using classes, write a program to calculate the perimeter 
of shapes. The program must accept from user input the number of sides
the shape from the user and the length of each side, then calculate the 
perimeter, and display the result. 

Note: All sides are not necessarily same the length.
Note: All sides are integers.
 */

 #include <iostream>
#include <vector>

 using namespace std;

int main() {
    cout<<"Part 1"<<endl; //do not remove, edit, or change the placement of this line.
    int numSides, lenthSides, perimeter =0;
 
    cout << "Enter the number of sides the shpae has:" ;
    cin >> numSides;
   for (int i=1; i<= numSides; i++){
    cout << "Enter length:" ;
    cin >> lengthSides; 
    perimeter+=lengthSides;
    }

cout << "Perimeter: " << perimeter; 

    
    return 0;
 }
