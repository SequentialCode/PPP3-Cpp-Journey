/* Write a program to play a numbers guessing game. The user thinks of a number between 1 and 100 and your program asks questions to figure out what the number is (e.g., “Is the number 
 * you are thinking of less than 50?”). Your program should be able to identify the number after asking no more than seven questions.
*/

import std;

int main() {
    std::cout << "Think of a number between 1 and 100.\n";
    int low = 1, high = 100;
    int mid;
    char answer;

    // We use <= because the target could be the last number left
    while (low <= high) {
        mid = (low + high) / 2;

        std::cout << "Is your number " << mid << "? (y/n): ";
        std::cin >> answer;

        if (answer == 'y' || answer == 'Y') {
            std::cout << "\nFound it! Your number is " << mid << "!" << std::endl;
            return 0; // Exit early since we found it
        }

        std::cout << "Is it higher than " << mid << "? (y/n): ";
        std::cin >> answer;

        if (answer == 'y' || answer == 'Y') {
            low = mid + 1;  // Eliminate mid and everything below it
        }
        else {
            high = mid - 1; // Eliminate mid and everything above it
        }
    }
    return 0;
}