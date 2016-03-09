/* 
**  Font data for Arial 11pt
*/
#include "ets_sys.h"
#include "osapi.h"
#include "fonts.h"

/* Character bitmaps for Arial 11pt */
const uint8_t arial_11pt_bitmaps[] = 
{
        /* @0 ' ' (1 pixels wide) */
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  

        /* @15 '!' (1 pixels wide) */
        0x00, //  
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x00, //  
        0x80, // #
        0x00, //  
        0x00, //  
        0x00, //  

        /* @30 '"' (3 pixels wide) */
        0x00, //    
        0xA0, // # #
        0xA0, // # #
        0x00, //    
        0x00, //    
        0x00, //    
        0x00, //    
        0x00, //    
        0x00, //    
        0x00, //    
        0x00, //    
        0x00, //    
        0x00, //    
        0x00, //    
        0x00, //    

        /* @45 '#' (8 pixels wide) */
        0x00, //         
        0x00, //         
        0x00, //         
        0x00, //         
        0xFF, // ########
        0x00, //         
        0x00, //         
        0x00, //         
        0xFF, // ########
        0x00, //         
        0x00, //         
        0x00, //         
        0x00, //         
        0x00, //         
        0x00, //         

        /* @60 '$' (4 pixels wide) */
        0x80, // #   
        0x80, // #   
        0x80, // #   
        0x80, // #   
        0x80, // #   
        0x80, // #   
        0x80, // #   
        0x80, // #   
        0x90, // #  #
        0x80, // #   
        0x80, // #   
        0x80, // #   
        0x80, // #   
        0x00, //     
        0x00, //     

        /* @75 '%' (11 pixels wide) */
        0x00, 0x00, //            
        0x00, 0x00, //            
        0x00, 0x00, //            
        0x90, 0x00, // #  #       
        0x90, 0x00, // #  #       
        0x00, 0x00, //            
        0x00, 0x00, //            
        0x00, 0x00, //            
        0x01, 0x20, //        #  #
        0x01, 0x20, //        #  #
        0x00, 0x00, //            
        0x00, 0x00, //            
        0x00, 0x00, //            
        0x00, 0x00, //            
        0x00, 0x00, //            

        /* @105 '&' (1 pixels wide) */
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  

        /* @120 ''' (1 pixels wide) */
        0x00, //  
        0x80, // #
        0x80, // #
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  

        /* @135 '(' (1 pixels wide) */
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  

        /* @150 ')' (1 pixels wide) */
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  

        /* @165 '*' (1 pixels wide) */
        0x00, //  
        0x00, //  
        0x00, //  
        0x80, // #
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  

        /* @180 '+' (7 pixels wide) */
        0x00, //        
        0x00, //        
        0x00, //        
        0x10, //    #   
        0x10, //    #   
        0x10, //    #   
        0xFE, // #######
        0x10, //    #   
        0x10, //    #   
        0x10, //    #   
        0x00, //        
        0x00, //        
        0x00, //        
        0x00, //        
        0x00, //        

        /* @195 ',' (1 pixels wide) */
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x80, // #
        0x00, //  
        0x00, //  
        0x00, //  

        /* @210 '-' (4 pixels wide) */
        0x00, //     
        0x00, //     
        0x00, //     
        0x00, //     
        0x00, //     
        0x00, //     
        0x00, //     
        0x00, //     
        0xF0, // ####
        0x00, //     
        0x00, //     
        0x00, //     
        0x00, //     
        0x00, //     
        0x00, //     

        /* @225 '.' (1 pixels wide) */
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x80, // #
        0x00, //  
        0x00, //  
        0x00, //  

        /* @240 '/' (1 pixels wide) */
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  

        /* @255 '0' (1 pixels wide) */
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x80, // #
        0x80, // #
        0x80, // #
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  

        /* @270 '1' (1 pixels wide) */
        0x00, //  
        0x00, //  
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x00, //  
        0x00, //  
        0x00, //  

        /* @285 '2' (5 pixels wide) */
        0x00, //      
        0x00, //      
        0x00, //      
        0x00, //      
        0x00, //      
        0x00, //      
        0x00, //      
        0x00, //      
        0x00, //      
        0x00, //      
        0x00, //      
        0xF8, // #####
        0x00, //      
        0x00, //      
        0x00, //      

        /* @300 '3' (1 pixels wide) */
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  

        /* @315 '4' (7 pixels wide) */
        0x00, //        
        0x04, //      # 
        0x04, //      # 
        0x04, //      # 
        0x04, //      # 
        0x04, //      # 
        0x04, //      # 
        0x04, //      # 
        0xFE, // #######
        0x04, //      # 
        0x04, //      # 
        0x04, //      # 
        0x00, //        
        0x00, //        
        0x00, //        

        /* @330 '5' (5 pixels wide) */
        0x00, //      
        0xF8, // #####
        0x00, //      
        0x00, //      
        0x00, //      
        0x00, //      
        0x00, //      
        0x00, //      
        0x00, //      
        0x00, //      
        0x00, //      
        0x00, //      
        0x00, //      
        0x00, //      
        0x00, //      

        /* @345 '6' (1 pixels wide) */
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  

        /* @360 '7' (5 pixels wide) */
        0x00, //      
        0xF8, // #####
        0x00, //      
        0x00, //      
        0x00, //      
        0x00, //      
        0x00, //      
        0x00, //      
        0x00, //      
        0x00, //      
        0x00, //      
        0x00, //      
        0x00, //      
        0x00, //      
        0x00, //      

        /* @375 '8' (2 pixels wide) */
        0x00, //   
        0x00, //   
        0x00, //   
        0x00, //   
        0x00, //   
        0x00, //   
        0xC0, // ##
        0x00, //   
        0x00, //   
        0x00, //   
        0x00, //   
        0x00, //   
        0x00, //   
        0x00, //   
        0x00, //   

        /* @390 '9' (1 pixels wide) */
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x80, // #
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  

        /* @405 ':' (1 pixels wide) */
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x80, // #
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x80, // #
        0x00, //  
        0x00, //  
        0x00, //  

        /* @420 ';' (1 pixels wide) */
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x80, // #
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x80, // #
        0x00, //  
        0x00, //  
        0x00, //  

        /* @435 '<' (1 pixels wide) */
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x80, // #
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  

        /* @450 '=' (7 pixels wide) */
        0x00, //        
        0x00, //        
        0x00, //        
        0x00, //        
        0xFE, // #######
        0x00, //        
        0x00, //        
        0x00, //        
        0xFE, // #######
        0x00, //        
        0x00, //        
        0x00, //        
        0x00, //        
        0x00, //        
        0x00, //        

        /* @465 '>' (1 pixels wide) */
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x80, // #
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  

        /* @480 '?' (1 pixels wide) */
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x80, // #
        0x00, //  
        0x00, //  
        0x00, //  

        /* @495 '@' (1 pixels wide) */
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x80, // #
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  

        /* @510 'A' (5 pixels wide) */
        0x00, //      
        0x20, //   #  
        0x00, //      
        0x00, //      
        0x00, //      
        0x00, //      
        0x00, //      
        0x00, //      
        0xF8, // #####
        0x00, //      
        0x00, //      
        0x00, //      
        0x00, //      
        0x00, //      
        0x00, //      

        /* @525 'B' (6 pixels wide) */
        0x00, //       
        0xF0, // ####  
        0x80, // #     
        0x80, // #     
        0x80, // #     
        0x80, // #     
        0xFC, // ######
        0x80, // #     
        0x80, // #     
        0x80, // #     
        0x80, // #     
        0xF0, // ####  
        0x00, //       
        0x00, //       
        0x00, //       

        /* @540 'C' (1 pixels wide) */
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  

        /* @555 'D' (9 pixels wide) */
        0x00, 0x00, //          
        0xFC, 0x00, // ######   
        0x80, 0x00, // #        
        0x80, 0x00, // #        
        0x80, 0x80, // #       #
        0x80, 0x80, // #       #
        0x80, 0x80, // #       #
        0x80, 0x80, // #       #
        0x80, 0x80, // #       #
        0x80, 0x00, // #        
        0x80, 0x00, // #        
        0xFC, 0x00, // ######   
        0x00, 0x00, //          
        0x00, 0x00, //          
        0x00, 0x00, //          

        /* @585 'E' (8 pixels wide) */
        0x00, //         
        0xFF, // ########
        0x80, // #       
        0x80, // #       
        0x80, // #       
        0x80, // #       
        0xFF, // ########
        0x80, // #       
        0x80, // #       
        0x80, // #       
        0x80, // #       
        0xFF, // ########
        0x00, //         
        0x00, //         
        0x00, //         

        /* @600 'F' (7 pixels wide) */
        0x00, //        
        0xFE, // #######
        0x80, // #      
        0x80, // #      
        0x80, // #      
        0x80, // #      
        0xFC, // ###### 
        0x80, // #      
        0x80, // #      
        0x80, // #      
        0x80, // #      
        0x80, // #      
        0x00, //        
        0x00, //        
        0x00, //        

        /* @615 'G' (9 pixels wide) */
        0x00, 0x00, //          
        0x1C, 0x00, //    ###   
        0x00, 0x00, //          
        0x00, 0x00, //          
        0x80, 0x00, // #        
        0x80, 0x00, // #        
        0x87, 0x80, // #    ####
        0x80, 0x80, // #       #
        0x80, 0x80, // #       #
        0x00, 0x00, //          
        0x00, 0x00, //          
        0x1C, 0x00, //    ###   
        0x00, 0x00, //          
        0x00, 0x00, //          
        0x00, 0x00, //          

        /* @645 'H' (8 pixels wide) */
        0x00, //         
        0x81, // #      #
        0x81, // #      #
        0x81, // #      #
        0x81, // #      #
        0x81, // #      #
        0xFF, // ########
        0x81, // #      #
        0x81, // #      #
        0x81, // #      #
        0x81, // #      #
        0x81, // #      #
        0x00, //         
        0x00, //         
        0x00, //         

        /* @660 'I' (1 pixels wide) */
        0x00, //  
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x00, //  
        0x00, //  
        0x00, //  

        /* @675 'J' (1 pixels wide) */
        0x00, //  
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  

        /* @690 'K' (1 pixels wide) */
        0x00, //  
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x00, //  
        0x00, //  
        0x00, //  

        /* @705 'L' (7 pixels wide) */
        0x00, //        
        0x80, // #      
        0x80, // #      
        0x80, // #      
        0x80, // #      
        0x80, // #      
        0x80, // #      
        0x80, // #      
        0x80, // #      
        0x80, // #      
        0x80, // #      
        0xFE, // #######
        0x00, //        
        0x00, //        
        0x00, //        

        /* @720 'M' (9 pixels wide) */
        0x00, 0x00, //          
        0x00, 0x00, //          
        0x80, 0x80, // #       #
        0x80, 0x80, // #       #
        0x80, 0x80, // #       #
        0x80, 0x80, // #       #
        0x80, 0x80, // #       #
        0x80, 0x80, // #       #
        0x80, 0x80, // #       #
        0x80, 0x80, // #       #
        0x80, 0x80, // #       #
        0x80, 0x80, // #       #
        0x00, 0x00, //          
        0x00, 0x00, //          
        0x00, 0x00, //          

        /* @750 'N' (8 pixels wide) */
        0x00, //         
        0x81, // #      #
        0x81, // #      #
        0x81, // #      #
        0x81, // #      #
        0x81, // #      #
        0x81, // #      #
        0x81, // #      #
        0x81, // #      #
        0x81, // #      #
        0x81, // #      #
        0x81, // #      #
        0x00, //         
        0x00, //         
        0x00, //         

        /* @765 'O' (1 pixels wide) */
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  

        /* @780 'P' (4 pixels wide) */
        0x00, //     
        0xF0, // ####
        0x80, // #   
        0x80, // #   
        0x80, // #   
        0x80, // #   
        0xF0, // ####
        0x80, // #   
        0x80, // #   
        0x80, // #   
        0x80, // #   
        0x80, // #   
        0x00, //     
        0x00, //     
        0x00, //     

        /* @795 'Q' (1 pixels wide) */
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  

        /* @810 'R' (5 pixels wide) */
        0x00, //      
        0xF8, // #####
        0x80, // #    
        0x80, // #    
        0x80, // #    
        0x80, // #    
        0xF8, // #####
        0x80, // #    
        0x80, // #    
        0x80, // #    
        0x80, // #    
        0x80, // #    
        0x00, //      
        0x00, //      
        0x00, //      

        /* @825 'S' (5 pixels wide) */
        0x00, //      
        0x00, //      
        0x00, //      
        0x00, //      
        0x00, //      
        0x80, // #    
        0x08, //     #
        0x00, //      
        0x00, //      
        0x00, //      
        0x00, //      
        0x00, //      
        0x00, //      
        0x00, //      
        0x00, //      

        /* @840 'T' (9 pixels wide) */
        0x00, 0x00, //          
        0xFF, 0x80, // #########
        0x08, 0x00, //     #    
        0x08, 0x00, //     #    
        0x08, 0x00, //     #    
        0x08, 0x00, //     #    
        0x08, 0x00, //     #    
        0x08, 0x00, //     #    
        0x08, 0x00, //     #    
        0x08, 0x00, //     #    
        0x08, 0x00, //     #    
        0x08, 0x00, //     #    
        0x00, 0x00, //          
        0x00, 0x00, //          
        0x00, 0x00, //          

        /* @870 'U' (8 pixels wide) */
        0x00, //         
        0x81, // #      #
        0x81, // #      #
        0x81, // #      #
        0x81, // #      #
        0x81, // #      #
        0x81, // #      #
        0x00, //         
        0x00, //         
        0x00, //         
        0x00, //         
        0x00, //         
        0x00, //         
        0x00, //         
        0x00, //         

        /* @885 'V' (1 pixels wide) */
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  

        /* @900 'W' (1 pixels wide) */
        0x00, //  
        0x80, // #
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  

        /* @915 'X' (1 pixels wide) */
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x80, // #
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  

        /* @930 'Y' (1 pixels wide) */
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x00, //  
        0x00, //  
        0x00, //  

        /* @945 'Z' (7 pixels wide) */
        0x00, //        
        0xFC, // ###### 
        0x00, //        
        0x00, //        
        0x00, //        
        0x00, //        
        0x00, //        
        0x00, //        
        0x00, //        
        0x00, //        
        0x00, //        
        0xFE, // #######
        0x00, //        
        0x00, //        
        0x00, //        

        /* @960 '[' (3 pixels wide) */
        0x00, //    
        0xE0, // ###
        0x80, // #  
        0x80, // #  
        0x80, // #  
        0x80, // #  
        0x80, // #  
        0x80, // #  
        0x80, // #  
        0x80, // #  
        0x80, // #  
        0x80, // #  
        0x80, // #  
        0x80, // #  
        0xE0, // ###

        /* @975 '\' (1 pixels wide) */
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  

        /* @990 ']' (3 pixels wide) */
        0x00, //    
        0xE0, // ###
        0x20, //   #
        0x20, //   #
        0x20, //   #
        0x20, //   #
        0x20, //   #
        0x20, //   #
        0x20, //   #
        0x20, //   #
        0x20, //   #
        0x20, //   #
        0x20, //   #
        0x20, //   #
        0xE0, // ###

        /* @1005 '^' (1 pixels wide) */
        0x00, //  
        0x80, // #
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  

        /* @1020 '_' (8 pixels wide) */
        0x00, //         
        0x00, //         
        0x00, //         
        0x00, //         
        0x00, //         
        0x00, //         
        0x00, //         
        0x00, //         
        0x00, //         
        0x00, //         
        0x00, //         
        0x00, //         
        0x00, //         
        0x00, //         
        0xFF, // ########

        /* @1035 '`' (1 pixels wide) */
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  

        /* @1050 'a' (1 pixels wide) */
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x00, //  
        0x00, //  
        0x00, //  

        /* @1065 'b' (1 pixels wide) */
        0x00, //  
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x00, //  
        0x00, //  
        0x00, //  

        /* @1080 'c' (1 pixels wide) */
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  

        /* @1095 'd' (1 pixels wide) */
        0x00, //  
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x00, //  
        0x00, //  
        0x00, //  

        /* @1110 'e' (4 pixels wide) */
        0x00, //     
        0x00, //     
        0x00, //     
        0x00, //     
        0x00, //     
        0x00, //     
        0x00, //     
        0xF0, // ####
        0x00, //     
        0x00, //     
        0x00, //     
        0x00, //     
        0x00, //     
        0x00, //     
        0x00, //     

        /* @1125 'f' (4 pixels wide) */
        0x00, //     
        0x00, //     
        0x00, //     
        0x40, //  #  
        0xF0, // ####
        0x40, //  #  
        0x40, //  #  
        0x40, //  #  
        0x40, //  #  
        0x40, //  #  
        0x40, //  #  
        0x40, //  #  
        0x00, //     
        0x00, //     
        0x00, //     

        /* @1140 'g' (1 pixels wide) */
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  

        /* @1155 'h' (6 pixels wide) */
        0x00, //       
        0x80, // #     
        0x80, // #     
        0x80, // #     
        0x80, // #     
        0x80, // #     
        0x84, // #    #
        0x84, // #    #
        0x84, // #    #
        0x84, // #    #
        0x84, // #    #
        0x84, // #    #
        0x00, //       
        0x00, //       
        0x00, //       

        /* @1170 'i' (1 pixels wide) */
        0x00, //  
        0x80, // #
        0x00, //  
        0x00, //  
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x00, //  
        0x00, //  
        0x00, //  

        /* @1185 'j' (1 pixels wide) */
        0x00, //  
        0x80, // #
        0x00, //  
        0x00, //  
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x00, //  
        0x00, //  

        /* @1200 'k' (1 pixels wide) */
        0x00, //  
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x00, //  
        0x00, //  
        0x00, //  

        /* @1215 'l' (1 pixels wide) */
        0x00, //  
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x00, //  
        0x00, //  
        0x00, //  

        /* @1230 'm' (11 pixels wide) */
        0x00, 0x00, //            
        0x00, 0x00, //            
        0x00, 0x00, //            
        0x00, 0x00, //            
        0x80, 0x00, // #          
        0x80, 0x00, // #          
        0x84, 0x20, // #    #    #
        0x84, 0x20, // #    #    #
        0x84, 0x20, // #    #    #
        0x84, 0x20, // #    #    #
        0x84, 0x20, // #    #    #
        0x84, 0x20, // #    #    #
        0x00, 0x00, //            
        0x00, 0x00, //            
        0x00, 0x00, //            

        /* @1260 'n' (6 pixels wide) */
        0x00, //       
        0x00, //       
        0x00, //       
        0x00, //       
        0x80, // #     
        0x80, // #     
        0x84, // #    #
        0x84, // #    #
        0x84, // #    #
        0x84, // #    #
        0x84, // #    #
        0x84, // #    #
        0x00, //       
        0x00, //       
        0x00, //       

        /* @1275 'o' (1 pixels wide) */
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x80, // #
        0x80, // #
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  

        /* @1290 'p' (1 pixels wide) */
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #

        /* @1305 'q' (1 pixels wide) */
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #

        /* @1320 'r' (1 pixels wide) */
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x00, //  
        0x00, //  
        0x00, //  

        /* @1335 's' (5 pixels wide) */
        0x00, //      
        0x00, //      
        0x00, //      
        0x00, //      
        0x40, //  #   
        0x00, //      
        0x00, //      
        0x80, // #    
        0x00, //      
        0x08, //     #
        0x00, //      
        0x20, //   #  
        0x00, //      
        0x00, //      
        0x00, //      

        /* @1350 't' (4 pixels wide) */
        0x00, //     
        0x00, //     
        0x40, //  #  
        0x40, //  #  
        0xF0, // ####
        0x40, //  #  
        0x40, //  #  
        0x40, //  #  
        0x40, //  #  
        0x40, //  #  
        0x00, //     
        0x00, //     
        0x00, //     
        0x00, //     
        0x00, //     

        /* @1365 'u' (6 pixels wide) */
        0x00, //       
        0x00, //       
        0x00, //       
        0x00, //       
        0x84, // #    #
        0x84, // #    #
        0x84, // #    #
        0x84, // #    #
        0x84, // #    #
        0x84, // #    #
        0x04, //      #
        0x04, //      #
        0x00, //       
        0x00, //       
        0x00, //       

        /* @1380 'v' (1 pixels wide) */
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  

        /* @1395 'w' (1 pixels wide) */
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x80, // #
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  

        /* @1410 'x' (1 pixels wide) */
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  

        /* @1425 'y' (1 pixels wide) */
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x80, // #
        0x00, //  
        0x00, //  
        0x00, //  

        /* @1440 'z' (6 pixels wide) */
        0x00, //       
        0x00, //       
        0x00, //       
        0x00, //       
        0xF8, // ##### 
        0x00, //       
        0x00, //       
        0x00, //       
        0x00, //       
        0x00, //       
        0x00, //       
        0x7C, //  #####
        0x00, //       
        0x00, //       
        0x00, //       

        /* @1455 '{' (3 pixels wide) */
        0x00, //    
        0x00, //    
        0x00, //    
        0x20, //   #
        0x00, //    
        0x00, //    
        0x00, //    
        0x00, //    
        0x80, // #  
        0x00, //    
        0x00, //    
        0x00, //    
        0x00, //    
        0x00, //    
        0x00, //    

        /* @1470 '|' (1 pixels wide) */
        0x00, //  
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #

        /* @1485 '}' (3 pixels wide) */
        0x00, //    
        0x00, //    
        0x00, //    
        0x00, //    
        0x00, //    
        0x00, //    
        0x00, //    
        0x00, //    
        0x20, //   #
        0x00, //    
        0x00, //    
        0x80, // #  
        0x80, // #  
        0x00, //    
        0x00, //    

        /* @1500 '~' (1 pixels wide) */
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
        0x00, //  
};

/* Character descriptors for Arial 11pt */
/* { [Char width in bits], [Offset into arial_11ptCharBitmaps in bytes] } */
const font_char_desc_t arial_11pt_descriptors[] = 
{
        {1, 0},                 /*   */ 
        {1, 15},                /* ! */ 
        {3, 30},                /* " */ 
        {8, 45},                /* # */ 
        {4, 60},                /* $ */ 
        {11, 75},               /* % */ 
        {1, 105},               /* & */ 
        {1, 120},               /* ' */ 
        {1, 135},               /* ( */ 
        {1, 150},               /* ) */ 
        {1, 165},               /* * */ 
        {7, 180},               /* + */ 
        {1, 195},               /* , */ 
        {4, 210},               /* - */ 
        {1, 225},               /* . */ 
        {1, 240},               /* / */ 
        {1, 255},               /* 0 */ 
        {1, 270},               /* 1 */ 
        {5, 285},               /* 2 */ 
        {1, 300},               /* 3 */ 
        {7, 315},               /* 4 */ 
        {5, 330},               /* 5 */ 
        {1, 345},               /* 6 */ 
        {5, 360},               /* 7 */ 
        {2, 375},               /* 8 */ 
        {1, 390},               /* 9 */ 
        {1, 405},               /* : */ 
        {1, 420},               /* ; */ 
        {1, 435},               /* < */ 
        {7, 450},               /* = */ 
        {1, 465},               /* > */ 
        {1, 480},               /* ? */ 
        {1, 495},               /* @ */ 
        {5, 510},               /* A */ 
        {6, 525},               /* B */ 
        {1, 540},               /* C */ 
        {9, 555},               /* D */ 
        {8, 585},               /* E */ 
        {7, 600},               /* F */ 
        {9, 615},               /* G */ 
        {8, 645},               /* H */ 
        {1, 660},               /* I */ 
        {1, 675},               /* J */ 
        {1, 690},               /* K */ 
        {7, 705},               /* L */ 
        {9, 720},               /* M */ 
        {8, 750},               /* N */ 
        {1, 765},               /* O */ 
        {4, 780},               /* P */ 
        {1, 795},               /* Q */ 
        {5, 810},               /* R */ 
        {5, 825},               /* S */ 
        {9, 840},               /* T */ 
        {8, 870},               /* U */ 
        {1, 885},               /* V */ 
        {1, 900},               /* W */ 
        {1, 915},               /* X */ 
        {1, 930},               /* Y */ 
        {7, 945},               /* Z */ 
        {3, 960},               /* [ */ 
        {1, 975},               /* \ */ 
        {3, 990},               /* ] */ 
        {1, 1005},              /* ^ */ 
        {8, 1020},              /* _ */ 
        {1, 1035},              /* ` */ 
        {1, 1050},              /* a */ 
        {1, 1065},              /* b */ 
        {1, 1080},              /* c */ 
        {1, 1095},              /* d */ 
        {4, 1110},              /* e */ 
        {4, 1125},              /* f */ 
        {1, 1140},              /* g */ 
        {6, 1155},              /* h */ 
        {1, 1170},              /* i */ 
        {1, 1185},              /* j */ 
        {1, 1200},              /* k */ 
        {1, 1215},              /* l */ 
        {11, 1230},             /* m */ 
        {6, 1260},              /* n */ 
        {1, 1275},              /* o */ 
        {1, 1290},              /* p */ 
        {1, 1305},              /* q */ 
        {1, 1320},              /* r */ 
        {5, 1335},              /* s */ 
        {4, 1350},              /* t */ 
        {6, 1365},              /* u */ 
        {1, 1380},              /* v */ 
        {1, 1395},              /* w */ 
        {1, 1410},              /* x */ 
        {1, 1425},              /* y */ 
        {6, 1440},              /* z */ 
        {3, 1455},              /* { */ 
        {1, 1470},              /* | */ 
        {3, 1485},              /* } */ 
        {1, 1500},              /* ~ */ 
};

/* Font information for Arial 11pt */
const font_info_t arial_11pt_fontInfo =
{
        15, /*  Character height */
        1,   /* C */
        ' ', /*  Start character */
        '~', /*  End character */
        arial_11pt_descriptors, /*  Character descriptor array */
        arial_11pt_bitmaps, /*  Character bitmap array */
};