/*
 * File:   main.c
 * Author: 20185189
 *
 * Created on 3 de Fevereiro de 2021, 17:21
 */

#include "semaforo.h"
#include "delay.h"
#include "config.h"
#include <xc.h>

void main (void)
{
    semaforo_init();
    
    while(1)
    {
        vermelho_ped();
        verde();
        
        if(btPedrestre() == 1)
        {   
        delay(5000);
        vermelho_ped();
        amarelo(1000);
        verde_ped();
        vermelho(4000);
        }
    }  
}