

//  25 June 2024 (14:17)
//  Developers: Vladimir Starostin and Dmitry Sobolev
//  In this file we call a linked list: a queue and an array.
//  In the C language, it is required to use the struct keyword before declaring a structure variable.


#include        <stdio.h>
#include       <stdlib.h>
#include       <string.h>


//  - - - - - - - - - - - - - - -  - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//  This project is compiled into Tiny C Compiler (TCC): https://yadi.sk/d/njkqYATzThqQ9A  
//  After unpacking the archive, you only need to run the "devcppPortable.exe" file.
//
//  Replace tab characters with spaces (1 tab = 8 spaces).
//  The right border is at position 120.
//
//  - - - - - - - - - - - - - - -  - - - - - - - - - - - - - - - - - - - - - - - - - - - - -



////////////////////////////////////////////////////////
struct info                                           //
{
        
       char sz1[81];    
       char sz2[81];        
       char sz3[81];  
       char sz4[81];             
};


extern struct info LL_info;



                                                      //         This structure describes an element of a linked list. 
                                                      //          It is these elements that the queue will consist of.
////////////////////////////////////////////////////////                                                 -------------
struct TT
{
                                                      //             User information. An integer or the address of a 
      int        n;                                   //                               variable of any type (32 bits).
                                                      //          
                                                           
struct TT   *pNext;                                   //              A pointer to the next element of the queue list.
             
};






                                                      //          And this structure describes the linked list itself.    
                                                      //                   Like an array of TT elements (linked list).
////////////////////////////////////////////////////////    We will be able to create many queues (elements of the LL 
struct queue                                          //                                                   structure).  
{
        
struct TT     *pHead;                                 //       Head of the queue. A pointer to its first element (TT).
struct TT     *pTail;                                 //               Tail of the queue. Pointer to the last element.
       
      int   nCounter;                                 //                           Number of TT elements in the queue.
      
     char szNote[28];                                 //                                            Short description.
};






int         queue_push (struct queue *pLL, int n);    //     A prototype of a function that will add a new TT element 
                                                      //                                to the queue with address pLL.
                                                      //     This new element will contain the value n in the n field.
                                                      //                                                 -------------
int         queue_pop  (struct queue *pLL);           //            A function that removes an element from the queue.
int         queue_empty(struct queue *pLL);           //                                           Returns 1 if empty. 
int         queue_size (struct queue *pLL);           //  
                                        
struct TT*  queue_back (struct queue *pLL);           // 
struct TT*  queue_front(struct queue *pLL);           // 

//  -  The functions are designed for convenience  -  //    The function should print the contents of the n field for 
void      queue_monitor(struct queue *pLL);           //                                all elements of the pLL queue.
int*      queue_get    (struct queue *pLL, int i); 
int       queue_clear  (struct queue *pLL);





























// --------------------------------------------------------------

// * * * * * * * * * * * * * * * * * * * * * * * * *  //














