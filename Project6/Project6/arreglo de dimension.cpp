#include <iostream>
using namespace std;

int main()
{
    const int n = 5;
    int num[n] = { 5,7,2,3,9 };

    int max = num[0];
    for (int i = 1; i < n; i++){
        if (num[n] > max)
            max = num[n];
    }
    cout << "The highest number is: " << max << endl;
}
  