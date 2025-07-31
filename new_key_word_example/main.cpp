#include <iostream>
# include <string>
using namespace std;

int main()
{
	int guest_count;

	cout << "Enter How many guest in the list : ";
	cin >> guest_count;

	if (guest_count <= 0)
	{
		cout << "\nGuest count at list One " << endl;
	}

	string* guest_name = new string[guest_count];

	for (int i = 0; i < guest_count; i++)
	{
		cout << "Enter Guest name : ";
		cin >> guest_name[i];
		cout << "\n";
	}


	// Show all guests
	cout << "\nGuests checked in:\n";
	for (int i = 0; i < guest_count; i++)
	{
		cout << "Guest No." << i+1 << " : " << guest_name[i] << endl;
	}

	delete[] guest_name;
	return 0;
}