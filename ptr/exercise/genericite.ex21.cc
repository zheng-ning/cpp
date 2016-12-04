#include <iostream>
using namespace std;

/*

genericity

A simple little exercise to manipulate pointers as object selectors.

Then ask a number between 1 and 3 for the user (see exercise 2 series 5) and, depending on
Its choice, make pointer choice on value1, value2 or value3.

To finish display You have chosen and the chosen value using the choice pointer.
*/

int demander_nombre(int a, int b)
{
  /* échange les arguments s'ils n'ont pas été donnés dans *
   * le bon ordre.                                         */
  if (a > b) { int tmp(b); b=a; a=tmp; }

  int res;
  do {
    cout << "Entrez un nombre entier compris entre "
         << a << " et " << b <<" : ";
    cin >> res;
  } while ((res < a) or (res > b));

  return res;
}

int main () {
    /*
Create a new file named selector.cc.
In the main(), create three variables value1 value2 and value3, of double type that You initialize to values of your choice.

Declare a choice pointer, pointer to double
    
    */
    double valeur1(3.14159265358);
    double valeur2(1.42857142857);
    double valeur3(-12.344556667);
    double* choix(0);

    switch (demander_nombre(1,3)) {
        case 1: choix = &valeur1; break;
        case 2: choix = &valeur2; break;
        case 3: choix = &valeur3; break;
    }

    cout << "Vous avez choisi " << *choix << endl;

    return 0;
}
