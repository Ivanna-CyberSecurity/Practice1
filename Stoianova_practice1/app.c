#include <stdio.h>
#include <stdlib.h>

#define MAX_STUDENTS 150

struct Student {
    char name[50];
    char surname[50];
    int age;
};

int main()
{
    struct Student students[MAX_STUDENTS];
    int numStudents;

    printf("How many students are in your group ->");
    scanf("%d", &numStudents);

    if (numStudents > MAX_STUDENTS) {
        printf("Error: Maximum number of students is 100...\n");
        return 1;
    }

    for (int i = 0; i < numStudents; i++) {
        printf("\nStudent %d\n", i+1);

        printf("Enter name: ");
        scanf("%s", students[i].name);

        printf("Enter surname: ");
        scanf("%s", students[i].surname);

        printf("Enter age: ");
        scanf("%d", &students[i].age);
    }

    printf("\nPress any key to check all students...\n");
    getchar();

    getchar();

    printf("\nList of students:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("\nStudent %d\n", i+1);
        
        printf("Name: %s\n", students[i].name);
        printf("Surname: %s\n", students[i].surname);
        printf("Age: %d\n", students[i].age);
        printf("\n");
    }

    return 0;
}