#include<stdio.h>
#include<stdlib.h>
int Menu(); 
void Twowheeler();
void Threewheeler();
void Fourwheeler();
void Status();
void Delete();
int notw=0;//no. of two wheeler vehicle, global variable
int nothw=0;//no. of three wheeler vehicle, global variable
int nofw=0;//no. of four wheeler vehicle, global variable
int amount=0, count=0; //amount corresponds to each vehicle and total no. of vehicle, global variables
void main()
{
    while(1) 
    {
        switch(Menu())
        {
            case 1:
                Twowheeler(); //function call
                break;
                
            case 2:
                Threewheeler(); //function call
                break;
                
            case 3:
                Fourwheeler(); //function call
                break;
                
            case 4:
                Status(); //function call
                break;
                
            case 5:
                Delete(); //function call
                break;
            case 6:
                exit(0); 
            default:
                printf("Invalid choice.Please enter a valid option\n");
        }
    }
}
int Menu()
{   int choice;
    printf("\n\nWelcome to Parking Management System\n");
    printf("\n\n\nCharges for two wheeler Rs.40, three wheeler Rs. 70 and four wheeler Rs. 100\n");
    printf("\n\n1.Two wheeler entry\n");
    printf("\n2.Three wheeler entry\n");
    printf("\n3.Four wheeler entry\n");
    printf("\n4.Status check\n");
    printf("\n5.Delete data\n");
    printf("\n6.Exit\n");
    printf("\n\nPlease enter your choice:\n");
    scanf("%d",&choice);
    return(choice);
}

void Twowheeler()
{
    printf("Entry successful\n");
    notw++;
    amount=amount+40;// Rs.40 to be charged for two wheeler
    count++;
}

void Threewheeler()
{
    printf("Entry successful\n");
    nothw++;
    amount=amount+70;// Rs.70 to be charged for three wheeler
    count++;
}

void Fourwheeler()
{
    printf("Entry successful\n");
    nofw++;
    amount=amount+100;// Rs.100 to be charged for four wheeler
    count++;
}

void Status()
{
    printf("Number of two wheeler vehicle: %d\n",notw);
    printf("Number of three wheeler vehicle: %d\n",nothw);
    printf("Number of four wheeler vehicle: %d\n",nofw);
    printf("Total number of vehicle: %d\n",count);
    printf("Total amount gained: %d\n",amount);
}

void Delete()
{
    notw=0;
    nothw=0;
    nofw=0;
    amount=0;
    count=0;
}