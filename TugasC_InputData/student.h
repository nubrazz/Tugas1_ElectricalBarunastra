#ifndef STUDENT_H
#define STUDENT_H

// <summary//>
// This is a header file for student.c
// <//summary>

// Define a struct for student information
struct Student {
    char name[50];
    char nrp[20];
    char major[50];
};

// Function declarations
int isValidNRP(const char *nrp);
void determineMajor(struct Student *student);
void listStudentsByMajor(struct Student students[], int numStudents);

#endif
