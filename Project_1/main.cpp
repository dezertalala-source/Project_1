#include <iostream> //для консоли походу
#include <windows.h> //для ру языка пока что

#include <string> // для строк


int main() {
	SetConsoleOutputCP(CP_UTF8); //принт на ру
	SetConsoleCP(CP_UTF8); //инпут ру

	//std::cout //консоль принт
	//	<< "артем\n\tесть\n\t\tпо приколу\n\t" << 0 << "\nнечего\n\n";

	//int name;
	//std::cout << "как зовут: ";
	//std::cin >> name;
	//std::cout << "\n" << name;


	//std::string name;

	//std::cout << "как зовут: ";
	//std::cin >> name;

	//if (name == "эдик") {
	//	std::cout << "\nне ври";
	//}
	//else {
	//	std::cout << "\nврешь";
	//}





	//int x;
	// 
	//double dollar = 85.7 * 0.95;
	//double euro = 99.8 * 0.95;
	//double farit = 27.66 * 0.95;
	//double uan = 12.79 * 0.95;

	//std::cout << "1. долаар\n2. евро\n3. фарит\n 4. Юань\nвведите номер: ";
	//std::cin >> x;

	//if (x == 1) {
	//	std::cout << "\nкурс бакса -> " << dollar << " рублей";
	//	{
	//		int x;
	//		std::cout << "\nукажите чесло ваших рублей: ";
	//		std::cin >> x;
	//		std::cout << "\n" << x / dollar << " баксов";
	//	}
	//}
	//else if (x == 2) {
	//	std::cout << "\nкурс евро -> " << euro << " рублей";
	//	{
	//		int x;
	//		std::cout << "\nукажите чесло ваших рублей: ";
	//		std::cin >> x;
	//		std::cout << "\n" << x / euro << " баксов";
	//	}
	//}
	//else if (x == 3) {
	//	std::cout << "\nкурс фарита -> " << farit << " рублей";
	//	{
	//		int x;
	//		std::cout << "\nукажите чесло ваших рублей: ";
	//		std::cin >> x;
	//		std::cout << "\n" << x / farit << " фаритов";
	//	}
	//}
	//else if (x == 4) {
	//	std::cout << "\nкурс юаня -> " << uan << " рублей";
	//	{
	//		int x;
	//		std::cout << "\nукажите чесло ваших рублей: ";
	//		std::cin >> x;
	//		std::cout << "\n" << x / uan << " юаней";
	//	}
	//}
	//else {
	//	std::cout << "/nгуляй вася";
	//}





















	srand(time(NULL));

	//

	//

	//int choice;
	//int choice_1;

	//int hp = 0;
	//int number = 0;
	//int randNamber = 0;
	//int maxHp = 25;
	//int maxHardHp = 25;

	//while (true) {
	//	std::system("cls");

	//	std::cout << "\n\t\tУгадайка";
	//	std::cout << "\n1. Играть\n2. Настройки\n3. выход\n\n[INPUT] Введи свой варинат действия от 1-3: ";
	//	std::cin >> choice;
	//	




	//	if (choice == 1) {
	//		while (true) {
	//			std::system("cls");
	//			std::cout << "\nВыберите уровень сложности: \n1. Легкий\n2. сложный\n3. выход\n\n[INPUT] Введи свой варинат действия от 1-3: ";
	//			std::cin >> choice_1;

	//			if (choice_1 == 1) {
	//				randNamber = rand() % 500 + 1;
	//				hp = maxHp;

	//				while (true) {
	//					std::system("cls");
	//					std::cout << "\nУ вас осталось хп: " << hp <<"\nВведите чесло от 1-500: ";
	//					std::cin >> number;

	//					if (number == randNamber) {
	//						std::system("cls");
	//						std::cout << "Вы угодали чесло -> " << number << "\nОсталось ХП: " << hp;
	//						Sleep(1500);
	//						break;
	//					}
	//					else if (number < 1 || number > 500) {
	//						std::cout << "Вы не угодали чесло -> Неверный диапозон 1-500\nОсталось ХП: " << hp;
	//						Sleep(1500);
	//					}
	//					else {
	//						hp--;
	//						
	//						if (hp <= 0) {
	//							std::cout << "\nВы проиграли загаданое чесло было ->" << randNamber;
	//							Sleep(1500);
	//							break; 
	//						}

	//						std::cout << "\nВы не угодали чесло\nОсталось ХП: " << hp;
	//						std::cout << "\nВзять подсказку за -1 жизнь\n1. да\nлюбое другое чесло. нет\nВведите вариант ответа: ";
	//						std::cin >> choice;
	//						if (choice == 1) {
	//							hp--;

	//							if (hp <= 0) {
	//								std::cout << "\nВы проиграли загаданое чесло было ->" << randNamber;
	//								Sleep(1500);
	//								break;
	//							}

	//							if (number < randNamber) {
	//								std::cout << "оно меньше полседнего введенного вами чесла " << number;
	//							}
	//							else{
	//								std::cout << "оно больше полседнего введенного вами чесла " << number;
	//							}

	//						}
	//						else {
	//							std::cout << "\nвы откозались от подсказки";
	//						}

	//						Sleep(1500);
	//					}
	//				}

	//			}
	//			else if (choice_1 == 2) {
	//				randNamber = rand() % 5000 + 1;
	//				hp = maxHardHp;

	//				while (true) {
	//					std::system("cls");
	//					std::cout << "\nУ вас осталось хп: " << hp << "\nВведите чесло от 1-5000: ";
	//					std::cin >> number;

	//					if (number == randNamber) {
	//						std::system("cls");
	//						std::cout << "Вы угодали чесло -> " << number << "\nОсталось ХП: " << hp;
	//						Sleep(1500);
	//						break;
	//					}
	//					else if (number < 1 || number > 5000) {
	//						std::cout << "Вы не угодали чесло -> Неверный диапозон 1-5000\nОсталось ХП: " << hp;
	//						Sleep(1500);
	//					}
	//					else {
	//						hp--;

	//						if (hp <= 0) {
	//							std::cout << "\nВы проиграли загаданое чесло было ->" << randNamber;
	//							Sleep(1500);
	//							break;
	//						}

	//						std::cout << "\nВы не угодали чесло\nОсталось ХП: " << hp;
	//						std::cout << "\nВзять подсказку за -1 жизнь\n1. да\nлюбое другое чесло. нет\nВведите вариант ответа: ";
	//						std::cin >> choice;
	//						if (choice == 1) {
	//							hp--;

	//							if (hp <= 0) {
	//								std::cout << "\nВы проиграли загаданое чесло было ->" << randNamber;
	//								Sleep(1500);
	//								break;
	//							}

	//							if (number < randNamber) {
	//								std::cout << "оно меньше полседнего введенного вами чесла " << number;
	//							}
	//							else {
	//								std::cout << "оно больше полседнего введенного вами чесла " << number;
	//							}

	//						}
	//						else {
	//							std::cout << "\nвы откозались от подсказки";
	//						}

	//						Sleep(1500);
	//					}
	//				}
	//			}

	//			else if (choice_1 == 3) {
	//				std::system("cls");
	//				std::cout << "\n\n[INFO] вы вышли в главное меню";
	//				Sleep(1500);
	//				break;
	//			}

	//			else {
	//				std::cout << "\n\n[ERROR] Неверный ввод веддите чесло 1-3!";
	//				Sleep(1500);
	//			}
	//		}

	//	}


	//	else if (choice == 2) {

	//	}

	//	else if (choice == 3) {
	//		std::system("cls");
	//		std::cout << "\n\n[INFO] вы вышли из игры";
	//		break;
	//	}

	//	else {
	//		std::cout << "\n\n[ERROR] Неверный ввод веддите чесло 1-3!";
	//		Sleep(1500);
	//	}
	//}












	//int arr[4]{};

	//for (int i = 0; i <= 3; i++) {
	//	std::cout << "\nВведите элемент номер " << i << ": ";
	//	std::cin >> arr[i];
	//}

	//for (int i = 0; i <= 3; i++) {
	//	std::cout << arr[i] << " ";
	//}


	
	//int arr[10]{};
	//for (int i = 0; i < 10; i++) {
	//	arr[i] = (rand() % 21) - 10;

	//}


	//int sum1 = 0;
	//int sum2 = 0;

	//for (int i = 0; i < 10; i++) {
	//	std::cout << arr[i] << " ";
	//	if (arr[i] > 0) {
	//		sum2 += arr[i];
	//	}
	//	else {
	//		sum1 += arr[i];
	//	}
	//}
	//std::cout << "\nсумма положительных: " << sum2 << "\nСумма отрицательных: " << sum1 << "\nСреднее арифметическое: " << (sum1 + sum2) / 10;






	

	
	return 0;
}





/*

char txt = 'n'; одна буква и чсила (20)
int num1 = 3; чесло 
float num2 = 5.3f;
double num3 = 3.5;
bool x = true; 0 - false | ..-1..1.. - true
std::string n = "дада"

*/