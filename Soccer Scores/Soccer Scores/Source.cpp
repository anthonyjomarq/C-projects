#include <iostream>
#include <iomanip>
using namespace::std;


struct Player
{
    char name[40];          
    int number;                     
    int points;                  
};

const int numPlayers = 12;    


void Info(Player&);
void showInfo(Player);
int  TotalPoints(Player[], int);
void showHighest(Player[], int);

int main()
{
    Player team[numPlayers];
    int count;

    cout << "Score card: " << endl;

    for (count = 0; count < 12; count++)
    {
        cout << "\nPLAYER #" << (count + 1) << "\n";
        cout << "---------\n";
        Info(team[count]);
        cin.get();
    }

    cout.width(20);
    cout.setf(ios::left);
    cout << "\nName";
    cout.width(10);
    cout << "Number";
    cout.width(10);
    cout << "Points scored\n";
    for (count = 0; count < 12; count++)
        showInfo(team[count]);
    cout << "TOTAL POINTS: " << TotalPoints(team, numPlayers) << endl;
    showHighest(team, numPlayers);
}

void Info(Player& p)
{
    cout << "Player's name: ";
    cin.getline(p.name, 40);
    cout << "Player's number: ";
    cin >> p.number;
    cout << "Points scored by player: ";
    cin >> p.points;
}

void showInfo(Player p)
{
    cout << setw(20) << p.name;
    cout << setw(10) << p.number;
    cout << setw(10) << p.points << endl;
}

int TotalPoints(Player p[], int size)
{
    int total = 0;
    for (int count = 0; count < size; count++)
        total += p[count].points;
    return total;
}

void showHighest(Player p[], int size)
{
    int highest = 0, highPoints = p[0].points;

    for (int count = 1; count < size; count++)
    {
        if (p[count].points > highPoints)
        {
            highest = count;
            highPoints = p[count].points;
        }
    }
    cout << "The player who scored the most points is: ";
    cout << p[highest].name << endl;
}
