#include <iostream>
using namespace std;
float taxCalculator(char type, float price);
main()
{
    float price;
    char type;
    float finalPrice;
    cout << "Enter type of vehicle i.e is M,E,S,V,T:";
    cin >> type;
    cout << "Enter price of vehicle:";
    cin >> price;
    finalPrice = taxCalculator(type,price);
    cout << "The final price of vehicle on type " << type << " after adding tax is: $" << finalPrice << endl;
}
float taxCalculator(char type, float price)
{
    float taxAmount;
    float finalPrice;
    float taxRate;
    if (type == 'M')
    {
        taxRate = 6;
        taxAmount = (price * taxRate) / 100;
        finalPrice = price + taxAmount;
    }
     if (type == 'E')
    {
        taxRate = 8;
        taxAmount = (price * taxRate) / 100;
        finalPrice = price + taxAmount;
    }
    if (type == 'S')
    {
        taxRate = 10;
        taxAmount = (price * taxRate) / 100;
        finalPrice = price + taxAmount;
    }
    if (type == 'V')
    {
        taxRate = 12;
        taxAmount = (price * taxRate) / 100;
        finalPrice = price + taxAmount;
    }
    if (type == 'T')
    {
        taxRate = 15;
        taxAmount = (price * taxRate) / 100;
        finalPrice = price + taxAmount;
    }
    return finalPrice;
}

