



#include          "LL.h"



struct queue   L_1;


////////////////////////////////////////////////////
int main()                                        // 
{

    strncpy(L_1.szNote, "Like a regular array.", 27); 

    for(int i = 10; i < 31; i++)
    {
        queue_push(&L_1, i); 
    }
    
    printf("The pop function returned: %d\n", queue_pop(&L_1) );
    printf("The pop function returned: %d\n", queue_pop(&L_1) );   
     
    queue_Print(&L_1);	
}
























