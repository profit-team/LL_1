



#include          "LL.h"



struct LL   L_1;


////////////////////////////////////////////////////
int main()                                        // 
{

    strncpy(L_1.szNote, "Like a regular array.", 27); 

    for(int i = 10; i < 31; i++)
    {
        LL_push(&L_1, i); 
    }
    
    printf("The pop function returned: %d\n", LL_pop(&L_1) );
    printf("The pop function returned: %d\n", LL_pop(&L_1) );   
     
    LL_Print(&L_1);	
}












































//			                                                                   (   )       
//													                          (    )
//													                           (    )
//													                          (    )
//			   										                            )  )
//													                           (  (                  /\
//													                            (_)                 /  \  /\
//													                    ________[_]________      /\/    \/  \
//													           /\      /\        ______    \    /   /\/\  /\/\
//													          /  \    //_\       \    /\    \  /\/\/    \/    \
//													   /\    / /\/\  //___\       \__/  \    \/
//													  /  \  /\/    \//_____\       \ |[]|     \
//													 /\/\/\/       //_______\       \|__|      \
//													/      \      /XXXXXXXXXX\                  \
//													        \    /_I_II  I__I_\__________________\
//													               I_I|  I__I_____[]_|_[]_____I
//													               I_II  I__I_____[]_|_[]_____I
//													               I II__I  I     WinLego     I
//					                                             E-mail:    dllbridge@gmail.com









/*

int main(int argc, char *argv[]) 
{
	
	
return 0;
}

*/
