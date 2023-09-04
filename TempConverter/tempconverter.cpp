// Accept user input for temperature mode
// accept user input for degrees
// convert temp to opposite temperature mode

# include <iostream>
using namespace std;

void ctof(float c)
{
    // converts Celsius to Fahrenheit
    float fahrenheit;
    fahrenheit = (c * (9/5)) + 32;
    cout << c << " degrees Celsius = " << fahrenheit << " degrees Fahrenheit" << endl;

}
void ftoc(float f)
{
    // converts Fahrenheit to Celsius
    float celsius;
    celsius = (f - 32) * (5/9);
    cout << f << " degrees Fahrenheit = " << celsius << " degrees Celsius" << endl;
}

int main()
{
    float f, c;
    int input;
    cout << "Choose a temperature mode: \n1) Fahrenheit \n2) Celsius \n0) Quit" << endl;
    cin >> input;
    if(input == 1)
    {
        cout << "You have selected Fahrenheit." << endl;
        cout << "Enter temperature: ";
        cin >> f;
        ftoc(f);
    }
    else if(input == 2)
    {
        cout << "You have selected Celsius." << endl;
        cout << "Enter temperature: ";
        cin >> c;
        ctof(c);
    }
    else if(input == 0)
    {
        cout << "You have selected \"Quit\", Goodbye." << endl;
    }
    else
    {
        cout << "Error. Incorrect information submitted. Please select 1 or 2 from the menu or 0 to quit." << endl;
    }
    return 0;
}