



#include          "LL.h"




                                            //   The function will add a new TT element to the queue with address pLL. 
////////////////////////////////////////////////////////     This new element will contain the value n in the n field.  
int LL_push(struct LL *pLL, int n)                     //
{
	 
    struct TT   *p = malloc(sizeof(struct TT) );  
    struct TT   *pRev;
	
    p -> n     = n;
    p -> pNext = 0;
	  
    if(pLL -> nCounter == 0) 
    { 
       pLL -> pHead = p; 
       pLL -> pTail = p;
       pLL -> nCounter ++; 
       
       return 1;
    }
      
    pRev = pLL   -> pTail;
    pRev-> pNext  = p;   
    pLL -> pTail  = p; 
    pLL -> nCounter ++;    

return 1;       
}




//                                                       This function is only needed during the list testing period.
////////////////////////////////////////////////////////   The function should print the contents of the n field for 
void LL_Print(struct LL *pLL)                         //                               all elements of the pLL queue.
{

     struct TT   *p = pLL->pHead;
     
     printf("%s\n", pLL->szNote);
     printf("There are %d elements in this queue:\n", pLL->nCounter);
     
     while(p != 0)
     {
         printf("%d, ", p->n);   p = p->pNext;  
     }   printf("\n"        );

}









