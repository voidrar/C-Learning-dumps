#include <iostream>
#include <limits>
#include <stdlib.h>
//Day 2 Project Password Saver
void MainMenu();
void password1();
void password2();
void password3();
std::string UserPassword1;
std::string UserPassword2;
std::string UserPassword3;

int main()
{
	MainMenu();
}
 static void MainMenu()
{
	 system("cls");
	 std::cout << "ZeroDay Password/User Storage\n" << "Not A Rat\n\n\n";
	 std::cout << "which password would u like for YOU & ME to see ";
	 std::cout << "1: 2: 3:\n";
	 int UserPassword{};
	 std::cin >> UserPassword;

	 if (UserPassword == 1) {
		 password1();
	 }
	 else if (UserPassword == 2) {
		 password2();
	 }
	 else if (UserPassword == 3) {
		 password3();
	 }
	 else {
		 MainMenu();
	 }
}

 // password domains
 static void password1()
 {
	 system("cls");
	 int passoption{};
	 std::cout << "Are You Setting Your Password or Viewing??\n 1 = Viewing \n 2 = Setting\n";
	 std::cin >> passoption;
	 if (passoption == 1) 
	 {
		 std::cout << "{ " << UserPassword1 << " } Is OUR Password";
		 system("pause");
		 MainMenu();
	 }
	 else if (passoption == 2) 
	 {
		 std::cout << "Enter Your Password\n";
		 std::cin >> UserPassword1;
		 MainMenu();
	 }
	 else
	 {
		 password1();
	 }

 }

 static void password2()
 {
	 system("cls");
	 int passoption{};
	 std::cout << "Are You Setting Your Password or Viewing??\n 1 = Viewing \n 2 = Setting\n";
	 std::cin >> passoption;
	 if (passoption == 1)
	 {
		 std::cout << "{ " << UserPassword2 << " } Is OUR Password";
		

		 system("pause");
		 MainMenu();
	 }
	 else if (passoption == 2)
	 {
		 std::cout << "Enter Your Password\n";
		 std::cin >> UserPassword2;
		 MainMenu();
	 }
	 else
	 {
		 password2();
	 }

 }

 static void password3()
 {

	 system("cls");
	 int passoption{};
	 std::cout << "Are You Setting Your Password or Viewing??\n 1 = Viewing \n 2 = Setting\n";
	 std::cin >> passoption;
	 if (passoption == 1)
	 {
		 std::cout << "{ " << UserPassword3 << " } Is OUR Password";
		 system("pause");
		 MainMenu();
	 }
	 else if (passoption == 2)
	 {
		 std::cout << "Enter Your Password\n";
		 std::cin >> UserPassword3;

		 MainMenu();
	 }
	 else
	 {
		 password3();
	 }
 }
