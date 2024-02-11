//Main.cpp
//Created By Christos Kyriakou at 11/02/2024.
//Lab-0

#include <iostream>
using namespace std;

const double PI = 3.14159265359;

//Proto
double sumTwoNumbers(double num1, double num2);
double areaOfCircle(double radius);
double circumferenceOfCircle(double radius);
double priceIncludingVAT(double price, int vat);

int main() {
    int choice;
    double num1, num2, radius, price;
    int vat;

    do {
        cout << "1) Sum two numbers\n"
             << "2) Calculate area of a circle\n"
             << "3) Calculate circumference of a circle\n"
             << "4) Calculate price with VAT\n"
             << "5) Exit\n"
             << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter First Nuumbers: ";
                cin >> num1 ;
                cout<<"Enter Second Number: ";
                cin >>num2;
                cout << "Sum: " << sumTwoNumbers(num1, num2) << endl;
                break;
            case 2:
                cout << "Enter radius of the circle: ";
                cin >> radius;
                cout << "Area of the circle: " << areaOfCircle(radius) << endl;
                break;
            case 3:
                cout << "Enter radius of the circle: ";
                cin >> radius;
                cout << "Circumference of the circle: " << circumferenceOfCircle(radius) << endl;
                break;
            case 4:
                cout << "Enter price: ";
                cin >> price;
                cout<<"Enter VAT Percentage: ";
                cin>>vat;
                cout << "Price with VAT: " << priceIncludingVAT(price, vat) << endl;
                break;
            case 5:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice! Please enter a number between 1 and 5.\n";
        }
    } while (choice != 5);

    return 0;
}

// Returns the sum of the two numbers
double sumTwoNumbers(double num1, double num2) {
    return num1 + num2;
}

// Returns the area of a circle given the radius
double areaOfCircle(double radius) {
    return PI * radius * radius;
}

// Returns the circumference of a circle given the radius
double circumferenceOfCircle(double radius) {
    return 2 * PI * radius;
}

// Returns the price including the VAT
double priceIncludingVAT(double price, int vat) {
    return price + (price * vat / 100.0);
}

