#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/queue.h>

#define MAXSIZE 50

typedef struct Student {
        LIST_ENTRY(Student) next;
        char name[MAXSIZE];
        int age;
} Student;

LIST_HEAD(student_list, Student) students;

Student *add_student_info(char *name, int age) {
        Student *stud = (Student *)malloc(sizeof(Student));
        strcpy(stud->name, name);
        stud->age = age;
        return stud;
}

int main()
{
        LIST_INIT(&students);
        Student *ram = add_student_info("Ram", 15);
        Student *shyam = add_student_info("Shyam", 20);
        Student *ghanshyam = add_student_info("Ghanshyam", 25);
        // insert at begining
        LIST_INSERT_HEAD(&students, ram, next);
        LIST_INSERT_HEAD(&students, shyam, next);
        // insert after shyam
        LIST_INSERT_AFTER(shyam, ghanshyam, next);
        Student *stud;
        LIST_FOREACH(stud, &students, next) {
                printf("name: %s, age: %d\n", stud->name, stud->age);
        }
        LIST_REMOVE(ram, next);
        LIST_FOREACH(stud, &students, next) {
                printf("name: %s, age: %d\n", stud->name, stud->age);
        }
        free(stud);
        return 0;
}

