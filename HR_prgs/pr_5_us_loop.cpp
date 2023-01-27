#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n1, n2;
    //    cin >> n;
    cin >> n1 >> n2;
    string alpha[15] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    for (int i = n1; i <= n2; i++)
    {

        if (i > 9)
        {

            if (i % 2 == 0)
            {
                cout << "even"
                     << "\n";
            }
            else
            {
                cout << "odd"
                     << "\n";
            }
        }
        else
        {
            cout << alpha[i] << '\n';
        }
    }

    return 0;
}
