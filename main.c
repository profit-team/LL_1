



#include          "LL.h"


//                This file contains code that will only work in the console application.  The "LL.h" & "LL.c" files
//                  contain code that should be compiled and executed in a console, Windows application, or other OS.

struct queue   L_1;



void print_info();   




////////////////////////////////////////////////////////
int main()                                            // 
{

    strncpy(L_1.szNote, "Like a regular array.", 27); 
    
    printf("queue_size =%3d\n", queue_size(&L_1) );

    for(int i = 10; i < 57; i++)
    {

        queue_push(&L_1, i);                          //                               queue_push(&L_1, rand()%200 ); 
    }
    
    struct TT *p = queue_front(&L_1);
    
    printf("queue_front = %d\n",  p->n);
    
    printf("The pop function returned: %d\n", queue_pop(&L_1) );
    printf("The pop function returned: %d\n", queue_pop(&L_1) );   
     
    queue_monitor(&L_1);	                          //    Filling in the structure (extern struct info Cinfo) with 
                                                      //                           information about the linked list.
    print_info();                                     //                    We display it in our console application.     
    
return 0;           
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
















