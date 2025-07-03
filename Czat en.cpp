#include <iostream>
#include <string>

int main() {
	std::string name;
	std::string age;
	std::string food;
	std::string animal;
	
	std::cout << "Hello. What's your name?\n";
	getline(std::cin, name);
	std::cout << "Nice to meet you, " << name << "!\n";
	std::cout << "How old are you?\n";
	getline(std::cin, age);
	std::cout <<"Cool. You're so young :)\n";
	std::cout << "What is your favorite food?\n";
	getline(std::cin, food);
	std::cout << "Yummy! :)\n";
	std::cout << "Do you have any pets at home?\n";
	getline(std::cin, animal);
	if(animal == "yes" || animal == "Yes" || animal == "YES") {
		std::cout << "I like animals too :)\n";
	}
	else {
		std::cout << "All right. I respect that.\n";
	}
	std::cout << "\nLet's check what we know about you...\n\n";
	std::cout << "Your name is " << name;
	std::cout << "\nYou are " << age << " years old\n";
	std::cout <<"\nYour favorite food is " << food;
	if(animal == "yes" || animal == "Yes" || animal == "YES") {
		std::cout << "\n\nand you like animals as much as I do :)\n";
	}
	else {
		std::cout<< "\n\nAfter all, not everyone has to have a pet at home. True :)\n";
	}
	std::cin.ignore();
	return 0;
}
