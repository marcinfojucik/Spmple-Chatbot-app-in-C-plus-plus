#include <iostream>
#include <string>

int main() {
	std::string imie;
	std::string wiek;
	std::string jedzenie;
	std::string zwierzaki;
	
	std::cout << "Czesc. Jak sie nazywasz?\n";
	getline(std::cin, imie);
	std::cout << "Milo mi cie poznac, " << imie << "!\n";
	std::cout << "Ile masz lat?\n";
	getline(std::cin, wiek);
	std::cout << "Fajnie...Jestes taki mlody :)\n";
	std::cout << "Twoje ulubione danie?\n";
	getline(std::cin, jedzenie);
	std::cout << "Pychota! :)\n";
	std::cout << "Czy masz w domu jakies zwierze?\n";
	getline(std::cin, zwierzaki);
	if(zwierzaki == "tak" || zwierzaki == "Tak" || zwierzaki == "TAK") {
		std::cout << "Ja tez lubie zwierzeta! :)\n";
	}
	else {
		std::cout << "W porzadku.Szanuje.\n";
	}
	std::cout << "\nSprawdzmy co o tobie wiemy...\n\n";
	std::cout << "Twoje imie to " << imie;  
	std::cout << "\nMasz lat " << wiek;
	std::cout << "\nTwoje ulubione jedzenie to " << jedzenie;
	if(zwierzaki == "tak" || zwierzaki == "Tak" || zwierzaki == "TAK") {
		std::cout << "\n\ni lubisz zwierzaki tak jak ja :)\n";
	}
	else {
		std::cout << "\n\nW koncu nie kazdy musi miec zwierzaka w domu. Prawda :)\n";
	}
	std::cin.ignore();
	return 0;
}
