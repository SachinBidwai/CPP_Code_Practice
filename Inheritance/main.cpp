// Inheritance


# include<iostream>
# include<string>
using namespace std;

class vehicle
{
    private:
		int price;

		void private_function()
		{
			cout << " You called private function of Base class." << endl;
		}

    public:
		string Brand = "Ford";

		void vehicle_info()
		{
			cout << " Welcome in Ford Vehicle World. " << endl;
		}

		void set_price(int p)
		{
			price = p;
		}

		int get_price()
		{
			return price;
		}

	   // friend class car;    // to accessbase class private function.
	   
	   // Best option is  Wrapper function to call base class wrapper function.
    protected:

		void call_private()   // Wrapper function
		{
			private_function();
		} 
};

class car : public vehicle
{
    public:
	
	    string Model = "Mustang";

	    void car_info()
	    {
		    cout << "Welcome in Ford Vehicle : \"Mustang Car\" World. " << endl;
	    }

		void access_private()
		{
			call_private();    
			// private_function();    // Unlock friend function call 
		}
};


class customer : public car    // Multi-level inheritance
{
    public: 
	    string customer_name = "Sachin";
};

class employee
{
    protected:
	    int bonus;

    public:
		string name = "Rahul";
		int salary = 80000;


		void employee_info()
		{
			cout <<" Employee name : " << name << " , "<< "Salary : " << salary << endl;
		}

		void set_bonus(int b)
		{
			bonus = b;
		} 

		void get_bonus()
		{
			cout << "Congratulations !  your Bonus is  " << bonus << " Rs." << endl;
			cout << "your Salary is  " << salary << " Rs." << endl;
			cout << "your total payment with bonus  is :   " << salary + bonus << " Rs." << endl;	
		}

    

};

class eligibility : public vehicle, public employee   // Multiple Inheritance.
{
    public:
		void criteria()
		{
			cout << "If your monthly salary is > 50,000 Rs. then you are eligible to car Purchase." << endl;
		}
	

};

int main()
{
	car c1;
	customer cust_1;
	eligibility e1;

	cout << "Vehicle Brand : "<< c1.Brand << endl;
	c1.vehicle_info();
	cout << "Car Model : " << c1.Model << endl;
	c1.car_info();
	c1.set_price(2000000);
	cout << "Ford Vehicle basic Model price start with Rs. " << c1.get_price()<< endl;
	c1.access_private();

	cout << "Multi - Level Inheritance :  " << endl;
	cout << " Hi " << cust_1.customer_name <<" , ";
	cust_1.vehicle_info();

	e1.vehicle_info();
	e1.employee_info();
	e1.criteria();

	e1.set_bonus(100000);
	e1.get_bonus();

	return 0;
}