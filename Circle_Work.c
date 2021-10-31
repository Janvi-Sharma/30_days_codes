#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
#define PI 3.14159
int menu();
double diameter_to_radius(double);
double area(double);
double random_value_generator(double , double);
double circumference(double);
int main()
{ srand(time(NULL));
 int choice ;
 char unit[10] ;
 int result_1,result_2 ;
 double radius,diameter;
 char Letter ;
 for (;;)
 {
 choice= menu();
 if (choice==-1)
 {
 return 0 ;
 }
 printf("Enter an option:%d\n",choice);
 printf("Is your unit cm or m \n");
 for (;;)
 {
 scanf("%s",&unit);
 result_1=strcmp(unit,"cm");
 result_2=strcmp(unit,"m");
 if (result_1==0 || result_2==0)
 break ;
 else
 printf("Wrong Choice, give either cm or m \n" );
 }
 if (choice==1)
 {
 radius=random_value_generator(5.0,15.0);
 printf("The radius given by random generator is : %.5lf\n",radius);
 }
 else
 { diameter=random_value_generator(15.0,30.0);
 radius=diameter_to_radius(diameter);
 printf("The diameter given by random generator is : %.5lf\n",diameter);
 }
 printf("Do you want to calculate area or circumference?\n");
 printf("Enter 'A' for area and 'C' for circumference \n");
 for(;;)
 {
 scanf(" %c",&Letter);
 if(Letter=='A' || Letter=='C')
 break;
 else
 printf("\nWrong choice, give either A or C\n");
 }
 switch(choice)
 {case 1 : if (Letter=='A')
 if (result_1==0)
 printf("The area of the circle with radius %.5lf is %.2lf cm2\n",radius,area(radius));
 else if (result_2==0)
 printf("The area of the circle with radius %.5lf is %.2lf m2\n",radius,area(radius));
 if (Letter=='C')
 if (result_1==0)
 printf("The circumference of the circle with radius %.5lf is %.2lf cm2\n",radius,circumference(radius));
 else if (result_2==0)
 printf("The circumference of the circle with radius %.5lf is %.2lf m2\n",radius,circumference(radius));
 break ;
 case 2 : if (Letter=='A')
 if (result_1==0)
 printf("The area of the circle with diameter %.5lf is %.2lf cm2\n",diameter,area(radius));
 else if (result_2==0)
 printf("The area of the circle with diameter %.5lf is %.2lf m2\n",diameter,area(radius));
 if (Letter=='C')
 if (result_1==0)
 printf("The circumference of the circle with diameter %.5lf is %.2lf cm2\n",diameter,circumference(radius));
 else if (result_2==0)
 printf("The circumference of the circle with diameter %.5lf is %.2lf m2\n",diameter,circumference(radius));
 break ;
 }
 }
}
int menu()
{ int num ;
 for (;;)
 {
 printf("Do you want to use radius or diameter for the calculation?\n");
 printf("Enter 1 for radius\n");
 printf("Enter 2 for diameter\n");
 printf("Enter -1 to exit\n");
 scanf("%d",&num);
 if ((num==1) || (num==2))
 break ;
 else if (num==(-1))
 return -1 ;
 else
 printf("Invalid choice, please try again\n");
 }
 return num ;
}
double random_value_generator(double min , double max)
{
 double d=((double)rand())/((double)RAND_MAX);
 return d*(max-min)+min ;
}
double diameter_to_radius (double diameter)
{
 double temp ;
 temp=(diameter/2 );
 return temp ;
}
double area(double radius)
{
 double Area ;
 Area=PI*radius*radius;
 return Area ;
}
double circumference(double radius)
{
 double Circumference ;
 Circumference=PI*radius*2;
 return Circumference ;
}
