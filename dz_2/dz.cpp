// dz_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{// Ласкаво просимо. Три випробування честі.
// Лихий маг викрав принцесу і її доля у твоїх
// руках. Він пропонує тобі пройти 3 випробування
// честі в його лабіринті.
//cout << "Welcome. Three Tests of Honor."
//	"A beautiful princess was spirited off by"
//	"a wicked magician,\n\n";
//cout << "\nand her fate is in your hands now."
//	"He proposed you\n";
//cout << "\nto pass Three Tests of Honor in his "
//	"maze.\n";
//bool goldTaken, diamondsTaken, killByDragon;
//// Ти входиш у першу кімнату, тут дуже багато
//// золота.
//cout << "You enter the first room with lots of gold "
//	"scattered all over the place.\n\n";
//// Ти візьмеш його?
//cout << "Will you take it?(1-yes, 0-no)\n\n";
//cin >> goldTaken;
//if (goldTaken) // якщо візьмеш,
//{
//	// золото залишається тобі, але ти провалив
//	// випробування. ГРУ ЗАКІНЧЕНО!!!
//	cout << "The gold is yours, but you have "
//		"failed the test. GAME OVER\n\n";
//}
//else // якщо ні,
//{
//	// Вітаю! Ти пройшов перше випробування честі!
//	cout << "Congratulations! You have passed "
//		"the First Test of Honor!\n\n";
//	// Ти переходиш до наступної кімнати.
//	// Вона сповнена діамантів
//	cout << "You enter the next room. "
//		"It is full of diamonds \n\n";
//	// Ти візьмеш діаманти?
//	cout << "Will you take the diamonds? "
//		"(1-yes,0-no)\n\n";
//	cin >> diamondsTaken;
//	if (diamondsTaken)// якщо візьмеш
//	{
//		// Діаманти залишаються тобі,
//		// але ти провалив друге випробування
//		cout << "The diamonds are yours, but you "
//			"have failed the Second Test \n\n";
//		// ГРУ ЗАКІНЧЕНО!!!
//		cout << "GAME OVER\n\n";
//	}
//	else // якщо ні
//	{
//		// Вітаю, ти пройшов друге випробування
//		// честі!!!
//		cout << "Congratulations! You have passed "
//			"the Second Test of Honor!\n\n";
//		// Ти входиш у третю кімнату.
//		cout << "You enter the third room. \n\n";
//		// На селянина напав дракон!
//		// Рухатися далі,
//		cout << "A peasant is attacked by "
//			"a dragon! Move along \n\n";
//		// не звертаючи на них уваги
//		cout << "and ignore them "
//			"(1-yes,0-no)?\n\n";
//		cin >> killByDragon;
//		if (killByDragon)// якщо так
//		{
//			// Ти намагаєшся прослизнути повз,
//			// але дракон
//			cout << "You try to sneak past them, "
//				"but the dragon \n\n";
//			// помічає тебе.
//			cout << "notices you\n\n";
//			// Він перетворює тебе на попіл.
//			// Ти мертвий!!!
//			cout << "It burns you to ashes. "
//				"You died!\n\n";
//			// ГРУ ЗАКІНЧЕНО!!!
//			cout << "GAME OVER\n\n";
//		}
//		else// якщо ні
//		{
//			// Вітаю, ти з честю пройшов усі
//			// випробування!!!
//			cout << "Congratulations! You have passed"
//				"all Tests of Honor! "
//				"\n\n";

//			// Принцеса дістається тобі!!!
//			cout << "You get the princess!\n\n";
//		}
//	}
//}
//
//// Оголошення перерахувань для команд і напрямку
//enum command { forward, right, left = -1 };
//enum direction { north = 1, west, south, east };
//// Оголошення змінних для прийнятої команди
//// і початкового напрямку робота
//int Command, Direction;
//cout << "Enter the starting direction of "
//	"the robot" << endl;
//cout << "\t 1- North\n"
//	<< "\t 2- West\n"
//	<< "\t 3- South\n"
//	<< "\t 4- East\n";
//cin >> Direction;
//cout << "Select action :" << endl;
//cout << "\t 0- forward\n"
//	<< "\t 1- turn right\n"
//	<< "\t -1- turn left\n";
//cin >> Command;
//switch (Direction)
//	// визначаємо початковий напрямок робота
//{
//case north: // якщо робот спочатку дивився
//	// на північ,
//	switch (Command)
//		// визначаємо подальшу поведінку робота
//	{
//	case forward:
//		cout << "The robot is looking "
//			"notrh\n";
//		break;
//	case right:
//		cout << "The robot is looking "
//			"east\n";
//		break;
//	case left:
//		cout << "The robot is looking "
//			"west\n";
//		break;
//	}
//	break;
//case west: // якщо робот спочатку дивився
//	// на захід,
//	switch (Command)
//		// визначаємо подальшу поведінку робота
//	{
//	case forward:
//		cout << "The robot is looking "
//			"west\n";
//		break;
//	case right:
//		cout << "The robot is looking "
//			"north\n";
//		break;
//	case left:
//		cout << "The robot is looking "
//			"south\n";
//		break;
//	}
//	break;
//case south: // якщо робот спочатку дивився на південь,
//	switch (Command)
//		// визначаємо подальшу поведінку робота
//	{
//	case forward:
//		cout << "The robot is looking south\n";
//		break;
//	case right:
//		cout << "The robot is looking west\n";
//		break;
//	case left:
//		cout << "The robot is looking east\n";
//		break;
//	}
//	break;
//case east: // якщо робот спочатку дивився
//	// на схід,
//	switch (Command)
//		// визначаємо подальшу поведінку робота
//	{
//	case forward:
//		cout << "The robot is looking east\n";
//		break;
//	case right:
//		cout << "The robot is looking south\n";
//		break;
//	case left:
//		cout << "The robot is looking north\n";
//		break;
//	}
//	break;
//default:
//	cout << "not found" << endl;
//}
//	

//	Послуги телефонної мережі оплачуються за таким правилом : за розмови до А хвилин на місяць - В грн., а розмови понад установлену норму оплачуються з розрахунку С грн.за хвилину.Написати програму, що обчислює плату за користування телефоном для введеного часу розмов за місяць.
// 
// 
//int min_a = 0; float price = 0.5; int limit1 = 100;
//cout << "enter minuts->"; cin >> min_a;
//cout << "enter price->0.0 "; cin >> price;
//if (min_a > limit1) {
//	float result = min_a * (price * 2);
//	cout << "you need pay " << result << " money";
//
//}
//else {
//	float result = min_a * price;
//	cout << "you need pay " << result << " money";
//
//
//}





//
//⦁	Розрахувати надбавку до зарплати за стаж :
//a.якщо стаж від 2 до 5 років, надбавка становить 2 %,
//b.якщо стаж від 5 до 10 років - 5 % .
//c.якщо стаж понад 10 років - 7 % .
//Ввести з клавіатури зарплату і стаж.Вивести надбавку і суму до виплати.

	/*int exp = 0; int salary = 0;
	cout << "enter exp->"; cin >> exp;
	cout << "enter salary->"; cin >> salary;


	if (exp > 2 && exp < 5) {
		float add = 0.02;
		float result = salary * add;
		cout << "Surcharge = " << result << endl;
		cout << "Total salary = " << result + salary;
	}
	else if (exp > 5 && exp < 10) {
		float add = 0.05;
		float result = salary * add;
		cout << "Surcharge = " << result << endl;
		cout << "Total salary = " << result + salary;
	}
	else if (exp > 10) {
		float add = 0.07;
		float result = salary * add;
		cout << "Surcharge = " << result << endl;
		cout << "Total salary = " << result + salary;
	}*/


	//⦁	Замовити квитки на фільм, обравши зал і сеанс.Ввести кількість квитків і визначити їхню вартість з урахуванням, якщо замовляється більше п'яти квитків - знижка 5%, більше 10 квитків - 10%.
	//Передбачити обробку помилок введення.
	int ticket = 0; int Session = 0; int hall = 0; int price = 0;
	cout << "enter number of Hall" << endl <<
		"1 - Red hall" << endl << "2 - Blue hall" << endl << "3 - Light blue "<<endl;
	cin >> hall;
	switch (hall)
	{
	case 1:
		cout << "Choose Seans (12 - 25 uah, 16 - 35 uah, 20 - 45 uah) "<<endl;
		cin >> Session;
		if (Session == 12) {
			price = 25;
		}
		else if (Session == 16) {
			price = 35;
		}
		else if (Session == 20) {
			price = 45;
		}
		break;
	case 2:
		cout << "Choose Seans (10 - 25 uah, 13 - 35 uah, 16 - 35 uah)";
		cin >> Session;
		if (Session == 10) {
			price = 25;
		}
		else if (Session == 13) {
			price = 35;
		}
		else if (Session == 16) {
			price = 35;
		}
		break;
	case 3:
		cout << "Choose Seans (10 - 35 uah, 14 - 45 uah, 18 - 45 uah)";
		cin >> Session;
		if (Session == 10) {
			price = 35;
		}
		else if (Session == 14) {
			price = 45;
		}
		else if (Session == 18) {
			price = 45;
		}
		break;
	default:
		cout << "Incorrect data";
		break;
	}
	cout << "Enter number of tickets->"; cin >> ticket;

	float priceModificator = 1;

	if (ticket >= 10) {
		priceModificator = 0.9;
	}
	else if (ticket >= 5) {
		priceModificator = 0.95;
	}
	float result = ticket * priceModificator * price;
	cout << "Total price: " << result;



















}

