



#include          "LL.h"




                                                      //      Функция добавит новый элемент TT в очередь с адресом p.   
////////////////////////////////////////////////////////      Этот новый элемент будет содержать значение n в поле n.
int LL_add(struct LL *pLL, int n)                     //
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
      
  pRev = pLL -> pTail;
    
	pRev-> pNext = p;   
	 
	pLL -> pTail = p; 
	
	pLL -> nCounter ++;    


return 1;       
}


////////////////////////////////////////////////////////  Функция должна распечатать содержимое поля n для всех 
void LL_Print(struct LL *pLL)                         //                                  элементов очереди pLL.
{



}









