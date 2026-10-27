#include <stdio.h>
#include <string.h>

void happyBirthday(char name[], int age)
{
    printf("Name : %s \n", name);
    printf("Age : %d\n", age);
}

int main(void)
{

    char name[50] = "";
    int age = 0;

    printf("Enter your age: ");
    scanf("%d", &age);
    getchar(); // yas once girilince yasanan sorunu cozuyor

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    happyBirthday(name, age);

    return 0;
}