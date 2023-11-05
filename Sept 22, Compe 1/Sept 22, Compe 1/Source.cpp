#include <iostream>
using namespace::std;
int main()
{
    char input;
    cout << " Enter any character: ";
    cin.get(input);
    cout << "The character your entered is " << input << endl;
    if (isalpha(input))
        cout << "That's an alphabetic character. \n";
    if (isdigit(input))
        cout << "That's a numeric digit. \n";
    if (islower(input))
        cout << "The letter your entered is lowercase. \n";
    if (isupper(input))
        cout << "The letter your entered is uppercase. \n";
    if (isspace(input))
        cout << "That's a whitespace character. \n";
    return 0;

}
