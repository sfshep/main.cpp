/*  Stewart Sheppard, COSC 1436-57002
    Text Editor: Repl.it / GitHub  
    This program allows my friend Joe to enter in the number of pennies before cashing them in at the bank.  By doing so, he can confirm that he receives the right number of bills and coins in return.
*/
#include <iostream>
using namespace std;

int main() 
{
//declare and initialize variables
int numPennies = 0;  
int numDollars = 0;
int numDollarRemainder = 0;
int numQuarters = 0; 
int numQuarterRemainder = 0;
// trying a combined format of declaring and initializing in one line
int numDimes = 0, numDimesRemainder = 0, numNickels = 0, numNickelsRemainder  = 0;

//Input
//Ask Joe to enter in the number of pennies
cout << "Joe, please enter in the number of pennies:  ";
cin >> numPennies;

//Process
numDollars = numPennies / 100;
numDollarRemainder = numPennies % 100;
numQuarters = numDollarRemainder / 25;
numQuarterRemainder = numDollarRemainder % 25;
numDimes = numQuarterRemainder / 10;
numDimesRemainder = numQuarterRemainder % 10;
numNickels = numDimesRemainder / 5;
numNickelsRemainder= numDimesRemainder % 5;


//Output
cout << "\n Dollars = " << numDollars << endl;
cout << "\n Quarters = " << numQuarters << endl;
cout << "\n Dimes = " << numDimes << endl;
cout << "\n Nickels = " << numNickels << endl;
cout << "\n Pennies = " << numNickelsRemainder << endl;

 
 
  return 0;
}