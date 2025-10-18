void deleteFlights() {
int id, found=0;
printf("Enter Flight ID to delete: \n");
scanf("%d",&id);
for(int i=0; i<count; i++){
if(flights[i].id==id){
found=1;
for(j=1;j<count-1;j++){
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
}