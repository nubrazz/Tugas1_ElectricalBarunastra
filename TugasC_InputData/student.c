#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "student.h"
#include "mapping.h"

// <summary//>
// This file contains functions for:
// - Validating NRP
// - Determine the major by NRP
// - Grouped students by the major
// <//summary>

// Function to validate NRP input
int isValidNRP(const char *nrp) {
    if (strlen(nrp) != 10) {
        return 0; // Invalid if not exactly 10 characters
    }
    for (int i = 0; i < 10; i++) {
        if (!isdigit(nrp[i])) {
            return 0; // Invalid if any character is not a digit
        }
    }
    return 1; // Valid length and numeric check
}

// Function to determine the major based on the first four digits of NRP
void determineMajor(struct Student *student) {
    char prefix[5];
    strncpy(prefix, student->nrp, 4);
    prefix[4] = '\0'; // Null-terminate the string

    for (int i = 0; i < numMappings; i++) {
        if (strcmp(prefix, mappings[i].prefix) == 0) {
            strcpy(student->major, mappings[i].major);
            return;
        }
    }
    strcpy(student->major, "Unknown Major");
}

// Function to list students grouped by major
void listStudentsByMajor(struct Student students[], int numStudents) {
    for (int m = 0; m < numMappings; m++) {
        int found = 0;

        // Check if there are any students for this major
        for (int i = 0; i < numStudents; i++) {
            if (strcmp(students[i].major, mappings[m].major) == 0) {
                found = 1;
                break; // No need to keep checking once we know there's at least one student
            }
        }

        if (found) {
            // Display students for this major
            printf("\n%s:\n", mappings[m].major);
            for (int i = 0; i < numStudents; i++) {
                if (strcmp(students[i].major, mappings[m].major) == 0) {
                    printf("  Name: %s, NRP: %s\n", students[i].name, students[i].nrp);
                }
            }
        }
    }
}
