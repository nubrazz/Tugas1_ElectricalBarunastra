#include <stdio.h>
#include <string.h>
#include "student.h"
#include "mapping.h"

/*
 * Program Summary:
 * -----------------
 * 1. The program manages student information (name, NRP, and major).
 * 2. It validates the NRP to ensure:
 *    - It is exactly 10 digits long.
 *    - Its first four digits match a predefined NRP prefix.
 * 3. Each NRP prefix is mapped to a specific major.
 * 4. The program collects data for a predefined number of students (3 in this case).
 * 5. After collecting the data:
 *    - It displays the list of valid NRP prefixes and corresponding majors.
 *    - It groups students by their majors and displays the results.
 * 6. The program waits for the user to press Enter before exiting.
 */

// <summary//>
// This program doesn't take major input from the user since it can be determined by the NRP
// All the possible NRP in ITS already mapped meaning it's an invalid NRP if it doesn't exist in the mapping
// If the NRP is invalid then user is asked to reinput the NRP

// The project is separate into 3 .c files to improve readability
// <//summary>

#define NUM_STUDENTS 14

int main() {
    struct Student students[NUM_STUDENTS];

    // List all NRP prefixes and their corresponding majors
    listNRPPrefixes();

    // Input student information
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("Enter details for student %d\n", i + 1);

        // Input name
        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = 0; // Remove newline

        // Input and validate NRP
        while (1) {
            printf("NRP: ");
            fgets(students[i].nrp, sizeof(students[i].nrp), stdin);
            students[i].nrp[strcspn(students[i].nrp, "\n")] = 0; // Remove newline

            if (isValidNRP(students[i].nrp) && isValidPrefix(students[i].nrp)) {
                break; // Exit loop if valid
            } else {
                printf("Invalid NRP! Please enter a valid 10-digit NRP with a known majors.\n");
            }
        }

        // Determine the major based on the NRP
        determineMajor(&students[i]);
        printf("\n");
    }

    // Output grouped student information
    printf("\n--- Students Grouped by Major ---\n");
    listStudentsByMajor(students, NUM_STUDENTS);

    // Keep the program open
    printf("\nPress Enter to exit...");
    getchar(); // Wait for user to press Enter

    return 0;
}
