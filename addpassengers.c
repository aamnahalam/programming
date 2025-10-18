void addPassenger() {
if(passengerCount>=100)
printf("Cannot add more passengers. Limit reached. \n");
return;
}
printf("Enter Passenger ID: ");
scanf("%d",&passengers[passengerCount].id);


printf("Enter Name: ");
scanf("%s",&passengers[passengerCount].name);

printf("Enter Age: ");
scanf("%s",&passengers[passengerCount].age);

passengerCount++;
printf("PASSENGER ADDED SUCESSFULLY !\n");
}