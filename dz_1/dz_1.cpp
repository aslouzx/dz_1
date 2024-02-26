// dz_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{

	/*cout << "\t\t\t\tEscape Sequences\n";

	cout << "\n";

	cout << "\t\t\\b" << "\tBackspace\n";

	cout << "\n";

	cout << "\t\t\\n" << "\tNew line\n";

	cout << "\n";

	cout << "\t\t\\t" << "\tHorizontal tab\n";

	cout << "\n";

	cout << "\t\t\\\\" << "\tBackslash \\\n";

	cout << "\n";

	cout << "\t\t\"" << "\tDouble quotation mark \"\n";

	cout << "\n";

	cout << "\t\t\'" << "\tSingle quotation mark \'\n";

	cout << "\n";
	*/







	/*cout << "Let's play!\n";
	int i;
	cin >> i;
	cout << "I have " << i + 1 << "\n";
	cout << "I'm winner!\n";
	return 0;*/


	/*	float digit;
		cout << "Enter a digit:";
		cin >> digit;
		int res = digit / 100;
		cout << res << " There are this many hundreds"
			"in your digit!!!\n\n"*/
			/*system("COLOR 9E");
			cout << "+-----[configuration]-----+" << endl;
			cout << "|                         |" << endl;
			cout << "| File transfer protocols |" << endl;
			cout << "| Serial port setup       |" << endl;
			cout << "| Modem and dialin        |" << endl;
			cout << "| Screen and keyboard     |" << endl;
			cout << "| Save setup as df        |" << endl;
			cout << "| Save setup as..         |" << endl;
			cout << "| Exit                    |" << endl;
			cout << "| Exit from Minicom       |" << endl;
			cout << "+-------------------------+" << endl;*/

			/*Є садова ділянка, що має форму прямокутника зі сторонами А метрів і В метрів.Складіть алгоритм і програму, яка визначить скільки дощок треба купити, щоб поставити суцільний паркан.Ширина однієї дошки K см.*/
			/*int a = 0; int b = 0; int k = 0;
			cout << "Enter a: "; cin >> a;
			cout << "Enter b: "; cin >> b;
			cout << "Enter k: "; cin >> k;
			int perimetr = 2 * a + 2 * b;
			float result = perimetr / (k/100.0f);
			cout << "Need " << result << " dosok";*/



			/*Бюджет сім'ї становить K гривень на місяць, а витрати на утримання житла становлять P% від бюджету. Скільки гривень на місяць витрачається на житло і скільки залишається на все інше? (бюджет сім'ї - вхідні дані, витрати на житло і витрати на життя - вихідні дані)*/
			//int p = 0; int balance = 0;
			//cout << "Enter percent: "; cin >> p;
			//cout << "Enter balance: "; cin >> balance;
			//float result = balance * (p / 100.0f);
			//cout << "Spend money on housing " << result << " And it remains "<< balance- result;





			/*Студент почав розв'язувати задачі цього уроку програмування, коли електронний годинник показував h1 годин і min1 хвилин, а закінчив, коли було h2 годин і min2 хвилин. Складіть програму, що дає змогу визначити, скільки часу студент розв'язував ці задачі. (Будемо вважати, що задачі розв'язувалися не довше ніж добу.)*/
	int h1 = 0; int m1 = 0; int h2 = 0; int m2 = 0;
	cout << "Enter h1: "; cin >> h1;
	cout << "Enter m1: "; cin >> m1;
	cout << "Enter h2: "; cin >> h2;
	cout << "Enter m2: "; cin >> m2;
	int time1 = h1 * 60 + m1;
	int time2 = h2 * 60 + m2;
	int result_h = (time2 - time1) / 60;
	int result_m = (time2 - time1) % 60;
	cout << result_h << " : " << result_m;









}



