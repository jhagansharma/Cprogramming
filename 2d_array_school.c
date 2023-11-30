#include <stdio.h>

int main() {
    // Constants for the number of students and subjects
     int Students = 3;
     int Subjects = 3;
     
    // Declare arrays to store student information
    char names[Students][50];
    int rollNumbers[Students];
    double marks[Students][Subjects];

    // Input data for each student
    for (int i = 0; i < Students; i++) {
        printf("Enter the details for Student %d:\n", i + 1);

        // Input name and roll number
        printf("Name: ");
        scanf("%s",&names[i]);
        printf("Roll Number: ");
        scanf("%d", &rollNumbers[i]);

        // Input marks for each subject
        for (int j = 0; j < Subjects; j++) {
            printf("Enter marks for Subject %d: ", j + 1);
            scanf("%lf", &marks[i][j]);
        }
    }

    // Calculate and display percentages for each student
    printf("\n\nStudent Details and Percentages:\n");
    for (int i = 0; i < Students; i++) {
        double totalMarks = 0;
        for (int j = 0; j < Subjects; j++) {
            totalMarks += marks[i][j];
        }
        double percentage = (totalMarks / (Subjects * 100.0)) * 100.0;

        printf("Student %d\n", i + 1);
        printf("Name: %s\n", names[i]);
        printf("Roll Number: %d\n", rollNumbers[i]);
        printf("Percentage: %.2lf%%\n\n", percentage);
    }

    return 0;
}