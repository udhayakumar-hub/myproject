//	Name     = Athul
//	Batch id = V19CE7-A6

#include<stdio.h>
int main()
{
	int num,pos,menu,x;
	printf("Enter the mumber and the position = ");
	scanf("%d%d",&num,&pos);
	printf("Select one option from the given menu \n");
	printf("1.Set a perticular bit \t 2.Show the status of perticular bit =");
	scanf("%d",&menu);


	switch(menu)
	{
	case 1:
		{	
		
			num=num|(1<<pos);
			printf("The value of after seting the bit is %d",num);break;
	
		}
	
	case 2:
		{	
		
			printf("The status of the bit is %d\n",num>>pos&1) ;break;


		}
	default:
		{
		printf("INVALID SELECTION \n");break;
		
}

	
}



}


  
