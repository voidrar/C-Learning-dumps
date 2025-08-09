#include <iostream>
#include <limits>
#include <stdlib.h>
#include <fstream>
#include <string>

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
		 

		
		 std::ifstream ReadZDFILE("ZeroDayPassword.txt");
		 std::string ZDPText;
	
		 if (ReadZDFILE && std::getline(ReadZDFILE, ZDPText))
		 {
			 UserPassword1 = ZDPText;
		 }

		 std::cout << "{ " << ZDPText << " } Is OUR Password";
		 system("pause");
		 MainMenu();
	 }
	 else if (passoption == 2) 
	 {
		 std::cout << "Enter Your Password\n";
		 std::cin >> UserPassword1;
		 std::ofstream ZDFILE("ZeroDayPassword.txt");
		 ZDFILE << UserPassword1;
		 ZDFILE.close();
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



		 std::ifstream ReadZDFILE("ZeroDayPassword.txt");
		 std::string ZDPText;
		
		 if (ReadZDFILE && std::getline(ReadZDFILE, ZDPText))
		 {
			 std::getline(ReadZDFILE, ZDPText);
			 UserPassword2 = ZDPText;
		 }
		 std::cout << "{ " << ZDPText << " } Is OUR Password";



		 system("pause");
		 MainMenu();
	 }
	 else if (passoption == 2)
	 {
		 std::cout << "Enter Your Password\n";
		 std::cin >> UserPassword2;
		 std::ofstream ZDFILE("ZeroDayPassword.txt");
		 ZDFILE << UserPassword1 << '\n' << UserPassword2;
		 ZDFILE.close();
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



		 std::ifstream ReadZDFILE("ZeroDayPassword.txt");
		 std::string ZDPText;

		 if (ReadZDFILE && std::getline(ReadZDFILE, ZDPText))
		 {
			 std::getline(ReadZDFILE, ZDPText);
			 std::getline(ReadZDFILE, ZDPText);
			 UserPassword3 = ZDPText;
		 }
		 std::cout << "{ " << ZDPText << " } Is OUR Password";

		 system("pause");
		 MainMenu();
	 }
	 else if (passoption == 2)
	 {
		 std::cout << "Enter Your Password\n";
		 std::cin >> UserPassword3;
		 std::ofstream ZDFILE("ZeroDayPasswordsho.txt");
		 ZDFILE << UserPassword1 << '\n' << UserPassword2 << '\n' << UserPassword3;
		 ZDFILE.close();
		 MainMenu();
	 }
	 else
	 {
		 password3();
	 }
 }
