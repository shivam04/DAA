#include<stdio.h>


void hanoi(int n,char source,char temp,char destination); //function decalaration
int main()
 { 
    freopen("OUTPUT.txt","w",stdout);
	
	char source,destination,temp;
	             int n=10; //n for no. of disks
	             source='A';
              	 destination='C';
	
	             temp='B';
	
	hanoi(n,source,temp,destination); // function for tower of hanoi.
 	return 0;
 } 

 void hanoi(int n,char source,char temp,char destination)
 {
	if (n==1)
	{
		printf("Move Disk %d from %c-->%c\n",n,source,destination);
		return;
	}
	else
	     {
		    hanoi(n-1,source,destination,temp); // recursive call
		    printf("Move Disk %d from %c-->%c\n",n,source,destination);
		    hanoi(n-1,temp,source,destination);}
} 
