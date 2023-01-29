#include <iostream>

float askForHeight() {
    std::cout << "Enter the height of the tower in meters: ";
    float height{};
    std::cin >> height;
    return height;
}

float calculateDistanceFallen(float height, int seconds) {
    const double gravity{9.8};
    return height - (gravity * seconds * seconds / 2);
}

void printResolution(int seconds, float distanceFallen) {
    std::cout << "At " << seconds << " seconds";
    if (distanceFallen > 0) {
        std::cout << " the ball is at height: " << distanceFallen << " meters" << std::endl;
    } else {
        std::cout << " the ball is on the ground." << std::endl;
    }
}

void calculateAndPrint(float height, int seconds) {
    float distanceFallen{calculateDistanceFallen(height, seconds)};
    printResolution(seconds, distanceFallen);
}

int main() {
    float height{askForHeight()};
    calculateAndPrint(height, 0);
    calculateAndPrint(height, 0);
    calculateAndPrint(height, 0);
    calculateAndPrint(height, 0);
    calculateAndPrint(height, 0);
    return 0;
}