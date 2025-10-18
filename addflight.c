struct Flight {
int id;
char source[50]
char destination[50];
int seats;
};
struct Flight flights[100] 
int flightCount=0;
void addflights() 
{
if(flightCount>=100){
printf(" CANNOT ADD MORE FLIGHTS. LIMIT REACHED.\n");
return;
}
printf("Enter flight ID : ");
scanf("%d",&flights[flightCount].id);

printf("Enter Source : ");
scanf("%s",&flights[flightCount].source);

printf("Enter Destination : ");
scanf("%s", &flights[flightCount].destination);

printf("Enter Seats : ");
scanf("%d", &flights[flightCount].seats);

flightCount++;
printf("FLIGHT ADDED SUCESSFULLY ! \n");
}

