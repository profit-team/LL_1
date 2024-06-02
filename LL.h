

//  2 June 2024 (19:23)
//  Developers: Vladimir Starostin and Dmitry Sobolev
//  In this file we call a linked list: a queue and an array.
//  In the C language, it is required to use the struct keyword before declaring a structure variable.

#include        <stdio.h>
#include       <stdlib.h>
#include       <string.h>


                                                      //         This structure describes an element of a linked list. 
                                                      //          It is these elements that the queue will consist of.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
struct TT
{
                                                      //            User information. An integer or the address of a 
      int        n;                                   //                               variable of any type (32 bits).
                                                      //          
                                                           
struct TT   *pNext;                                   //             A pointer to the next element of the queue list.
             
};






                                                      //          And this structure describes the linked list itself.    
                                                      //                    Like an array of TT elements (linked list).
///////////////////////////////////////////////// We will be able to create many queues (elements of the LL structure).
struct LL
{
        
struct TT     *pHead;                                 //        Head of the queue. A pointer to its first element (TT).
struct TT     *pTail;                                 //               Tail of the queue. Pointer to the last element.
       
      int   nCounter;                                 //                           Number of TT elements in the queue.
      
     char szNote[28];                                 //                                            Short description.
};






int LL_push(struct LL *pLL, int n);                   //      A prototype of a function that will add a new TT element 
                                                      //                                   to the queue with address p.             
                                                      //      This new element will contain the value n in the n field.



////////////////////////////////////////////////////////    The function should print the contents of the n field for 
void LL_Print(struct LL *pLL);                        //                                all elements of the pLL queue.

















