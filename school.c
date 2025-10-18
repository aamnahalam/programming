#include<stdio.h>
#define MAX_STUDENTS 100
void addstudents();
void updatestudents();
void deletestudents();
void showallstudents();
void printmenu();
struct students
{
int id;
char name[50];
float cgpa;
};
struct students students[MAX_STUDENTS];
int count = 0;
int main()
{
int choice;
while(1)
{
printmenu();
scanf("%d",&choice);
switch (choice)
{
case 1:
addstudents();
break;
case 2:
updatestudents();
break;
case 3:
deletestudents();
break;
case 4:
showallstudents();
break;
case 5:
return 0;
default:
printf("invalid input\n");
return 0;
break;
}
}
return 0;
}
void addstudents()
{
if(count>=MAX_STUDENTS)
{
printf("limit reached\n");
return ;
}
printf("Enter students id: ");
scanf("%d",&students[count].id);
printf("Enter students name: ");
scanf("%s",&students[count].name);
printf("Enter cgpa\n");
scanf("%f",&students[count].cgpa);
count++;
printf("STUDENTS ADDED SUCESSFULLY!");
}
void updatestudents()
{
int id;
int found = 0;
printf("Enter students id: \n");
scanf("%d",&id);
for(int i=0;i<count;i++)
{
if(id==students[i].id)
{
found=1;
printf("enter students name: \n");
scanf("%s",&students[i].name);
printf("enter students cgpa: \n");
scanf("%f",&students[i].cgpa);
printf("STUDENTS UPDATES SUCESSFULLY");
}
}
if(found == 0)
{
printf("Student with this id is not found\n");
}
}
void deletestudents() {
int id;
int found = 0;
printf("enter students id: ");
scanf("%d",&id);
for(int i=0;i<count;i++)
{
if(id==students[i].id)
{
found =1;
for(int j=i;j<count-1;j++)
{
students[j]=students[j+1];
}
count--;
}
}
if(found==0){
printf("STUDENT DELETED SUCESSFULLY");
}
}
void showallstudents()
{
if(count==0)
{
printf("No student present\n");
return;
}
for(int i=0;i<count;i++)
{
printf("id: %d\n name: %s\n cgpa: %f\n",students[i].id,students[i].name,students[i].cgpa);
}
}
void printmenu()
{
printf("1- ADD STUDENTS\n");
printf("2- UPDATE STUDENTS\n");
printf("3- DELETE STUDENTS\n");
printf("4- SHOW ALL STUDENTS\n");
printf("5- EXIT\n");
printf("CHOOSE BETWEEN 1-5\n");
}