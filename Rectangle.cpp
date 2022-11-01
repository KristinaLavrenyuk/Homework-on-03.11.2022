
#include <iostream>
using namespace std;

int main()
{
    int lenght = 19, width = 10;

    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < lenght; j++)
        {
            if (i == 0 || i == width - 1 || j == 0 || j == lenght - 1) cout << "+";
            else cout << "*";
        }
        cout << endl;
    }
    system("pause");
}
