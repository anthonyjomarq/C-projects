#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool createFile(string filename);

int loadFile(string filename, string& code, string& cname, string& section, string students[]);

int main()
{
    string filename = "students.txt";
    if (createFile(filename))
    {
        string cname, code, section;
        string students[40];
        int count;

        count = loadFile(filename, code, cname, section, students);

        cout << "Loaded " << count << " records from file " << filename << endl;
        cout << "Code: " << code << endl;
        cout << "Name: " << cname << endl;
        cout << "Section: " << section << endl;
        cout << "No. of students: " << count << endl;
        for (int i = 0; i < count; i++)
            cout << "\t" << students[i] << endl;
    }
    return 0;
}

bool createFile(string filename)
{

    string code, name, section;
    string studentName;

    ofstream outfile(filename.c_str());
    if (!outfile.is_open())
    {
        cout << "could not create file " << filename << endl;
        return false;
    }

    cout << "Enter class code: ";
    cin >> code;
    cin.ignore();

    cout << "Enter class name: ";
    getline(cin, name);

    cout << "Enter section: ";
    cin >> section;


    int n;
    cout << "How many students? ";
    cin >> n;

    outfile << code << endl;
    outfile << name << endl;
    outfile << section << endl;
    outfile << n << endl;
    cin.ignore();

    for (int i = 1; i <= n; i++)
    {
        cout << "\tStudent name #" << i << ": ";
        getline(cin, studentName);
        outfile << studentName << endl;
    }

    outfile.close();
    cout << "Created class list in file " << filename << endl;
    cout << "---------------------" << endl;
    return true;
}

int loadFile(string filename, string& code, string& cname, string& section, string students[])
{
    ifstream infile(filename.c_str());
    if (!infile.is_open())
    {
        cout << "Could not open input file " << filename << endl;
        return 0;
    }

    infile >> code;
    infile.ignore();
    getline(infile, cname);
    infile >> section;

    int n;
    infile >> n;
    infile.ignore();

    for (int i = 0; i < n; i++)
        getline(infile, students[i]);

    return n;

}