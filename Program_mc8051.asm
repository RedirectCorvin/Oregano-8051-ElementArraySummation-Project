
        ORG 0000H        
        MOV DPTR, #0012H  
        MOV R0, #05H      
        MOV R1, #00H     
SUM_LOOP:
        CLR A             
        MOVC A, @A+DPTR   
        ADD A, R1        
        MOV R1, A        
        INC DPTR          
        DJNZ R0, SUM_LOOP 
        MOV 40H, R1       
        MOV P1, 40H       
HERE:
        SJMP HERE        
        ORG 0012H
        DB 05H, 0AH, 0FH, 14H, 19H
        END