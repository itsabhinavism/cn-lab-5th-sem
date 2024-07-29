#include <stdio.h>

struct student_info
{
    int roll_no;
    char name[50];
    float CGPA;
};

void displayByValue(struct student_info student)
{
    printf("Roll No: %d\n", student.roll_no);
    printf("Name: %s\n", student.name);
    printf("CGPA: %.2f\n", student.CGPA);
}

void modifyByAddress(struct student_info *student)
{

    student->roll_no = 101;
    strcpy(student->name, "John Doe");
    student->CGPA = 3.75;
}

int main()
{

    struct student_info student1 = {123, "Alice", 3.85};

    printf("Initial Student Information:\n");
    displayByValue(student1);

    modifyByAddress(&student1);

    printf("\nModified Student Information:\n");
    displayByValue(student1);

    return 0;
}
