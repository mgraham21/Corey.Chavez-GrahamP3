// Corey.Chavez-GrahamP3.cpp : Bobby Corey & Mariah Chavez-Graham, bcorey3@cnm.edu & mgraham21@cnm.edu


#include <iostream>
#include <string>
#include <vector>

using namespace std;

string name;
float earthWeight, planetWeight, planetGravity, sunDistance, travelDistance, travelSpeed;

vector<string> planetNames{ "Mercury", "Venus", "Earth", "Mars", "Jupiter","Saturn", "Uranus", "Neptune" };
vector<int> distanceSun{ 36, 67, 93, 141, 483, 886, 1782, 2793 };
vector<float> surfaceGravity{ 0.27, 0.86, 1.00, 0.37, 2.64, 1.17, 0.92, 1.44 };

void newWeight()
{
//calculates planet weight = earth weight * planet gravity	
}

void travelTime()
{
	//calculates travel time = travel distance / travel speed
}

int main()
{
	cout << "Bobby Corey & Mariah Chavez-Graham, "; /*Need program name and description*/
	cout << "Welcome to INTERPLANETARY TRAVEL PROGRAM!\n";
    	cout << "This program enables you to find out your travel time to the planet you want to travel " <<
            	"to as well as your weight on there.\n";
    	cout << "Please enjoy the program and hope you'll find the perfect planet for you!\n\n";
    	cout << "INTERPLANETARY TRAVEL MENU\n" << setfill('-') << setw(28) << "\n\n";
    	cout << "a)\tMercury\n";
    	cout << "b)\tVenus\n";
    	cout << "c)\tEarth\n";
    	cout << "d)\tMars\n";
    	cout << "e)\tJupiter\n";
    	cout << "f)\tSaturn\n";
    	cout << "g)\tUranus\n";
    	cout << "h)\tNeptune\n";
   	cout << "q)\tQuit\n";
    	cout << "\nSelect a planet to travel to or q to quit the program: ";
    	cin >> ch;
	do
	{
   
	} while (true);
}

