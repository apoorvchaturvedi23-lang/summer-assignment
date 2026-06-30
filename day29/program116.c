#include <stdio.h>

struct Product {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    struct Product p[100];
    int n = 0, choice, i, id, found;

    do {
        printf("\n===== INVENTORY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Product\n");
        printf("2. Display Products\n");
        printf("3. Search Product\n");
        printf("4. Update Quantity\n");
        printf("5. Delete Product\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("Enter Product ID: ");
            scanf("%d", &p[n].id);

            printf("Enter Product Name: ");
            scanf("%s", p[n].name);

            printf("Enter Quantity: ");
            scanf("%d", &p[n].quantity);

            printf("Enter Price: ");
            scanf("%f", &p[n].price);

            n++;
            printf("Product added successfully.\n");
            break;

        case 2:
            if (n == 0) {
                printf("No products available.\n");
            } else {
                printf("\nID\tName\tQuantity\tPrice\n");
                printf("-------------------------------------------\n");
                for (i = 0; i < n; i++) {
                    printf("%d\t%s\t%d\t\t%.2f\n",
                           p[i].id, p[i].name, p[i].quantity, p[i].price);
                }
            }
            break;

        case 3:
            printf("Enter Product ID to search: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < n; i++) {
                if (p[i].id == id) {
                    printf("\nProduct Found:\n");
                    printf("ID: %d\n", p[i].id);
                    printf("Name: %s\n", p[i].name);
                    printf("Quantity: %d\n", p[i].quantity);
                    printf("Price: %.2f\n", p[i].price);
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Product not found.\n");
            break;

        case 4:
            printf("Enter Product ID: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < n; i++) {
                if (p[i].id == id) {
                    printf("Enter New Quantity: ");
                    scanf("%d", &p[i].quantity);
                    printf("Quantity updated successfully.\n");
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Product not found.\n");
            break;

        case 5:
            printf("Enter Product ID to delete: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < n; i++) {
                if (p[i].id == id) {
                    int j;
                    for (j = i; j < n - 1; j++) {
                        p[j] = p[j + 1];
                    }
                    n--;
                    found = 1;
                    printf("Product deleted successfully.\n");
                    break;
                }
            }

            if (!found)
                printf("Product not found.\n");
            break;

        case 6:
            printf("Exiting Inventory Management System...\n");
            break;

        default:
            printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 6);

    return 0;
}