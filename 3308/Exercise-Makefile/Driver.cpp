//Student Driver
#include <iostream>
#include "Student.h"
using namespace std;
int main( )
{
     // create students (local variables)
     Student liz = Student( "Liz", "Boese", 21 );
     Student john = Student( "John", "Doe", 29 );
     cout << liz.getFirstName( ) << endl;
     cout << john.getFirstName( ) << endl;
     liz.setAge( 22 );
     cout << liz.getFirstName( ) << endl;
     cout << "Liz's age is " << liz.getAge( ) << endl;
     cout << liz.getFirstName( ) << endl;
}


