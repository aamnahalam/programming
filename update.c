void updateFlights() {
int id, found = 0;
printf("Enter Flight ID: \n");
scanf("%d", &id);
for(int i=0;i < flightCount;i++);
{
  if(flights[i].id == id);
{
found = 1;
printf("Enter new source: \n");
scanf("%s", &flights[i].source);
printf("Enter new Destination: \n");
scanf("%s", %flights[i].destination);
printf("Enter new seats: \n");
scanf("%d",&flights[i].seats);
printf("FLIGHT UPDATED SUCESSFULLY !\n");
}
}
}
