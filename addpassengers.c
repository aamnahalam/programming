void addPassenger() {
if(count>=100) {
printf("Cannot add more passengers. Limit reached. \n");
return;
}
printf("Enter Passenger ID: ");
scanf("%d",&passengers[count].id);


printf("Enter Name: ");
scanf("%s",&flights[count].name);

printf("Enter Age: ");
scanf("%s", &flights[count].age);

count++;
printf("PASSENGER ADDED SUCESSFULLY !\n");
}