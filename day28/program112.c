#include <stdio.h>
#include <string.h>

#define MAX 100

struct Contact {
    char name[50];
    char phone[15];
    char email[50];
};

struct Contact contacts[MAX];
int count = 0;

// Add Contact
void addContact() {
    printf("\nEnter Name: ");
    scanf(" %[^\n]", contacts[count].name);

    printf("Enter Phone Number: ");
    scanf("%s", contacts[count].phone);

    printf("Enter Email: ");
    scanf("%s", contacts[count].email);

    count++;
    printf("Contact Added Successfully!\n");
}

// Display Contacts
void displayContacts() {
    if (count == 0) {
        printf("\nNo Contacts Available!\n");
        return;
    }

    printf("\n------ Contact List ------\n");

    for (int i = 0; i < count; i++) {
        printf("\nContact %d\n", i + 1);
        printf("Name  : %s\n", contacts[i].name);
        printf("Phone : %s\n", contacts[i].phone);
        printf("Email : %s\n", contacts[i].email);
    }
}

// Search Contact
void searchContact() {
    char search[50];
    int found = 0;

    printf("\nEnter Name to Search: ");
    scanf(" %[^\n]", search);

    for (int i = 0; i < count; i++) {
        if (strcmp(search, contacts[i].name) == 0) {
            printf("\nContact Found!\n");
            printf("Name  : %s\n", contacts[i].name);
            printf("Phone : %s\n", contacts[i].phone);
            printf("Email : %s\n", contacts[i].email);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Contact Not Found!\n");
}

// Update Contact
void updateContact() {
    char search[50];

    printf("\nEnter Name to Update: ");
    scanf(" %[^\n]", search);

    for (int i = 0; i < count; i++) {
        if (strcmp(search, contacts[i].name) == 0) {

            printf("Enter New Phone: ");
            scanf("%s", contacts[i].phone);

            printf("Enter New Email: ");
            scanf("%s", contacts[i].email);

            printf("Contact Updated Successfully!\n");
            return;
        }
    }

    printf("Contact Not Found!\n");
}

// Delete Contact
void deleteContact() {
    char search[50];

    printf("\nEnter Name to Delete: ");
    scanf(" %[^\n]", search);

    for (int i = 0; i < count; i++) {
        if (strcmp(search, contacts[i].name) == 0) {

            for (int j = i; j < count - 1; j++) {
                contacts[j] = contacts[j + 1];
            }

            count--;
            printf("Contact Deleted Successfully!\n");
            return;
        }
    }

    printf("Contact Not Found!\n");
}

int main() {

    int choice;

    do {
        printf("\n===== Contact Management System =====\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Update Contact\n");
        printf("5. Delete Contact\n");
        printf("6. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            addContact();
            break;

        case 2:
            displayContacts();
            break;

        case 3:
            searchContact();
            break;

        case 4:
            updateContact();
            break;

        case 5:
            deleteContact();
            break;

        case 6:
            printf("Thank You!\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while (choice != 6);

    return 0;
}