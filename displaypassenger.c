void showAllPassengers() {
if(count==0){
printf("No passengers added yet. \n");
}
else 
{
for(int i=0; i<count; i++) {
printf("Passenger ID: %d\n",passengers[i].id);
printf("Name: %s\n",passengers[i].name);
printf("Age: %d\n",passengers[i].age);
printf("---------------\n");
}
}
}