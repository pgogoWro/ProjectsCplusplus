#include <iostream>

void addNumbersToTab(int tab[], int amountNumbers);
void showTab(int tab[], int amountNumbers);
void insertionSort(int tab[], int amountNumbers);

int* tab, amountNumbers;

int main()
{
    std::cout << "How many int numbers do You want to sort: " << std::endl;
    std::cin >> amountNumbers;
    tab = new int[amountNumbers];
    std::cout << "Which numbers do You want to sort (only int): " << std::endl;

    addNumbersToTab(tab, amountNumbers);
    std::cout << "Array before sorting:" << std::endl;
    showTab(tab, amountNumbers);
    insertionSort(tab, amountNumbers);
    std::cout << "Array after sorting:" << std::endl;
    showTab(tab, amountNumbers);
    delete tab;
    return 0;
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
void insertionSort(int tab[], int amountNumbers) {
    int tmp, i, j;
    for (i = amountNumbers - 2; i >= 0; i--) {
        tmp = tab[i];
        j = i + 1;
        while ((tmp > tab[j]) && (j < amountNumbers)) {
            tab[j - 1] = tab[j];
            j++;
        }
        tab[j - 1] = tmp;
    }
}