struct Flight {
int id;
char source[50]
char destination[50];
int seats;
};
struct Flight flights[100] 
int count=0;
void addflights() 
{
if(Count>=100) {
printf(" CANNOT ADD MORE FLIGHTS. LIMIT REACHED.\n");
return;
}
printf("Enter flight ID : ");
scanf("%d",&flights[count].id);

printf("Enter Source : ");
scanf("%s",&flights[count].source);

printf("Enter Destination : ");
scanf("%s", &flights[count].destination);

printf("Enter Seats : ");
scanf("%d", &flights[count].seats);

count++;
printf("FLIGHT ADDED SUCESSFULLY ! \n");
}

