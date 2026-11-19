#include <iostream>
using namespace std;

int main() {
    int score;
    char grade;

    // Get input from the user
    cout << "Enter your score (0-100): ";
    cin >> score;

    // Determine grade using switch case
    switch (score / 10)
{ 
        case 10: // Fallthrough
        case 9:
            grade = 'A';
            break;
        case 8:
            grade = 'B';
            break;
        case 7:
            grade = 'C';
            break;
        case 6:
            grade = 'D';
            break;
        default:
            grade = 'F';
            break;
    }

    // Output the grade
    cout << "Your grade is: " << grade << endl;

    return 0;
}
