void deleteFlights() {
int id, found=0;
printf("Enter Flight ID to delete: \n");
scanf("%d",&id);
for(int i=0; i<flightCount;i++);
if(flights[i].id==id){
found=1;
for(j=1;j<flightCount-1;j++){
flights[j]=flights[j+1];
}
count--;
printf("FLIGHT DELETED SUCESSFULLY ! \n");
break;
}
}
if(found==0){
printf("FLIGHT WITH THIS ID IS NOT FOUND !\n");
}
