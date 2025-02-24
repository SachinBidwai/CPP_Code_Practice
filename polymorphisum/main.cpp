// Polymorphisum : Polymorphism means "many forms", and it occurs when we have many classes that are related to each other by inheritance.
// Polymorphism uses those methods to perform different tasks. This allows us to perform a single action in different ways.
// Note : It is useful for code reusability: reuse attributes and methods of an existing class when you create a new class.

# include<iostream>
#include<string>
using namespace std;

class animal
{
    public:
		void animal_sound()
		{
			cout << "Animal makes a sound." << endl;
		}
};

class dog : public animal
{
    public:
		void animal_sound()
		{
			cout << "The Dog says : Bow Bow !" << endl;
		}
};

class pig : public animal
{
    public:
		void animal_sound()
		{
			cout << "The Pig sound is : Wee Wee ! " << endl;
		}
};

int main()
{
	animal animal_1;
	dog dog_1;
	pig pig_1;

	animal_1.animal_sound();
	pig_1.animal_sound();
	dog_1.animal_sound();


	return 0;
}
