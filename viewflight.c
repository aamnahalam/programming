// VIEWING FLIGHTS
void viewFlights() {
    struct Flight f;
    FILE *fp = fopen("Flights.txt", "r"); // Open file for reading
    if (fp == NULL) {
        printf("\nNo flights available!\n");
        return;
    }

    printf("\n------ ALL FLIGHTS ------\n");

    while (fscanf(fp, "%d ,%[^,] ,%[^,] ,%[^,] ,%[^,] ,%d, %d, %f\n",
                  &f.flight_id, f.source, f.destination, f.date, f.time,
                  &f.total_seats, &f.available_seats, &f.price) != EOF) {

        printf("\nFlight ID: %d\n", f.flight_id);
        printf("Source: %s\n", f.source);
        printf("Destination: %s\n", f.destination);
        printf("Date (DD/MM/YYYY): %s\n", f.date);
        printf("Time (HH:MM): %s\n", f.time);
        printf("Total Seats: %d\n", f.total_seats);
        printf("Available Seats: %d\n", f.available_seats);
        printf("Ticket Price: %.2f\n", f.price);
        printf("--------------------------\n");
    }

    fclose(fp);
printf("All flights displayed successfully.\n");
}
// BOOKING TICKET 
void bookTicket() {
    struct Flight flights[100]; 
    int flightCount = 0;
    FILE *fp = fopen("Flights.txt", "r");
    if (fp == NULL) {
        printf("\nNo flights are available!\n");
        return;
    }

    // Read all flights into array
    while (fscanf(fp, "%d ,%[^,] ,%[^,] ,%[^,] ,%[^,] ,%d, %d, %f\n",
                  &flights[flightCount].flight_id, flights[flightCount].source,
                  flights[flightCount].destination, flights[flightCount].date,
                  flights[flightCount].time, &flights[flightCount].total_seats,
                  &flights[flightCount].available_seats, &flights[flightCount].price) != EOF) {
        flightCount++;
    }

    fclose(fp);

    int flightID, seatsToBook;
    printf("\nEnter Flight ID to book: ");
    scanf("%d", &flightID);

    int found = 0;
    for (int i = 0; i < flightCount; i++) {
        if (flights[i].flight_id == flightID) {
            found = 1;
            printf("\nFlight found!\n");
            printf("Available Seats: %d\n", flights[i].available_seats);

            printf("Enter number of seats to book: ");
            scanf("%d", &seatsToBook);

            if (seatsToBook <= flights[i].available_seats) {
                flights[i].available_seats = flights[i].available_seats - seatsToBook;
                printf("%d seat(s) are booked successfully!\n", seatsToBook);
            } 
else 
{
                printf("Not enough seats available!\n");
            }
            break;
        }
    }

    if (!found) {
        printf("Flight ID not found!\n");
        return;
    }

    // Write all flights back to file
    fp = fopen("Flights.txt", "w");
    for (int i = 0; i < flightCount; i++) {
        fprintf(fp, "%d ,%s ,%s ,%s ,%s ,%d, %d, %.2f\n",
                flights[i].flight_id, flights[i].source, flights[i].destination,
                flights[i].date, flights[i].time, flights[i].total_seats,
                flights[i].available_seats, flights[i].price);
    }

    fclose(fp);
}


// CANCEL TICKET
void cancelTicket() {
    struct Flight flights[100]; // array to store all flights
    int flightCount = 0;
    FILE *fp = fopen("Flights.txt", "r");
    if (fp == NULL) {
        printf("\nNo flights available!\n");
        return;
    }

    // Read all flights into the array
    while (fscanf(fp, "%d ,%[^,] ,%[^,] ,%[^,] ,%[^,] ,%d, %d, %f\n",
                  &flights[flightCount].flight_id, flights[flightCount].source,
                  flights[flightCount].destination, flights[flightCount].date,
                  flights[flightCount].time, &flights[flightCount].total_seats,
                  &flights[flightCount].available_seats, &flights[flightCount].price) != EOF) {
        flightCount++;
    }
    fclose(fp);

    int flightID, seatsToCancel;
    printf("\nEnter Flight ID to cancel: ");
    scanf("%d", &flightID);

    int found = 0;
    for (int i = 0; i < flightCount; i++) {
        if (flights[i].flight_id == flightID) {
            found = 1;

            printf("\nFlight found!\n");
            printf("Available Seats: %d\n", flights[i].available_seats);

            printf("Enter number of seats to cancel: ");
            scanf("%d", &seatsToCancel);

            if (flights[i].available_seats + seatsToCancel <= flights[i].total_seats) {
                flights[i].available_seats = flights[i].available_seats + seatsToCancel;
                printf("%d seat(s) canceled successfully!\n", seatsToCancel);
            } else {
                printf("Cannot cancel more than total seats!\n");
            }
            break;
        }
    }

    if (!found) {
        printf("Flight ID not found!\n");
        return;
    }

    // Write all flights back to file
    fp = fopen("Flights.txt", "w");
    for (int i = 0; i < flightCount; i++) {
        fprintf(fp, "%d ,%s ,%s ,%s ,%s ,%d, %d, %.2f\n",
                flights[i].flight_id, flights[i].source, flights[i].destination,
                flights[i].date, flights[i].time, flights[i].total_seats,
                flights[i].available_seats, flights[i].price);
    }
    fclose(fp);
}

// VIEW RESERVATIONS
void viewReservations() {
    FILE *fp = fopen("Reservations.txt", "r"); // open reservations file
    if (fp == NULL) {
        printf("\nNo reservations found!\n");
        return;
    }

    int resID, flightID, seatsBooked;
    char passenger[50];

    printf("\n------ MY RESERVATIONS ------\n");

    // read each reservation line by line
    while (fscanf(fp, "%d ,%d ,%[^,] ,%d\n", &resID, &flightID, passenger, &seatsBooked) != EOF) {
        printf("Reservation ID: %d\n", resID);
        printf("Flight ID: %d\n", flightID);
        printf("Passenger Name: %s\n", passenger);
        printf("Seats Booked: %d\n", seatsBooked);
        printf("--------------------------\n");
    }

    fclose(fp);
}

