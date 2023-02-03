#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Student
{
    int age;
    string first_name, last_name;
    int std;
};

int main()
{
    Student s;

    cin >> s.age;
    cin >> s.first_name;
    cin >> s.last_name;
    cin >> s.std;
    
    cout << s.age << " " << s.first_name << " " << s.last_name << " " << s.std;

    return 0;
}
