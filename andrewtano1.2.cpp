#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;
    
    if(age > 15)
    {
        age++;
    }
    
    cout << "Your age is: " << age << endl;
    return 0;
}