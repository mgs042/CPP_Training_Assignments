#include<iostream>
using namespace std;

enum genre {
	Action = 1,
	Comedy,
	Thriller,
	Mystery,
	SciFi
};

enum language {
	English=1,
	Hindi,
	Malayalam,
	Telugu,
	Tamil,
	Kannada
};

int main()
{
	int inputGenre;
	int inputLanguage;


	cout << "\t\tLanguage Menu" << endl;
	cout << "\t\t~~~~" << endl;
	cout << "1. English" << endl;
	cout << "2. Hindi" << endl;
	cout << "3. Malayalam" << endl;
	cout << "4. Telugu" << endl;
	cout << "5. Tamil" << endl;
	cout << "6. Kannada" << endl;

	cout << "Enter the Language: ";
	cin >> inputLanguage;

	switch (inputLanguage)
	{
		default:
			cout << "No Language selected";
			break;
		case English:
			cout << "Chosen Language is English" << endl;
			cout << "\n\n\t\tGenre Menu" << endl;
			cout << "\t\t~~~~~~~~~~" << endl;
			cout << "1. Action" << endl;
			cout << "2. Comedy" << endl;
			cout << "3. Thriller" << endl;
			cout << "4. Mystery" << endl;
			cout << "5. SciFi" << endl;

			cout << "Enter the Genre: ";
			cin >> inputGenre;
			switch (inputGenre)
			{
				default:
					cout << "No Genre selected";
					break;
				case Action:
					cout << "Chosen Genre is Action";
					break;
				case Comedy:
					cout << "Chosen Genre is Comedy";
					break;
				case Thriller:
					cout << "Chosen Genre is Thriller";
					break;
				case Mystery:
					cout << "Chosen Genre is Mystery";
					break;
				case SciFi:
					cout << "Chosen Genre is SciFi";
					break;
			}
			break;
		case Hindi:
			cout << "Chosen Language is Hindi" << endl;
			cout << "\n\n\t\tGenre Menu" << endl;
			cout << "\t\t~~~~~~~~~~" << endl;
			cout << "1. Action" << endl;
			cout << "2. Comedy" << endl;
			cout << "3. Thriller" << endl;
			cout << "4. Mystery" << endl;
			cout << "5. SciFi" << endl;

			cout << "Enter the Genre: ";
			cin >> inputGenre;
			switch (inputGenre)
			{
				default:
					cout << "No Genre selected";
					break;
				case Action:
					cout << "Chosen Genre is Action";
					break;
				case Comedy:
					cout << "Chosen Genre is Comedy";
					break;
				case Thriller:
					cout << "Chosen Genre is Thriller";
					break;
				case Mystery:
					cout << "Chosen Genre is Mystery";
					break;
				case SciFi:
					cout << "Chosen Genre is SciFi";
					break;
			}
			break;
		case Malayalam:
			cout << "Chosen Language is Malayalam" << endl;
			cout << "\n\n\t\tGenre Menu" << endl;
			cout << "\t\t~~~~~~~~~~" << endl;
			cout << "1. Action" << endl;
			cout << "2. Comedy" << endl;
			cout << "3. Thriller" << endl;
			cout << "4. Mystery" << endl;
			cout << "5. SciFi" << endl;

			cout << "Enter the Genre: ";
			cin >> inputGenre;
			switch (inputGenre)
			{
				default:
					cout << "No Genre selected";
					break;
				case Action:
					cout << "Chosen Genre is Action";
					break;
				case Comedy:
					cout << "Chosen Genre is Comedy";
					break;
				case Thriller:
					cout << "Chosen Genre is Thriller";
					break;
				case Mystery:
					cout << "Chosen Genre is Mystery";
					break;
				case SciFi:
					cout << "Chosen Genre is SciFi";
					break;
			}
			break;
		case Telugu:
			cout << "Chosen Language is Telugu" << endl;
			cout << "\n\n\t\tGenre Menu" << endl;
			cout << "\t\t~~~~~~~~~~" << endl;
			cout << "1. Action" << endl;
			cout << "2. Comedy" << endl;
			cout << "3. Thriller" << endl;
			cout << "4. Mystery" << endl;
			cout << "5. SciFi" << endl;

			cout << "Enter the Genre: ";
			cin >> inputGenre;
			switch (inputGenre)
			{
				default:
					cout << "No Genre selected";
					break;
				case Action:
					cout << "Chosen Genre is Action";
					break;
				case Comedy:
					cout << "Chosen Genre is Comedy";
					break;
				case Thriller:
					cout << "Chosen Genre is Thriller";
					break;
				case Mystery:
					cout << "Chosen Genre is Mystery";
					break;
				case SciFi:
					cout << "Chosen Genre is SciFi";
					break;
			}
			break;
		case Tamil:
			cout << "Chosen Language is Tamil" << endl;
			cout << "\n\n\t\tGenre Menu" << endl;
			cout << "\t\t~~~~~~~~~~" << endl;
			cout << "1. Action" << endl;
			cout << "2. Comedy" << endl;
			cout << "3. Thriller" << endl;
			cout << "4. Mystery" << endl;
			cout << "5. SciFi" << endl;

			cout << "Enter the Genre: ";
			cin >> inputGenre;
			switch (inputGenre)
			{
				default:
					cout << "No Genre selected";
					break;
				case Action:
					cout << "Chosen Genre is Action";
					break;
				case Comedy:
					cout << "Chosen Genre is Comedy";
					break;
				case Thriller:
					cout << "Chosen Genre is Thriller";
					break;
				case Mystery:
					cout << "Chosen Genre is Mystery";
					break;
				case SciFi:
					cout << "Chosen Genre is SciFi";
					break;
			}
			break;
		case Kannada:
			cout << "Chosen Language is Kannada" << endl;
			cout << "\n\n\t\tGenre Menu" << endl;
			cout << "\t\t~~~~~~~~~~" << endl;
			cout << "1. Action" << endl;
			cout << "2. Comedy" << endl;
			cout << "3. Thriller" << endl;
			cout << "4. Mystery" << endl;
			cout << "5. SciFi" << endl;

			cout << "Enter the Genre: ";
			cin >> inputGenre;
			switch (inputGenre)
			{
				default:
					cout << "No Genre selected";
					break;
				case Action:
					cout << "Chosen Genre is Action";
					break;
				case Comedy:
					cout << "Chosen Genre is Comedy";
					break;
				case Thriller:
					cout << "Chosen Genre is Thriller";
					break;
				case Mystery:
					cout << "Chosen Genre is Mystery";
					break;
				case SciFi:
					cout << "Chosen Genre is SciFi";
					break;
			}
			break;
	}

}