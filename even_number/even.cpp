#include<iostream>
#include "odd.h"

using namespace std;

void check_even(int num)
{
	if (num == 0)
	{
		cout << " Given number " << num << " is neither even nor odd." << endl;
	}
	else
	{
		if (num % 2 == 0)
		{
			cout << " Given number " << num << " is even." << endl;
		}
		else
		{
			check_odd(num);
		}		
	}
	

	/*
	else
	{
		if (num % 2 == 0)
		{
			cout << " Given number " << num << " is even." << endl;
		}
		else
		{
			cout << " Given number " << num << " is odd." << endl;
		}
	} */	
}