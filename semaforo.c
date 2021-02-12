/*
 * File:   semaforo.c
 * Author: 20185189
 *
 * Created on 4 de Fevereiro de 2021, 15:06
 */

#include "config.h"
#include "delay.h"
#include <xc.h>

 void semaforo_init (void)
    {
        TRISDbits.TRISD1 = 1;   
        TRISDbits.TRISD3 = 0;
        TRISDbits.TRISD4 = 0;
        TRISDbits.TRISD5 = 0;
        TRISDbits.TRISD6 = 0;
        TRISDbits.TRISD7 = 0;
 
        PORTDbits.RD4 = 0;
        PORTDbits.RD3 = 0;
        PORTDbits.RD5 = 0;
        PORTDbits.RD6 = 0;
        PORTDbits.RD7 = 0;
    }
 
    int btPedrestre(void)
    {
    return(PORTDbits.RD1);
    }

    void vermelho(int t)
    {
        PORTDbits.RD7 = 1;
        PORTDbits.RD6 = 0;
        PORTDbits.RD5 = 0;
        PORTDbits.RD4 = 0;
        delay(t);
    }

    void amarelo(int t)
    {
        PORTDbits.RD7 = 0;
        PORTDbits.RD6 = 1;
        PORTDbits.RD5 = 0;
        PORTDbits.RD3 = 0;
        delay(t);
    }

    void verde(void)
    {
        PORTDbits.RD7 = 0;
        PORTDbits.RD6 = 0;
        PORTDbits.RD5 = 1;
        PORTDbits.RD3 = 0;
    }
    
    void verde_ped (void)
    {
        PORTDbits.RD7 = 0;
        PORTDbits.RD6 = 0;
        PORTDbits.RD5 = 0;
        PORTDbits.RD4 = 0;
        PORTDbits.RD3 = 1;
    }
    
        void vermelho_ped (void)
    {
        PORTDbits.RD7 = 0;
        PORTDbits.RD6 = 0;
        PORTDbits.RD4 = 1;
        PORTDbits.RD3 = 0;
    }

    