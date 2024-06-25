



#include          "LL.h"



struct info LL_info;



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
    
          int  n = p->n;                               //      We save the contents of the element before deleting it.
            
    pLL -> nCounter -- ;                               //                        The decrement of the element counter.
                              
    free(p);                                           //                                   Deletes the first element.
                                      
return n;                                              //                   Returns the contents of the first element.   
}




   
/////////////////////////////////////////////////////////
int queue_empty(struct queue *pLL)                     //
{
    if(pLL->nCounter != 0) return  1; 
                           return  0;    
}



   
/////////////////////////////////////////////////////////
int queue_size(struct queue *pLL)                      //
{
    
    return pLL->nCounter;    
}




/////////////////////////////////////////////////////////
struct TT*  queue_back(struct queue *pLL)              //
{
	
       return pLL->pTail;	
}




/////////////////////////////////////////////////////////
struct TT*  queue_front(struct queue *pLL)             //
{
	
       return pLL->pHead;	
}





/////////////////////////////////////////////////////////
int* queue_get(struct queue *pLL, int i)               //
{
	
     int nCount = 0;
	
     struct TT   *p = pLL->pHead;
     
     while(p != 0)
     {
	    if(i == nCount) return &(p->n);
	            nCount ++;   p = p->pNext; 
     }
     
return 0;     
}





//                                                        This function is only needed during the list testing period.
////////////////////////////////////////////////////////    The function should print the contents of the n field for 
void queue_monitor(struct queue *pLL)                 //                                all elements of the pLL queue.
{

     int     nSum   = 0,
             nFlag  = 0,
             nCount = 0;

     LL_info.sz1[0] = 0;
     LL_info.sz2[0] = 0;
     LL_info.sz3[0] = 0; 
     LL_info.sz4[0] = 0;          
     
     char    sz[81]    , 
           *psz     = LL_info.sz3;
     
     struct TT   *p = pLL->pHead;
     
     sprintf(LL_info.sz1, "Short description: \"%s\"           \n", pLL->szNote  );
     
     while(p != 0)
     {
         sprintf(sz, "%d, ", p->n);   
         
         nSum  = strlen( sz);
         nSum += strlen(psz);
         
         if(nSum > 80)   
         {
               if(nFlag != 0)  goto L_01; 
                  nFlag  = 1;
                  
               psz = LL_info.sz4;   
         }
         strcat(psz, sz);
         
         p = p->pNext;  
         
         nCount ++; 
     }   
     
         sprintf(LL_info.sz2, "There are %d elements in this queue:\n"     , pLL->nCounter);  return;
L_01:    sprintf(LL_info.sz2, "%d elements out of %d are shown: \n", nCount, pLL->nCounter);  return; 
}


















 //  sprintf(Cinfo.sz2, "There are %d elements in this queue:\n", pLL->nCounter);
          //  printf("p->n = %d\n", p->n); 
            

