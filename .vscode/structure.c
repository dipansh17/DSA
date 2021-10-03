#include <stdio.h>

struct student {
    char firstName[50];
    int roll;
    float marks;
    
} st[5];

int main() {
    int i;
    
    
    printf("Enter information of students:\n");

    // storing information
    for (i = 0; i < 5; ++i) {
        st[i].roll = i + 1;
        printf("\nFor roll number%d,\n", st[i].roll);
        printf("Enter first name: ");
        scanf("%s", st[i].firstName);
        printf("Enter marks: ");
        scanf("%f", &st[i].marks);
    }
    printf("Displaying Information:\n\n");

    // displaying information
    for (i = 0; i < 5; ++i) {
        printf("\nRoll number: %d\n", i + 1);
        printf("First name: ");
        puts(st[i].firstName);
        printf("Marks: %.1f", st[i].marks);
        printf("\n");
    }
    return 0;
}
