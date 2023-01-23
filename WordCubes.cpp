#include <iostream>
#include <string>
#include <vector>
#include <random>

std::vector<std::string> words = { "word1", "word2", "word3", "word4", "word5" };
std::random_device rd;
std::mt19937 rng(rd());

void printCube(int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            for (int k = 0; k < size; k++) {
                std::cout << words[(i + j + k) % words.size()] << " ";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }
}

int main() {
    std::cout << "Enter the number of word cubes to generate: ";
    int numCubes;
    std::cin >> numCubes;

    std::cout << "Enter the size of each cube: ";
    int size;
    std::cin >> size;

    for (int i = 0; i < numCubes; i++) {
        std::cout << "Cube " << i + 1 << ": " << std::endl;
        printCube(size);
        std::cout << std::endl;
    }

    return 0;
}
