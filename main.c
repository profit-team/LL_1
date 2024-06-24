



#include          "LL.h"


//                This file contains code that will only work in the console application.  The "LL.h" & "LL.c" files
//                  contain code that should be compiled and executed in a console, Windows application, or other OS.

struct queue   L_1,
               L_2;



void print_info();   

void   select_1();
void   select_2(); 
void   select_3(); 

////////////////////////////////////////////////////////
int main()                                            // 
{

    int n = 1;                                        //                                 Selecting a function number.
    
    for(int i = 0; i < 10; i++)  queue_push(&L_1,       i);   strncpy(L_1.szNote, "init queue L_1"       , 27);     
    for(int i = 0; i < 15; i++)  queue_push(&L_2, 200 + i);   strncpy(L_2.szNote, "init struct queue L_2", 27); 
  
  
L_01:  switch(n)
       {
    	
          case  1: printf("\t\t\t\t\t- -== select 1 ==- -\n");   select_1();	 break;
          case  2: printf("\t\t\t\t\t- -== select 2 ==- -\n");   select_2();	 break;    
          case  3: printf("\t\t\t\t\t- -== select 3 ==- -\n");   select_3();	 break; 
		  default: printf("\t\t!!!  The item number %d is incorrectly selected  !!!\n", n); 	   	
       }
       
       printf("\n - - - - - - - - - \n");
       printf("0 - Quit \n");
       printf("1, 2, or 3 - select the appropriate item. \n");    
       scanf("%d", &n);  
       
	   if(n == 0)  {  printf("Goodbye \n");  return 0; }
       
       goto L_01;      
}





////////////////////////////////////////////////////////
void select_1()                                       // 
{   		
    
	printf("queue_size =%3d\n", queue_size(&L_1) );

    for(int i = 0; i < 7; i++)
    {

        queue_push(&L_1, rand());                     // 
    }
    
    struct TT *p = queue_front(&L_1);
    
    printf("queue_front = %d\n",  p->n);
    
    printf("The pop function returned: %d\n", queue_pop(&L_1) );
    printf("The pop function returned: %d\n", queue_pop(&L_1) );   
     
    queue_monitor(&L_1);	                          //    Filling in the structure (extern struct info Cinfo) with 
                                                      //                           information about the linked list.
    print_info();                                     //                    We display it in our console application.     	
}




//  To iterate, we use the ready-made queue_get() function.
////////////////////////////////////////////////////////
void select_2()                                       // 
{

  
    int           *p = queue_get(&L_1, 5);      printf("L_1[ 5] = %3d\n\n",    *p);
    for(int i = 0; p = queue_get(&L_1, i); i++) printf("L_1[%2d] = %3d \n", i, *p);
	
    queue_monitor(&L_1);
    
	print_info(); 	
}





//  Iterating over the elements is more efficient than in "select_2".
//  We use an understanding of the internal structure of the queue.
////////////////////////////////////////////////////////
void select_3()                                       // 
{

    
    struct TT  *p = L_2.pHead;     
    	
	for(int i = 0; p != 0; i++)
    {
    	
        printf("L_2[%2d] = %3d \n", i, p->n);
    	p = p->pNext; 
    	
    }
	
    queue_monitor(&L_2);
    
	print_info(); 	
}




////////////////////////////////////////////////////////
void print_info()                                     //  
{
    
    printf(" - - - - - - - - - - - - - - - - - - - - - - - void print_info():\n");
    printf(LL_info.sz1);
    printf(LL_info.sz2);
    printf(LL_info.sz3);  
    printf(LL_info.sz4);           
}
















