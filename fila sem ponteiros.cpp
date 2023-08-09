#include <stdio.h>
# define SIZE 100
void enqueue();
void dequeue();
void display();
int exit();
int inp_arr[SIZE];
int Front = - 1;
int Back = - 1;

int main()
{
    int choice;
    do
    {
        printf("\n1.ADD TO QUEUE\n");
        printf("2.REMOVE FROM QUEUE\n");
        printf("3.DISPLAY\n");
        printf("4.EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice)
        {
            case 1:
            	enqueue();
            	break;
            case 2:
            	dequeue();
            	break;
            case 3:
            	display();
            	break;
            case 4:
            	exit();
            	break;
            default:
            printf("\nIncorrect choice\n");
        } 
    }while (choice != 4);
} 
 
void enqueue()
{
    int insert_item;
    if (Back == SIZE - 1)
       printf("Overflow \n");
    else
    {
        if (Front == - 1)
      
        Front = 0;
        printf("Element to be inserted in the Queue: ");
        scanf("%d", &insert_item);
        Back = Back + 1;
        inp_arr[Back] = insert_item;
    }
} 
 
void dequeue()
{
    if (Front == - 1 || Front > Back)
    {
        printf("Underflow \n");
        return ;
    }
    else
    {
        printf("Element deleted from the Queue: %d\n", inp_arr[Front]);
        Front = Front + 1;
    }
} 
 
void display()
{
    
    if (Front == - 1)
        printf("Empty Queue \n");
    else
    {
        printf("\nQueue: \n");
        for (int i = Front; i <= Back; i++)
            printf("%d ", inp_arr[i]);
        printf("\n");
    }
}

int exit()
{
	return 0;
} 
