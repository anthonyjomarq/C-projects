// This program demonstrates the nested if statement. 
#include <iostream>
using namespace std;

int main()
{
    char employed,   // Currently employed, Y or N 
        recentGrad; // Recent graduate, Y or N 

       // Is the user employed and a recent graduate?
    cout << "Answer the following questions\n";
    cout << "with either Y for Yes or ";
    cout << "N for No.\n";
    cout << "Are you employed? ";
    cin >> employed;
    cout << "Have you graduated from college ";
    cout << "in the past two years? ";
    cin >> recentGrad;

    // Determine the user's loan qualifications.
    if (employed == 'Y')
    {
        if (recentGrad == 'Y') //Nested if
        {
            cout << "You qualify for the special ";
            cout << "interest rate.\n";
        } //end if
        else {
            cout << "Usted no cualifica para esa taza especial de interes\n";
        }//end else
    }//end if
    else {
        cout << "Deniega el prestamo\n";
    }//end else
    system("pause");
    return 0;
}
/*Answer the following questions
with either Y for Yes or N for No.
Are you employed? Y
Have you graduated from college in the past two years? N
Usted no cualifica para esa taza especial de interes
Press any key to continue . . .*/

/*Answer the following questions
with either Y for Yes or N for No.
Are you employed? Y
Have you graduated from college in the past two years? Y
You qualify for the special interest rate.
Press any key to continue . . .*/

/*Answer the following questions
with either Y for Yes or N for No.
Are you employed? N
Have you graduated from college in the past two years? Y
Deniega el prestamo
Press any key to continue . . .*/