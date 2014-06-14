#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){

	string Name, BoysName, GirlsName, BoysYear, GirlsYear;
	ifstream bFile;
	int r = 0;
	int t = 0;
	int rank;

	bFile.open("Babynamerankings2013.txt"); //"c:\\Desktop\\Babynamerankings2013.txt"
	if (bFile.fail())
	{
		cout << "Can't open Babynamerankings2013.txt" << endl;
	}

	cout << "Enter name: ";  //only for the year 2013
	cin >> Name;
	while (bFile >> rank)
	{
		bFile >> BoysName;
		bFile >> GirlsName;

		if (Name == BoysName)
		{
			cout << Name << " is ranked #" << rank << " among boys." << endl;
		}
		else if (Name == GirlsName)
		{
			cout << Name << " is ranked #" << rank << " among girls." << endl;
		}
	}
}