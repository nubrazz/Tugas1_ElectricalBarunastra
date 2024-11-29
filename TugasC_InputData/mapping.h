#ifndef MAPPING_H
#define MAPPING_H

// <summary//>
// This is a header file for mapping.c
// <//summary>

// Define a struct for mapping NRP prefixes to majors
struct MajorMapping {
    char prefix[5];
    char major[100];
};

// Extern declaration of mappings and number of mappings
extern struct MajorMapping mappings[];
extern int numMappings;

// Function declarations
int isValidPrefix(const char *nrp);
void listNRPPrefixes();

#endif
