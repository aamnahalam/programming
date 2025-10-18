int main() {
    int mainChoice;
    while(1) {
        printMenu();
        scanf("%d", &mainChoice);
switch(mainChoice) 
{
    case 1: 
{ // Flight Module
    int flightChoice;
    FlightMenu();
    scanf("%d", &flightChoice);

    switch(flightChoice)
 {
        case 1: addFlights(); 
        break;
        case 2: updateFlights(); 
        break;
        case 3: deleteFlights();
        break;
        case 4: showAllFlights(); 
        break;
        case 5: 
        break; // Go back
       default: 
       printf("Invalid choice!\n");
}
        break;
}

        case 2: 
{ // Passenger Module
        int passengerChoice;
        PassengerMenu();
        scanf("%d", &passengerChoice);

        switch(passengerChoice) {
        case 1: addPassengers(); 
        break;
        case 2: showAllPassengers(); 
        break;
        case 3: 
        break; // Go back
        default: 
        printf("Invalid choice!\n");
}
        break;
}
       case 3: 
{ // Booking Module
        int bookingChoice;
        BookingMenu();
        scanf("%d", &bookingChoice);

        switch(bookingChoice) {
        case 1: bookTickets(); 
        break;
        case 2: cancelTickets(); 
        break;
        case 3: showAllBookings(); 
        break;
        case 4: 
        break; // Go back
        default: 
        printf("Invalid choice!\n");
}
        break;
}

        case 4:
        printf("Exiting...\n");
        return 0;

        default:
        printf("Invalid choice! Try again.\n");
       }
    }
}
void addFlights()

