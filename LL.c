



#include          "LL.h"




//                                               The function will add a new TT element to the queue with address pLL. 
/////////////////////////////////////////////////////////    This new element will contain the value n in the n field.  
int queue_push(struct queue *pLL, int n)               //
{
	 
    struct TT   *p     = malloc(sizeof(struct TT) ),  
                *pRev;
	
    p -> n     = n;
    p -> pNext = 0;

	  
    if(pLL -> nCounter ++ == 0) {                      //                First the comparison, and then the increment. 
       pLL -> pHead       =  p; 
       pLL -> pTail       =  p;
       
       return 1;
    }
      
    pRev = pLL   -> pTail;
    pRev-> pNext  = p;   
    pLL -> pTail  = p; 

return 2;       
}


//  
/////////////////////////////////////////////////////////
int queue_pop(struct queue *pLL)                       //
{
    
    if(pLL -> nCounter == 0) return 0;  
    
    
    
    struct TT *p = pLL->pHead;     
                   pLL->pHead = p->pNext; 
    
          int  n = p->n;                               //     We save the contents of the element before deleting it.
            
    pLL -> nCounter -- ;                               //                       The decrement of the element counter.
                              
    free(p);                                           //                                  Deletes the first element.
                                      
return n;                                              //                  Returns the contents of the first element.   
}




//                                                       This function is only needed during the list testing period.
////////////////////////////////////////////////////////   The function should print the contents of the n field for 
void queue_Print(struct queue *pLL)                   //                               all elements of the pLL queue.
{

     struct TT   *p = pLL->pHead;
     
     printf("%s\n", pLL->szNote);
     printf("There are %d elements in this queue:\n", pLL->nCounter);
     
     while(p != 0)
     {
         printf("%d, ", p->n);   p = p->pNext;  
     }   printf("\n"        );

}







