#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::boolalpha;
int main()
{
    int opcion;
    bool flag = false;
    // menu principal 
    do
    {
        system("clear");
        cout << "\t\tMENU PRINCIPAL" << endl;
        cout << "1.) Opcion # 1" << endl;
        cout << "2.) Opcion # 2" << endl;
        cout << "3.) Opcion # 3" << endl;
        cout << "4.) Salida" << endl;
        cout << "Entre su oprcion : ";
        cin >> opcion;
        switch (opcion)
        {
        case 1:
            if (flag == false)
            {
                system("clear");
                cout << "Estas en la opcion # 1" << endl;
                cout << "Oprima Enter para continuar" << endl;
                cout << "Please type enter to continue";
                cin.get();
                cin.get();
                flag = true;
            }
            else
            {
                system("clear");
                cout << "entre nuevamente los datos" << endl;
                flag = false;
                cout << "Please type enter to continue";
                cin.get();
                cin.get();
            }
            break;

        case 2:
            if (flag == true)
            {
                system("clear");
                cout << "Estas en la opcion # 2" << endl;
                cout << "Oprima Enter para continuar" << endl;
                cout << "Please type enter to continue";
                cin.get();
                cin.get();
            }
            else
            {
                system("clear");
                cout << "******* Error ******" << endl;
                cout << "Favor de ir a opcion #1 primero y luego continue" << endl;
                //system("Pause");
                cout << "Please type enter to continue";
                cin.get();
                cin.get();
            }
            break;

        case 3:
            if (flag == true)
            {
                system("clear");
                cout << "Estas en la opcion # 3" << endl;
                cout << "Oprima Enter para continuar" << endl;
                //system("pause");
                cout << "Please type enter to continue";
                cin.get();
                cin.get();
            }
            else
            {
                system("clear");
                cout << "******* Error ******" << endl;
                cout << "Favor de ir a opcion #1 primero y luego continue" << endl;
                //system("Pause");

            }
        }
    } while (flag == false);
    return 0;
}
     
        