#include <stdio.h>

int main()
{
	int age;

	printf("What is your age: ");
	scanf("%d", &age);
	printf("Your age is %d\n",age);

	if(age>=0 && age<10)
	{
	    printf("CHILD");
	}
	else if(age>=10&&age<19)
	{
	    printf("TEEN");
	}
	else if(age>=19&&age<35)
	{
	    printf("YOUTH");
	}
	else
	{
	   printf("ADULT");
	}
	return 0;
}
