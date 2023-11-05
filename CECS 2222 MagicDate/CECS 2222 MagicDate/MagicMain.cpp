#include<iostream>
using namespace::std;
#include "MagicDate.h"
int main() {
    MagicDate myBirthday1(2, 10, 1920);
    cout << myBirthday1;
    MagicDate myBirthday2(2, 10, 1921);
    cout << myBirthday2;
    MagicDate myBirthday3;
    cin >> myBirthday3;
    cout << myBirthday3;
    
    system("pause");
    return 0;
}//end main
/*The 2/10/1920 is a magic date
 The 2/10/1921 is not magic date
Press any key to continue . . .*/