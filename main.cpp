#include <iostream>

void drawTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            std::cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

int main() {
    int height;
    std::cout << "Enter the height of the triangle: ";
    std::cin >> height;

    if (height <= 0) {
        std::cout << "Invalid height entered. Please enter a positive integer." << std::endl;
        return 1;
    }

    drawTriangle(height);

    return 0;
}