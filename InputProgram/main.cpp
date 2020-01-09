//My push worked
//  main.cpp
//  SimpleInput
//
//  Created by Kevin Ahlstrom on 1/9/20.
//  Copyright © 2020 Kevin Ahlstrom. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, const char * argv[]) {
    //Pounds to kilo
    cout << "Enter a number in pounds to be converted to kilograms: ";
    float pounds;
    cin >> pounds;
    float kilos = 0.454 * pounds;
    cout << pounds << " pounds is equal to " << kilos << " kilos.\n\n\n";
    
    //Area of a hexagon
    cout << "Enter the length of the side of a hexagon: ";
    float side;
    cin >> side;
    float area = ((3 * sqrt(3))/2) * side * side;
    cout << "The area of a hexagon with that side length would be: " << area << "\n\n";
    
    //Larger number
    cout << "Enter a number: ";
    int num1;
    cin >> num1;
    cout << "Enter another number: ";
    int num2;
    cin >> num2;
    
    if(num1 > num2) {
        cout << num1 << " is larger than the second number\n\n";
    } else if (num2 > num1)
    {
        cout << num2 << " is greater than the first number\n\n";
    } else {
        cout << "The numbers are equal\n\n";
    }
    return 0;
}
