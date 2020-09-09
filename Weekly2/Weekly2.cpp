#include <iostream>
#include <conio.h>

void PrevMenu()
{
	std::cout << "\nPress a key to return previous menu: ";
	char something = _getch();
}

void Task1()
{
	int choice{ 0 };

	do 
	{
		system("CLS");
		std::cout << "Task 1 - Subtasks:\n";
		std::cout << "1 - Numbers from 1 to 100 using a while loop\n";
		std::cout << "2 - Numbers from 1 to 100 using a for loop\n";
		std::cout << "3 - Return to Main Menu\n";
		std::cin >> choice;
		switch (choice)
		{
		case 1: 
			{int input = 1;
			while (input <= 100)
			{
				std::cout << "\n" << input;
				input++;
			}
			std::cout << "\n";
			PrevMenu();
		}
			break;

		case 2:
			{for (int i = 1; i <= 100; i++)
				{
			 		std::cout << i << std::endl;
				}
			PrevMenu();

			}
			break;

		case 3:
			PrevMenu();
			break;

		default:
			std::cout << "Bad choice, try again!";
			char something = _getch();
			Task1();
		}
	} while (choice >= 1 && choice <= 2);
	return;
}

void Task2()
{
	system("CLS");

	for (int i = 100; i >= 1; i--)
	{
		std::cout << i << std::endl;
	}
	PrevMenu();

}

void Task3()
{
	system("CLS");
	std::cout << "TBA\n";
	PrevMenu();
}

void Task4()
{
	system("CLS");
	int input = 5;

	while (input <= 50)
	{
		std::cout << "\n" << input;
		input+=5;
	}
	std::cout << "\n";
	PrevMenu();
}

void Task5()
{
	system("CLS");
	for (int i = 5; i < 50; i+=5)
	{
		std::cout << i << "\n";
	}
	PrevMenu();
}

void Task6()
{
	system("CLS");
	std::cout << "TBA";
	PrevMenu();
}

void Task7()
{
	system("CLS");
	char grade;
	std::cout << "What grade do you want in programming?\n";
	std::cout << "Choose from A to F\n\n";
	std::cin >> grade;

	if (grade=='A' || grade=='a')
	{
		std::cout << "\nOutstanding\n";
		PrevMenu();
	}
	else if (grade == 'B' || grade == 'b')
	{
		std::cout << "\nVery good\n";
		PrevMenu();
	}
	else if (grade == 'C' || grade == 'c')
	{
		std::cout << "\nGood\n";
		PrevMenu();
	}
	else if (grade == 'D' || grade == 'd')
	{
		std::cout << "\nSome flaws\n";
		PrevMenu();
	}
	else if (grade == 'E' || grade == 'e')
	{
		std::cout << "\nNot very good\n";
		PrevMenu();
	}
	else if (grade == 'F' || grade == 'f')
	{
		std::cout << "\nFail\n";
		PrevMenu();
	}
	else
	{
		std::cout << "\nWrong input. Please retry.";
		char something = _getch();
		Task7();
	}
	
}

void Task8()
{
	system("CLS");
	char grade;
	std::cout << "What grade do you want in programming?\n";
	std::cout << "Choose from A to F\n\n";
	std::cin >> grade;

	switch (grade)
	{
	case 'A': case 'a':
	
		std::cout << "\nOutstanding\n";
		PrevMenu();
		break;
	
	case 'B': case 'b':
		
			std::cout << "\nVery good\n";
			PrevMenu();
			break;

	case 'C': case 'c':
		
			std::cout << "\nGood\n";
			PrevMenu();
			break;

	case 'D': case 'd':
		
			std::cout << "\nSome flaws\n";
			PrevMenu();
			break;

	case 'E': case 'e':
		
			std::cout << "\nNot very good\n";
			PrevMenu();
			break;

	case 'F': case 'f':
		
			std::cout << "\nFail\n";
			PrevMenu();
			break;

	default:
			std::cout << "\nWrong input. Please retry.";
			char something = _getch();
			Task7();
	}

}

int main()
{
int choice{ 0 };

	do
	{
		system("CLS");
		std::cout << "Weekly 2 - Mathias Eek\n";
		std::cout << "\nTask 1 - 1 to 100\n";
		std::cout << "Task 2 - 100 to 1\n";
		std::cout << "Task 3 - TBA\n";
		std::cout << "Task 4 - 5 to 50 in steps of 5 using a while loop\n";
		std::cout << "Task 5 - 5 to 50 in steps of 5 using a for loop\n";
		std::cout << "Task 6 - TBA\n";
		std::cout << "Task 7 - What grade do you want in programming?\n";
		std::cout << "Task 8 - Improvment of Task 7 (switch)\n";

		std::cout << "\nChoose a task number: ";
		std::cin >> choice;

		switch (choice)
		{
		case 1:
			Task1();
			break;
		case 2:
			Task2();
			break;

		case 3:
			Task3();
			break;

		case 4:
			Task4();
			break;

		case 5:
			Task5();
			break;

		case 6:
			Task6();
			break;

		case 7:
			Task7();
			break;

		case 8:
			Task8();
			break;

		default: std::cout << "Bad choice, try again!";
			break;
		}
	} while (choice >= 1 || choice <= 8);
	return 0;

}
