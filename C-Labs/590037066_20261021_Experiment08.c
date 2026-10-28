/* WAP to store and display the details of a student using a structure */
#include <stdio.h>

struct student {
    int rollNumber;
    char name[20];
    int age;
    float marks;
};

int main() {
    struct student s;
    printf("Enter students details (Rollnum, Name, Age, marks): ");
    scanf("%d %s %d %f",&s.rollNumber, &s.name, &s.age, &s.marks);

    printf("Student details are: \n");
    printf("RollNumber= %d\n",s.rollNumber);
    printf("Name= %s\n",s.name);
    printf("Age= %d\n",s.age);
    printf("Marks= %.2f",s.marks);

return 0;
}