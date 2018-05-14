// Joseph Fergen
// CSCE 1030.002
// 1/30/2018
// This program is used to calculate the mechanical energy of a moving object
#include <iostream>
using namespace std;

int main ()
{

	cout << "Name: Joseph Fergen " << endl; //This is just the neccesary basic info for me
	cout << "EUID: jpf0095 " << endl;
	cout << "Email Address: JosephFergen@my.unt.edu " << endl;
	cout << "Department name and Course Number: CSCE 1030.002 " << endl;

	cout << "-----------------------------------------------------" << endl << endl;
	
	float const GRAV = 9.8; // Constant value for gravity
	float const MTOFEET = 3.28; // Constant value for converting meters to feet
	float intVel; // Initial velocity
	float finVel; // Final velocity
	float vertDrop; // The vertical drop

	cout << "Enter the initial velocity at the top of the hill: (in m/s)" << endl;
	cin >> intVel; // User input for initial velocity

	cout << "Enter the final velocity at the bottom of the hill: (in m/s)" << endl;
	cin >> finVel; // User input for final velocity

	vertDrop = (((finVel * finVel) / 2) - ((intVel * intVel) / 2)) / GRAV; // Calculating the initial height of the rollerocaster

	cout << "The relative vertical drop is " << vertDrop << " meters, and " 
	<< vertDrop * MTOFEET << " feet. " << endl; // Outputting of the vertical drop (height) in meters and feet
	return 0;
}
