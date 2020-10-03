#include "std_lib_facilities.h"

int main ()

	{
		cout << "Please enter your first name: \n";
		string first_name;
		cin >> first_name;

		cout << "Hello, " << first_name << "!\n";
	

		cout << "Enter the name of the person you want to write to: \n";

		cin >> first_name;

		cout << "Dear, " << first_name << "!\n";

		cout << "How are you?\n";
		cout << "I am fine.\n";
		cout << "I miss you.\n";

		cout << "Enter another friend name: \n";

		string friend_name;
		cin >> friend_name;

		cout << "Have you seen " << friend_name << " lately?\n";


		char friend_sex = 0;


		cout << "Enter an m if the friend is male and an f if the friend is female: \n";

		cin >> friend_sex;

		if ( friend_sex == 'f')

		{
			cout << "If you see " << friend_name << " please ask her to call me.\n";
		}
		if (friend_sex == 'm')

		{
			cout << "if you see " << friend_name << " please ask him to call me.\n";
		}

		cout << "Enter your age: \n";
		int age = 0;
		cin >> age;
		cout << "I hear you just had a birthday and you are " << age << " years old.\n";

		if (age < 0 || age > 110) error("You are kidding!");

		if(age < 12)
		{
			cout << "Next year you will be " << age+1 << ".\n";
		}	

		if (age == 17)
		{
			cout << "Next year you will be able to vote.\n";
		}

		if (age > 70)
		{
			cout << "I hope you are enjoying retirement.\n";
		}

		cout << "Yours sincerely,\n";
		cout << "\n";
		cout << "\n";
		cout << "Farkas Krisztián\n";

		return 0;
	}
