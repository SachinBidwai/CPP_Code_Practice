// Time

#include <iostream>
#include <ctime>  // Import the ctime library
using namespace std;

int main() {
	// Get the timestamp for the current date and time
	time_t timestamp_1;
	time(&timestamp_1);

	// Display the date and time represented by the timestamp
	cout << ctime(&timestamp_1);


	// Alternate method

	struct tm datetime;
	time_t timestamp;

	datetime.tm_year = 2023 - 1900; // Number of years since 1900
	datetime.tm_mon = 12 - 1; // Number of months since January
	datetime.tm_mday = 17;
	datetime.tm_hour = 12;
	datetime.tm_min = 30;
	datetime.tm_sec = 1;
	// Daylight Savings must be specified
	// -1 uses the computer's timezone setting
	datetime.tm_isdst = -1;

	timestamp = mktime(&datetime);

	cout << ctime(&timestamp);

	return 0;
}

// Note: This example displays the server's local time, which may differ from your local time.
