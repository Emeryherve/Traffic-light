#include "p16f877a.inc"


    STATUS equ 03h  
 
    RP0 equ 05 
    RP1 equ 06 
    PORTB equ 06h 
    PORTC equ 07h 
    TRISB equ 86h 
    TRISC equ 87h 


    COUNTER equ 20h 
    org 00h  
    clrw  
    
    
    BCF STATUS,RP0
    BCF STATUS,RP1
    ;SWITCH TO BANK 1
    BSF STATUS,RP0
    
    CLRF PORTB
    CLRF PORTC
    
    
    CLRF TRISB
    CLRF TRISC
    
    ;SET PORT DIRECTION
    MOVLW 0X00 
    MOVWF TRISB
    MOVLW 0X00
    MOVWF TRISC
    
    ;RETURN TO BANK 0
    BCF STATUS,RP0 
    
    
    START MOVLW b'10001010' ; 
     MOVWF PORTB 
     
     MOVLW b'00001000'
     MOVWF PORTC
     
     MOVLW 0xff
     MOVWF COUNT
     
     
     
     OP1 DECFSZ COUNT,1 
      GOTO OP1
      
      MOVLW b'01001001' 
      MOVWF PORTB
      
      MOVLW b'0000100'
      MOVWF PORTC
      
      
      MOVLW 0xff
      MOVWF COUNT
      
      
     OP2 DECFSZ COUNT,1 ;
      GOTO OP2
      
      MOVLW b'10001001' 
      MOVWF PORTB 
      
      MOVLW b'01001000'
      MOVWF PORTC
      
      
      MOVLW 0xff
      MOVWF COUNT
     
     OP3 DECFSZ COUNT,1 ;
      GOTO OP3 
      
      MOVLW b'00100100' 
      MOVWF PORTB 
     
      MOVLW b'00010011'
      MOVWF PORTC
      
      MOVLW 0xff
      MOVWF COUNT
      
      GOTO START
    
end