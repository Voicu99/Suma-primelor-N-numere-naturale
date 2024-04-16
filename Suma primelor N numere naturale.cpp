// Suma primelor N numere naturale.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main() {
    int N;
    int suma = 0;

    // Citim valoarea lui N de la utilizator
    std::cout << "Introduceti un numar natural N: ";
    std::cin >> N;

    // Calculăm suma primelor N numere naturale
    for (int i = 1; i <= N; ++i) {
        suma += i;
        // Dacă nu este ultimul număr, afișăm "+" pentru claritate
        if (i < N) {
            std::cout << i << " + ";
        }
        else {
            std::cout << i;
        }
    }

    // Afisăm rezultatul
    std::cout << " = " << suma << std::endl;

    return 0;
}