/*Math Tutor
This is a modification of Programming Challenge 17 from  Chapter   3.Write a program that can be used as a math tutor for a young student.The program should display two random numbers that are to be added, such as : 247 + 129
The program should wait for the student to enter the answer.If the answer is correct, a message of congratulations should be printed.If the answer is incorrect, a message should be printed showing the correct answer. */
#include <iostream>   
#include <cstdlib>   // For rand and srand   
#include <ctime>     // For the time function   
using namespace std;
int main()
{
    int num1, num2, answer, sum;
    const int MIN_VALUE = 1;  // Minimum die value 1
    const int MAX_VALUE = 9;  // Maximum die value
    char again;


    //Get the system time.
    unsigned seed = time(0);
    // Seed the random number generator 
    srand(seed);
    do {
        num1 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
        num2 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
        cout << "Cuanto es " << num1 << "+" << num2 << "? ";
        cin >> answer;
        sum = num1 + num2;
        if (answer == sum) {
            cout << "Felicidades, la respuesta es la correcta!\n";
        }
        else {
            cout << "Lo sentimos, su respuesta es " << answer << " pero la respuesta correcta es:" << sum << endl;
        }
        cout << "Desea jugar de nuevo? (Y/N)";
        cin >> again;
    } while (again == 'Y' || again == 'y');
        
    /*for (int i = 1; i <= 5; i++) {
        //x = rand();
   
        cout << x << endl;*/
    return 0;
}