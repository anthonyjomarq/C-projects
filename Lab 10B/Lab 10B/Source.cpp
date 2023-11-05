/*Original string is : this is a secret!

Encypted string is : uijt!jt!b!tfdsfu"

Decrypted string is : this is a secret!*/

//Encoding program

//Pre-_____? 

//other necessary stuff here
#include <iostream>
using namespace std;

void encrypt(char e[]);
void decrypt(char* ePtr);

int main(){

    //create a string to encrypt using a char array
    char string[100] = "this is a secret!";

    cout << "Original string is: " << string << endl;

    encrypt(string);

    cout << "Encrypted string is: " << string << endl;

    decrypt(string);

    cout << "Decrypted string is: " << string << endl;

    return 0;

}

void encrypt(char e[])

{
    //Write implementation function encrypt
    int i = 0;
    while (e[i] != '\0')
    {
        e[i] = (char)(((int)e[i] + 1) % 128);
        i = i + 1;
    }

}
void decrypt(char* ePtr)

{
    //Write implementation function decrypt
    while (*ePtr != '\0')
    {
        *ePtr = (char)(((int)*ePtr + 127) % 128);
        ePtr++;
    }

}

