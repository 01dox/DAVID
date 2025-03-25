#include <iostream>
#include <vector>
#include <string>

int main() {
    int N, X;
    std::vector<std::string> animals;
    std::string animal;

    // Get number of domestic animals
    std::cout << "Enter the number of domestic animals: ";
    std::cin >> N;
    std::cin.ignore();  // Ignore the newline character

    std::cout << "Enter the names of " << N << " domestic animals:\n";
    for (int i = 0; i < N; ++i) {
        std::getline(std::cin, animal);
        animals.push_back(animal);
    }

    // Get number of wild animals
    std::cout << "Enter the number of wild animals: ";
    std::cin >> X;
    std::cin.ignore();  // Ignore the newline character

    std::cout << "Enter the names of " << X << " wild animals:\n";
    for (int i = 0; i < X; ++i) {
        std::getline(std::cin, animal);
        animals.push_back(animal);
    }

    // Print all animals
    std::cout << "\nList of all animals (" << N + X << "):\n";
    for (const auto& a : animals) {
        std::cout << a << "\n";
    }

    return 0;
}
