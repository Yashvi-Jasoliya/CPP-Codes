// Few summary points :-

// OOPs -  classes and objects

// C++ --> intially called --> C With classes by stroustroup
//  class --> extensions of structures (in C)
// structures had limitations...
//               -> members are public..
//               -> No methods..
// classes --> structures + more
// classes --> can have methods and properties..
// classes --> can make few members as private & few as public..
// structures in C++ are typedefed..
// you can declares objects along with the class declaration like this:
/* class Employee{
           class definition
           } yashvi, abc ;
*/
// abc.salary = 10 make no sense if salary is private..

// Nesting of members functions..

#include <iostream>
#include <string>
using namespace std;

class binary
{

private:
    string s;
    // void check_binary();

public:
    void read(void);
    void check_binary(void);
    void ones_complement(void);
    void Display(void);
};

void binary ::read(void)
{
    cout << "Enter a binary number:- " << endl;
    cin >> s;
}

void binary ::check_binary(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format..." << endl;
            exit(0);
        }
    }
}

void binary ::ones_complement(void)
{
    check_binary();
    
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }

        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::Display(void)
{
    cout << "Displaying your one's complement numbers:- \n";
    
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }

}
int main()
{

    binary b;
    b.read();
    // b.check_binary();
    b.ones_complement();
    b.Display();
    return 0;
}