#include <stdio.h>
#include <string.h>

// Structure definition
struct Student {
    char name[50];
    float marks;
};

// Function to calculate average using dot operator
float calculateAverageUsingDot(struct Student students[], int n) {
    float sum = 0;
    for(int i = 0; i < n; i++) {
        sum += students[i].marks;
    }
    return sum / n;
}

// Function to calculate average using arrow operator
float calculateAverageUsingArrow(struct Student *students, int n) {
    float sum = 0;
    for(int i = 0; i < n; i++) {
        sum += (students + i)->marks;
    }
    return sum / n;
}

int main() {
    struct Student students[3];
    
    // Using dot operator to assign values
    strcpy(students[0].name, "Alice");
    students[0].marks = 85.5;
    
    strcpy(students[1].name, "Bob");
    students[1].marks = 92.0;
    
    strcpy(students[2].name, "Charlie");
    students[2].marks = 78.5;
    
    // Using dot operator
    printf("\nUsing dot operator:\n");
    for(int i = 0; i < 3; i++) {
        printf("Student %d: Name = %s, Marks = %.2f\n", 
               i+1, students[i].name, students[i].marks);
    }
    printf("Class average (dot operator): %.2f\n", 
           calculateAverageUsingDot(students, 3));
    
    // Using arrow operator
    printf("\nUsing arrow operator:\n");
    struct Student *ptr = students;
    for(int i = 0; i < 3; i++) {
        printf("Student %d: Name = %s, Marks = %.2f\n", 
               i+1, (ptr + i)->name, (ptr + i)->marks);
    }
    printf("Class average (arrow operator): %.2f\n", 
           calculateAverageUsingArrow(ptr, 3));
    
    return 0;
}