// dz03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	/*int BEGIN = 1;
	int END = 5;
	int SUM = 0;
	int i = BEGIN;
	while (i <= END) {
		SUM += i;
		i++;
	}

	cout << "Result " << SUM << "\n\n";*/


	//int COUNT = 5; 
	//int i = 0; 
	//while (i <= COUNT) {
	//	cout << "*"; 
	//	i++; 
	//}
	//cout << "\n\n";



	//for (int count = 1; count <= 5; count++)
	//{
	//	cout << "The student squatted " << count <<
	//		" time\n";
	//}



	//int sum = 0;
	//for (int bom = 1; bom <= 12; bom++)
	//{
	//	sum += bom; 
	//}

	//cout << " Hours have punched " << sum
	//	<< " times.\n\n";

	/*int digit, sum = 0;
	for (;;) {
		cout << "Enter digit:";
		cin >> digit;
		if (digit == 0)
			break;
		sum += digit;
	}
	cout << "Sum of digits " << sum << "\n\n";*/

	//int digit;
	//cout << "Enter digit:";
	//cin >> digit;
	//
	//for (int i = 2; i < digit; i++) {
	//	if (digit % i != 0)continue;
	//	cout << i << " ";
	//}
	//cout << endl << endl;


	/*int amount = 0;
	for (int d = 1; d <= 4; d++)
	{

		int alltime = 0;
		int time = 0;
		cout << "How much time the first machine "
			"spends for " << d << " part\n";
		cin >> time;
		alltime += time;
		if (alltime > 120)
		{
			cout << "That part is defective. "
				"The time limit exceeded\n";
			continue;
		}
		cout << "How much time the second machine "
			"spends for " << d << " part\n";
		cin >> time;
		alltime += time;
		if (alltime > 120)
		{
			cout << "That part is defective. "
				"The time limit exceeded\n";
			continue;
		}
		amount++;
	}
	cout << "\nThe factory manufactured " << amount <<
		" parts\n\n";*/


		/*int N = 4;

		for (int i = 0;
			i < N; i++)
		{
			for (int j = 0;
				j < N; j++)
			{

				if (i == j)
					cout << " + ";
				else
					cout << " = ";
			}
			cout << endl;
		}
		cout << endl;
		int N = 4;

		for (int i = 0;
			i < N; i++)
		{
			for (int j = 0;
				j < N; j++)
			{
				if (i + j == N - 1)
					cout << " + ";
				else
					cout << " = ";
			}
			cout << endl;
		}
		cout << endl;*/


		//for (int i = 0; i < 10; i++)
		//{
		//	for (int j = 0; j < 10; j++)
		//	{
		//		if (i + j >= 9 && i >= j)
		//			cout << "|===|";
		//		else
		//			cout << " ";
		//	}
		//	cout << endl;
		//}
			//Початковий вклад у банку дорівнює 1000 грн.Через кожен місяць розмір вкладу збільшується на P відсотків від наявної суми(P - дійсне число, 0 < P < 25).За даним P визначити, через скільки місяців розмір вкладу перевищить 1100 грн., і вивести знайдену кількість місяців K(ціле число) і підсумковий розмір вкладу S(дійсне число).



	//int vklad = 1000, k = 0, s = 0;
	//float p = 0.0;
	//cout << "enter p" << endl; cin >> p;
	//p = p / 100.0;
	//s = vklad;
	//while (s < 1100)
	//{
	//	s += s * p;
	//	k++;
	//}
	//cout << "total vklad = " <<s<<endl<< "month = "<<k;

	//На валізі стоїть тризначний код.Він складається з цифр, які не повторюються.Напишіть програму, яка виведе всі можливі такі комбінації цифр.А також визначте скільки часу знадобиться для відкриття валізи в найгіршому випадку, якщо на один такий набір витрачається N секунд.
	//
int n = 10, time=0,counter=0;
cout << "Enter time for one hack -> " << endl; cin >> time;
for (int i = 0; i < n; i++) {
	for (int j = 0; j < n; j++) {
		for (int k = 0; k < n; k++) {
			if (i!=j&&i!=k&&j!=k){
				cout << i << j << k << " ";
				counter++;
			}
		}
	}
}
cout << "Time spent hacking = " << counter * time;


	/*	"Дивний чоловік".Якийсь чоловік вирушає на роботу, що розташована на відстані 1 км від дому.Дійшовши до місця роботи, він раптом згадує, що перед відходом забув поцілувати дружину, і повертає назад.Пройшовши півдороги, він змінює рішення, вважаючи, що правильніше повернутися на роботу.Пройшовши 1 / 3 км у напрямку до роботи, він раптом усвідомлює, що буде справжнім негідником, якщо так і не поцілує дружину.Цього разу, перш ніж змінити думку, він проходить 1 / 4 км.Так він продовжує метатися, і після N - етапу, пройшовши 1 / N км, знову змінює рішення.
	Визначити:
	a.на якій відстані від будинку перебуватиме чоловік після N - го етапу(якщо припустити, що таке можливо);
	b.який загальний шлях він при цьому пройде*/




//int n = 0, metr = 1000,s =0,distance =0;
//float delitel = 0.0;
//cout << "enter number of etaps ->" << endl; cin >> n;
//for (int i = 1; i < n+1; i++) {
//	delitel = 1.0 / i;
//	s += 1000 * delitel;
//	if (i % 2 == 1) {
//		distance += 1000 * delitel;
//
//	}
//	else {
//		distance-= 1000 * delitel;
//	}
//}
//cout << "total way = " << s << endl << "Distance to home = " << distance;





}


















