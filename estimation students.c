#include <iostream.h>
#include <conio.h>
void main ( )
{
 float mark ;
 char grade ;
 L: cout << "Enter a mark : " ;
 cin >> mark ;
 if (mark > 100 || mark < 0)
 cout << "rong mark .. try again " ;
 else if (mark >= 90)
 grade = 'A' ;
 else if (mark >= 80)
 grade = 'B' ;
 else if (mark >= 70)
 grade = 'C' ;
 else if (mark >= 60)
 grade = 'D' ;
 else
 grade = 'F' ;
 cout << grade << endl ;
goto L;
getch ();
}
