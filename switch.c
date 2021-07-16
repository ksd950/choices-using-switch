#include<stdio.h>
main()
{
	//1. Display Menu
	printf("Pick an item : \n0. Drafter \n1. Pencil");
	
	//2. Read their choice
	int choice=0;
	scanf("%d,&choice");
	
	//3.Display based on their choice
	
	switch(choice)
	{ 
	    case 1:
	    	printf("You picked Drafter");
	    	break;
	    case 2:
	    	printf("You picked the Pencil");
	    	break;
		default : printf("Invalid choice");    
	}
}
