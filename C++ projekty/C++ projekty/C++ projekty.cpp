#include <iostream>
#include <string>

using namespace std;

int main()
{
	using namespace std;

	double zm1, zm2;

	cout << "         ------------------------------------" << endl;
	cout << "         |            Calculator            |" << endl;
	cout << "         |   Maked by Smietankowy Sos#1337  |" << endl;
	cout << "         |   Thanks for my Discord Comm!    |" << endl;
	cout << "         ------------------------------------" << endl;

	cout << " --- Good alternative for normal Windows 10 Calculator  --- " << endl;
	cout << " --- Discord - https://discord.gg/DRQVxB4BdX - Discord  --- " << endl;
	cout << " --- Thanks for using my Calculator written in modern C++ --- " << endl;
	cout << "----------------------------------------------------------- " << endl;

    restartprogram:

	cout << "Enter first number:" << endl;

	cin >> zm1;

	cout << "Enter second number:" << endl;

	cin >> zm2;

	char char1;

	cout << " --- What do you want to make with this numbers? --- " << endl;
	cout << " --- + - Addition ---" << endl;
		cout << " --- - - Subtraction ---" << endl;
		cout << " --- * - Multiplication ---" << endl;
		cout << " --- / - Division ---" << endl;
		cout << "Enter one of this characters:" << endl;

		cin >> char1;

		
		switch (char1)
		{


		case '+':
			cout << zm1 << " + " << zm2 << " = " << (zm1 + zm2) << endl;
			break;
		case '-':
			cout << zm1 << " - " << zm2 << " = " << (zm1 - zm2) << endl;
			break;
		case '*':
			cout << zm1 << " * " << zm2 << " = " << (zm1 * zm2) << endl;
			break;
		case '/':
			if (zm2 != 0)
				cout << zm1 << " / " << zm2 << " = " << (zm1 / zm2) << endl;

			else
				cout << "Do not divine by zero!!!" << endl;
			break;


			


			
			 




		}

		
		string char2;

		cout << "Do you want to continue program? (Y/N)" << endl;

			cin >> char2;

			if (char2 == "y" || char2 == "Y")
				goto restartprogram;
			else (char2 == "n" || char2 == "N");
				system("pause");
				
				
		






	system("pause");





}




