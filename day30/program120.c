#include <stdio.h>
#include <string.h>

#define MAX 100

// Patient Structure
struct Patient {
    int id;
    char name[50];
    int age;
    char gender[10];
    char blood[5];
    char disease[50];
};

// Global array
struct Patient p[MAX];
int count = 0;

// Function prototypes
void addPatient();
void displayPatients();
void searchPatient();
void updatePatient();
void deletePatient();
void searchBloodGroup();
void countPatients();
void oldestPatient();
void youngestPatient();

// MAIN FUNCTION
int main() {
    int choice;

    do {
        printf("\n===== HOSPITAL MANAGEMENT SYSTEM =====\n");
        printf("1. Add Patient\n");
        printf("2. Display Patients\n");
        printf("3. Search Patient by ID\n");
        printf("4. Update Patient\n");
        printf("5. Delete Patient\n");
        printf("6. Search by Blood Group\n");
        printf("7. Count Patients\n");
        printf("8. Oldest Patient\n");
        printf("9. Youngest Patient\n");
        printf("10. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: addPatient(); break;
            case 2: displayPatients(); break;
            case 3: searchPatient(); break;
            case 4: updatePatient(); break;
            case 5: deletePatient(); break;
            case 6: searchBloodGroup(); break;
            case 7: countPatients(); break;
            case 8: oldestPatient(); break;
            case 9: youngestPatient(); break;
            case 10: printf("Exiting system...\n"); break;
            default: printf("Invalid choice!\n");
        }

    } while(choice != 10);

    return 0;
}

// 1. ADD PATIENT
void addPatient() {
    printf("\nEnter Patient ID: ");
    scanf("%d", &p[count].id);

    printf("Enter Name: ");
    scanf(" %[^\n]", p[count].name);

    printf("Enter Age: ");
    scanf("%d", &p[count].age);

    printf("Enter Gender: ");
    scanf("%s", p[count].gender);

    printf("Enter Blood Group: ");
    scanf("%s", p[count].blood);

    printf("Enter Disease: ");
    scanf(" %[^\n]", p[count].disease);

    count++;
    printf("Patient added successfully!\n");
}

// 2. DISPLAY PATIENTS
void displayPatients() {
    int i;

    if(count == 0) {
        printf("No patient records found!\n");
        return;
    }

    printf("\nID\tName\tAge\tGender\tBlood\tDisease\n");
    printf("--------------------------------------------------\n");

    for(i = 0; i < count; i++) {
        printf("%d\t%s\t%d\t%s\t%s\t%s\n",
            p[i].id,
            p[i].name,
            p[i].age,
            p[i].gender,
            p[i].blood,
            p[i].disease
        );
    }
}

// 3. SEARCH PATIENT
void searchPatient() {
    int id, i, found = 0;

    printf("Enter Patient ID: ");
    scanf("%d", &id);

    for(i = 0; i < count; i++) {
        if(p[i].id == id) {
            printf("\nPatient Found:\n");
            printf("ID: %d\n", p[i].id);
            printf("Name: %s\n", p[i].name);
            printf("Age: %d\n", p[i].age);
            printf("Gender: %s\n", p[i].gender);
            printf("Blood: %s\n", p[i].blood);
            printf("Disease: %s\n", p[i].disease);
            found = 1;
            break;
        }
    }

    if(!found)
        printf("Patient not found!\n");
}

// 4. UPDATE PATIENT
void updatePatient() {
    int id, i, found = 0;

    printf("Enter Patient ID: ");
    scanf("%d", &id);

    for(i = 0; i < count; i++) {
        if(p[i].id == id) {

            printf("Enter New Name: ");
            scanf(" %[^\n]", p[i].name);

            printf("Enter New Age: ");
            scanf("%d", &p[i].age);

            printf("Enter New Gender: ");
            scanf("%s", p[i].gender);

            printf("Enter New Blood Group: ");
            scanf("%s", p[i].blood);

            printf("Enter New Disease: ");
            scanf(" %[^\n]", p[i].disease);

            printf("Record updated successfully!\n");
            found = 1;
            break;
        }
    }

    if(!found)
        printf("Patient not found!\n");
}

// 5. DELETE PATIENT
void deletePatient() {
    int id, i, j, found = 0;

    printf("Enter Patient ID: ");
    scanf("%d", &id);

    for(i = 0; i < count; i++) {
        if(p[i].id == id) {

            for(j = i; j < count - 1; j++) {
                p[j] = p[j + 1];
            }

            count--;
            printf("Patient record deleted successfully!\n");
            found = 1;
            break;
        }
    }

    if(!found)
        printf("Patient not found!\n");
}

// 6. SEARCH BY BLOOD GROUP
void searchBloodGroup() {
    char bg[5];
    int i, found = 0;

    printf("Enter Blood Group: ");
    scanf("%s", bg);

    for(i = 0; i < count; i++) {
        if(strcmp(p[i].blood, bg) == 0) {
            printf("%d %s %d %s %s %s\n",
                p[i].id,
                p[i].name,
                p[i].age,
                p[i].gender,
                p[i].blood,
                p[i].disease
            );
            found = 1;
        }
    }

    if(!found)
        printf("No patients found with this blood group.\n");
}

// 7. COUNT PATIENTS
void countPatients() {
    printf("Total Patients: %d\n", count);
}

// 8. OLDEST PATIENT
void oldestPatient() {
    if(count == 0) {
        printf("No records found!\n");
        return;
    }

    int i, max = 0;

    for(i = 1; i < count; i++) {
        if(p[i].age > p[max].age)
            max = i;
    }

    printf("\nOldest Patient: %s (%d years)\n", p[max].name, p[max].age);
}

// 9. YOUNGEST PATIENT
void youngestPatient() {
    if(count == 0) {
        printf("No records found!\n");
        return;
    }

    int i, min = 0;

    for(i = 1; i < count; i++) {
        if(p[i].age < p[min].age)
            min = i;
    }

    printf("\nYoungest Patient: %s (%d years)\n", p[min].name, p[min].age);
}