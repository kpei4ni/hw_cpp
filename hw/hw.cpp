#include <iostream>
#include <Windows.h>
using namespace std;

#define R "\033[1;31m"
#define Y "\033[1;33m"
#define Q "\033[0m"

int main()
{
    SetConsoleOutputCP(1251);
    cout << "To be," << R << " or not " << Q << "to be : that is the question : \n\
Whether" << Y << "'tis nobler in the mind to suffer\n\
The slings and arrows of outrageous fortune,\n\
Or to take arms against a sea of troubles,\n\
And by opposing end them ?\n\
William Shakespeare" << Q << endl;


}