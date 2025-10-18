struct Flight
{
int id;
char source[50];
char destination[50];
int seats;
};

struct Passenger
{
int id;
char name[50];
int age;
};

struct Booking
{
int bookingId;
int flightId;
int PassengerId;
};
