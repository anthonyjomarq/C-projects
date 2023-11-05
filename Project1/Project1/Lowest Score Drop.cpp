/* 11.     Lowest Score Drop 
 
 Write a program that calculates the average of a group of test scores, where the lowest score in the group is dropped. It should use the following functions:    •    
 void getScore() 
  should ask the user for a test score, store it in a reference parameter variable, and validate it. This function should be called by  main  once for each of the five scores to be entered. 
   •    
 void calcAverage() 
  should calculate and display the average of the four highest scores. This function should be called just once by  main  and should be passed the five scores. 
   •    
 int findLowest() 
  should find and return the lowest of the five scores passed to it. It should be called by  calcAverage , which uses the function to determine which of the five scores to drop.     Input Validation: Do not accept test scores lower than 0 or higher than 100.    */
#include <iostream>   
#include <string>
using namespace::std;

int main() {
    int n, i, score1, score2, score3, score4, score5, lowestScore, sum = 0;
    string studentname;
    float average = 0.0;
    
    cout << "Entre la cantidad de estudiantes a calcular la nota: ";
    cin >> n;
    for (i = 1; i <= n; i++) {
        cout << "Entre el nombre del estudiante:";
        cin >> studentname;
        cout << "Entre las cinco notas:";
        cin >> score1 >> score2 >> score3 >> score4 >> score5;
        if (score1 < score2 && score1 < score3 && score1 < score4 && score1 < score5) {
            lowestScore = score1;
        }
        if (score2 < score1 && score2 < score3 && score2 < score4 && score2 < score5) {
            lowestScore = score2;
        }
        if (score3 < score1 && score3 < score2 && score3 < score4 && score3 < score5) {
            lowestScore = score3;
        }
        if (score4 < score1 && score4 < score2 && score4 < score3 && score4 < score5) {
            lowestScore = score4;
        }
        if (score5 < score1 && score5 < score2 && score5 < score3 && score5 < score4) {
            lowestScore = score5;
        }
        //Repite lo mismo para cada score
        sum = (score1 + score2 + score3 + score4 + score5) - lowestScore;
        average = sum / 4.0;
        cout << "Nombre:" << studentname << endl;
        cout << " El promedio es: " << average << endl;
    }
    system("pause");
    return 0;
}

   