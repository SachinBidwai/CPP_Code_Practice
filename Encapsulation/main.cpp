// Encapsulation
// Access private variables by using set and get method.


#include<iostream>
using namespace std;

class employee
{
    private:
		int salary;

    public: 
	    void setsalary(int s)
	    {
		    salary = s;
	    }

	    int getsalary()
	    {
		    return salary;
	    }

};

int main()
{
	employee e1;
	e1.setsalary(130000);
	cout << "Employee Salary is Rs. " << e1.getsalary() << endl;

	return 0;
}