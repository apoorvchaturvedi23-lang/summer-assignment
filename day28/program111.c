#include <stdio.h>
#include <string.h>

#define TOTAL_SEATS 10

struct Ticket {
    int seatNo;
    char name[50];
    int booked;    // 0 = Available, 1 = Booked
};

struct Ticket seats[TOTAL_SEATS];

// Initialize Seats
void initializeSeats() {
    for (int i = 0; i < TOTAL_SEATS; i++) {
        seats[i].seatNo = i + 1;
        seats[i].booked = 0;
    }
}

// Book Ticket
void bookTicket() {
    int seat;

    printf("\nEnter Seat Number (1-%d): ", TOTAL_SEATS);
    scanf("%d", &seat);

    if (seat < 1 || seat > TOTAL_SEATS) {
        printf("Invalid Seat Number!\n");
        return;
    }

    if (seats[seat - 1].booked) {
        printf("Seat Already Booked!\n");
    } else {
        printf("Enter Passenger Name: ");
        scanf(" %[^\n]", seats[seat - 1].name);

        seats[seat - 1].booked = 1;

        printf("Ticket Booked Successfully!\n");
    }
}

// View Bookings
void viewBookings() {
    printf("\n------ Booking Details ------\n");

    for (int i = 0; i < TOTAL_SEATS; i++) {
        if (seats[i].booked) {
            printf("Seat %d : %s\n",
                   seats[i].seatNo,
                   seats[i].name);
        }
    }
}

// Cancel Ticket
void cancelTicket() {
    int seat;

    printf("\nEnter Seat Number to Cancel: ");
    scanf("%d", &seat);

    if (seat < 1 || seat > TOTAL_SEATS) {
        printf("Invalid Seat Number!\n");
        return;
    }

    if (!seats[seat - 1].booked) {
        printf("Seat is Already Available!\n");
    } else {
        seats[seat - 1].booked = 0;
        strcpy(seats[seat - 1].name, "");

        printf("Ticket Cancelled Successfully!\n");
    }
}

// Available Seats
void availableSeats() {
    printf("\nAvailable Seats:\n");

    for (int i = 0; i < TOTAL_SEATS; i++) {
        if (!seats[i].booked) {
            printf("Seat %d\n", seats[i].seatNo);
        }
    }
}

int main() {
    int choice;

    initializeSeats();

    do {
        printf("\n===== Ticket Booking System =====\n");
        printf("1. Book Ticket\n");
        printf("2. View Bookings\n");
        printf("3. Cancel Ticket\n");
        printf("4. Available Seats\n");
        printf("5. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                bookTicket();
                break;

            case 2:
                viewBookings();
                break;

            case 3:
                cancelTicket();
                break;

            case 4:
                availableSeats();
                break;

            case 5:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while (choice != 5);

    return 0;
}