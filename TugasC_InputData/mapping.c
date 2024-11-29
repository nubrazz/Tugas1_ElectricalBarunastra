#include <stdio.h>
#include <string.h>
#include "mapping.h"

// <summary//>
// This file contains a mapping for all the NRP prefix
// This file contains functions for:
// - Validating that the NRP prefix is exist
// - Show list of the NRP prefix
// <//summary>

// Predefined mappings of NRP prefixes to majors
struct MajorMapping mappings[] = {
    {"5001", "Fisika"},
    {"5002", "Matematika"},
    {"5003", "Statistika"},
    {"5004", "Kimia"},
    {"5005", "Biologi"},
    {"5006", "Aktuaria"},
    {"5007", "T. Mesin"},
    {"5008", "T. Kimia"},
    {"5045", "T. Pangan"},
    {"5009", "T. Fisika"},
    {"5010", "Teknik Sistem dan Industri"},
    {"5011", "T. Material dan Metalurgi"},
    {"5012", "T. Sipil"},
    {"5013", "Arsitektur"},
    {"5014", "T. Lingkungan"},
    {"5015", "PWK"},
    {"5016", "T. Geomatika"},
    {"5017", "T. Geofisika"},
    {"5018", "T. Perkapalan"},
    {"5019", "T. Sistem Perkapalan"},
    {"5020", "T. Kelautan"},
    {"5046", "T. Bangunan Lepas Pantai"},
    {"5021", "T. Transportasi Laut"},
    {"5022", "T. Elektro"},
    {"5023", "T. Biomedik"},
    {"5024", "T. Komputer"},
    {"5025", "Teknik Informatika"},
    {"5026", "Sistem Informasi"},
    {"5027", "Teknologi Informasi"},
    {"5028", "Desain Produk"},
    {"5029", "Desain Interior"},
    {"5030", "Desain Komunikasi Visual"},
    {"5031", "Manajemen Bisnis"},
    {"5033", "Studi Pembangunan"},
    {"2035", "Teknologi Pemeliharaan Bangunan Sipil"},
    {"2036", "Teknologi Rekayasa Konstruksi Bangunan Air"},
    {"2038", "Teknologi Rekayasa Manufaktur"},
    {"2039", "Teknologi Rekayasa Konversi Energi"},
    {"2040", "Teknologi Rekayasa Otomasi"},
    {"2041", "Teknologi Rekayasa Kimia Industri"},
    {"2042", "Rekayasa Teknologi Instrumentasi"},
    {"2043", "Statistika Bisnis"}
};
int numMappings = sizeof(mappings) / sizeof(mappings[0]);

// Function to validate if the first four digits of NRP exist in the mapping
int isValidPrefix(const char *nrp) {
    char prefix[5];
    strncpy(prefix, nrp, 4);
    prefix[4] = '\0'; // Null-terminate the string

    for (int i = 0; i < numMappings; i++) {
        if (strcmp(prefix, mappings[i].prefix) == 0) {
            return 1; // Valid prefix
        }
    }
    return 0; // Invalid prefix
}

// Function to list all NRP prefixes and their corresponding majors
void listNRPPrefixes() {
    printf("\n--- List of NRP Prefixes and Corresponding Majors ---\n");
    for (int i = 0; i < numMappings; i++) {
        printf("Prefix: %s -> Major: %s\n", mappings[i].prefix, mappings[i].major);
    }
    printf("\n");
}
