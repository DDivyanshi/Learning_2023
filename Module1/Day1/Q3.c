#include <stdio.h>

typedef struct {
    int roll;
    char name[50];
    float physics;
    float maths;
    float chem;
} Student;

void printSummary(Student student) {
    float totalMarks = student.physics + student.maths + student.chem;
    float percentage = (totalMarks / 300) * 100;
    
    printf("Roll No: %d\n", student.roll);
    printf("Name: %s\n", student.name);
    printf("Physics Marks: %.2f\n", student.physics);
    printf("Math Marks: %.2f\n", student.maths);
    printf("Chemistry Marks: %.2f\n", student.chem);
    printf("Total Marks: %.2f\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);
}

int main() {
    Student student;
    
    printf("Enter Roll No: ");
    scanf("%d", &student.roll);
    
    printf("Enter Name: ");
    scanf(" %[^\n]s", student.name);
    
    printf("Enter Marks of Physics: ");
    scanf("%f", &student.physics);
    
    printf("Enter Marks of Math: ");
    scanf("%f", &student.maths);
    
    printf("Enter Marks of Chemistry: ");
    scanf("%f", &student.chem);
    
    printf("\n");
    printSummary(student);
    
    return 0;
}

