#include <iostream>

void bubbleSort(int tab[], int amountNumbers);
void addNumbersToTab(int tab[], int amountNumbers);
void showTab(int tab[], int amountNumbers);

int *tab, amountNumbers;

int main(){

	std::cout << "How many int numbers do You want to sort: " << std::endl;
	std::cin >> amountNumbers;
	tab = new int[amountNumbers];
	std::cout << "Which numbers do You want to sort (only int): " << std::endl;
	
	addNumbersToTab(tab, amountNumbers);
	std::cout << "Array before sorting:" << std::endl;
	showTab(tab, amountNumbers);
	bubbleSort(tab, amountNumbers);
	std::cout << "Array after sorting:" << std::endl;
	showTab(tab, amountNumbers);
	
	delete tab;
	return 0;
}

void bubbleSort(int tab[], int amountNumbers) {
	int temp;
	for (int i = 0; i < amountNumbers; ++i) {
		for (int j = 0; j < amountNumbers - 1; ++j) {
			if (tab[j] > tab[j + 1]) {
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
		}
	}
}
void addNumbersToTab(int tab[], int amountNumbers) {
	for (int i = 0; i < amountNumbers; i++) {
		std::cin >> tab[i];
	}
}
void showTab(int tab[], int amountNumbers) {
	for (int i = 0; i < amountNumbers; ++i) {
		std::cout << " | " << tab[i];
	}
	std::cout << " | " << std::endl;
}
