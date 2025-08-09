#include <iostream>
#include <limits>

int main()
{
	
	//Day 1 Program calculator
	std::cout << "Vital.Ware Calculator VGK Bypass\n\n";

	std::cout << "Please Enter Your First Number\n";
	float x, y;
	char m;

	std::cin >> x; // number 1 input
	std::cout << "What are we doing to these numbers? * + - / \n"; // calcuation
	std::cin >> m; //calculation input 
	std::cout << "Awesome now the second number please \n"; /
	std::cin >> y; // number 2 input 
  
	std::cout << "The Numbers you have entered are { " << x << " } and { " << y << " }. \n\n";
	if (m == '*')
	{
		std::cout << "The Result of your numbers are { " << x * y << " }. \n";

	}
	else if (m == '+')
	{
		std::cout << "The Result of your numbers are { " << x + y << " }. \n";
	}
	else if (m == '/' && y == 0)
	{
		std::cout << "your Value Will Be Invalid! \n Dividing by 0 isnt possible";
	}	else if (m == '/'){	std::cout << "The Result of your numbers are { " << x / y << " }. \n ";}
	
	else if (m == '-')
	{
		std::cout << "The Result of your numbers are { " << x - y << " }. \n";
	}

	else
	{
		
		std::cout << "you failed to enter a correct mathmatic \n\n";
		return main();
	}
	
	std::cin.ignore(std::numeric_limits < std::streamsize>::max(), '\n');
	std::cin.get();



// im sorry ember
}
	
