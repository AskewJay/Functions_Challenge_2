#include <iostream>

using namespace std;

// Function prototypes
void inputGrades(double& g1, double& g2, double& g3);
double calculateAverage(const double g1, const double g2, const double g3);
char getLetterGrade(const double average);

int main() {
    double grade1 = 0, grade2 = 0, grade3 = 0;
    int choice;

    do {
        cout << "\n--- Student Grade Manager ---\n";
        cout << "1. Input Grades\n";
        cout << "2. Calculate and Display Average\n";
        cout << "3. Assign and Display Letter Grade\n";
        cout << "4. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        // Basic menu validation
        if (choice < 1 || choice > 4) {
            cout << "Invalid choice. Try again.\n";
            continue;
        }

        switch (choice) {
            case 1:
                inputGrades(grade1, grade2, grade3);
                break;

            case 2:
                cout << "Average: "
                     << calculateAverage(grade1, grade2, grade3)
                     << endl;
                break;

            case 3: {
                double avg = calculateAverage(grade1, grade2, grade3);
                cout << "Letter Grade: " << getLetterGrade(avg) << endl;
                break;
            }

            case 4:
                cout << "Goodbye!\n";
                break;
        }

    } while (choice != 4);

    return 0;
}

// Input grades using pass-by-reference
void inputGrades(double& g1, double& g2, double& g3) {
    cout << "Enter grade 1: ";
    cin >> g1;

    cout << "Enter grade 2: ";
    cin >> g2;

    cout << "Enter grade 3: ";
    cin >> g3;
}

// Calculate the average
double calculateAverage(const double g1, const double g2, const double g3) {
    return (g1 + g2 + g3) / 3;
}

// Determine letter grade
char getLetterGrade(const double average) {
    if (average >= 90)
        return 'A';
    else if (average >= 80)
        return 'B';
    else if (average >= 70)
        return 'C';
    else if (average >= 60)
        return 'D';
    else
        return 'F';
}