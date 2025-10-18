void showAllFlights() {
if(flightCount==0)
{
  printf("No flights available");
}
  else 
{
  for(int i=0;i<flightCount;i++);
   printf("Flight ID: %d\n", flights[i].id);
   printf("Source: %s\n", flights[i].source);
   printf("Destination: %s\n", flights[i].destination);
   printf("Seats: %d\n", flights[i].seats);
   printf("---------------\n");
    }
  } 
