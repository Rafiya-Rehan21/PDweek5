#include <iostream>
using namespace std;
float  pyramidVolume(string unit, float length, float width, float height);
main()
{
    float length;
    float width;
    float height;
    float volume;
    string unit;
    cout << "Enter length of pyramid:";
    cin >> length;
    cout << "Enter width of pyramid:";
    cin >> width;
    cout << "Enter height of pyramid:";
    cin >> height;
    cout << "Enter required units i.e is centimeters, millimeters or kilometers:";
    cin >> unit;
    volume = pyramidVolume(unit, length, width, height);
    cout << "Volume of pyramid in required units is:"<< volume << endl;

}
float pyramidVolume(string unit, float length, float width, float height)
{  
    float vol;
    float volume;
    int cm;
    int kmMm; 
    vol = (length * width * height) / 3;
    cm = 100 * 100 * 100;
    kmMm = 1000 * 1000 * 1000;
    if (unit == "centimeters")
    {
        volume = vol * cm;
    }
    if (unit == "millimeters")
    {
        volume = vol * kmMm;
    }
    if (unit == "kilometers")
    {
        volume = vol / kmMm;
    }
    return volume;

}
