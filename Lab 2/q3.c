#include <stdio.h>

// Define the student_info structure
struct student_info {
    int roll_no;
    char name[50];
    float CGPA;
    // Assuming you have another structure named 'dob' for age
    // struct dob age;
};

// Function to display student information (call-by-value)
void displayByValue(struct student_info student) {
    printf("Roll No: %d\n", student.roll_no);
    printf("Name: %s\n", student.name);
    printf("CGPA: %.2f\n", student.CGPA);
    // Print age if 'dob' structure is defined
    // printf("Age: %d/%d/%d\n", student.age.day, student.age.month, student.age.year);
}

// Function to modify student information (call-by-address)
void modifyByAddress(struct student_info *student) {
    // Modify some values (for demonstration)
    student->roll_no = 101;
    strcpy(student->name, "John Doe");
    student->CGPA = 3.75;
    // Modify age if 'dob' structure is defined
    // student->age.day = 15;
    // student->age.month = 5;
    // student->age.year = 2000;
}

int main() {
    // Create a student_info structure
    struct student_info student1 = {123, "Alice", 3.85};

    // Display initial values
    printf("Initial Student Information:\n");
    displayByValue(student1);

    // Modify values using call-by-address
    modifyByAddress(&student1);

    // Display modified values
    printf("\nModified Student Information:\n");
    displayByValue(student1);

    return 0;
}
