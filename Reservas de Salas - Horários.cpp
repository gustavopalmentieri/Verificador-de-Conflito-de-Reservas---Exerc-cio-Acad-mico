#include <stdio.h>

int main (){
	
	float hora_inicial, hora_final, hora_inicial_2, 
	      hora_final_2, hora_inicial_3, hora_final_3;
	
	
	printf (" ---------------> Reserva de Salas - Horarios <----------------\n");
	
	
	printf ("\n ------------ Primeira Reserva ------------\n");

  /*Solicitar ao primeiro usu�rio a hora da reserva*/

    printf ("\nDigite a hora da sua reserva: ");
    scanf ("%f", &hora_inicial);
   
  /*Solicitar a hora final da reserva do primeiro usu�rio*/
  
    printf ("Digite a hora final da sua reserva: ");
    scanf ("%f", &hora_final);
  

    printf ("\n ------------ Segunda Reserva ------------\n");
   
  /*Solicitar ao segundo usu�rio a hora da reserva*/
  
    printf ("\nDigite a hora da sua reserva: ");
    scanf ("%f", &hora_inicial_2);
  
  /*Solicitar a hora final da reserva do segundo usu�rio*/
  
    printf ("Digite a hora final da sua reserva: ");
    scanf ("%f", &hora_final_2);
    
     printf ("\n ------------ Terceira Reserva ------------\n");
   
  /*Solicitar ao terceiro usu�rio a hora da reserva*/
  
    printf ("\nDigite a hora da sua reserva: ");
    scanf ("%f", &hora_inicial_3);
  
  /*Solicitar a hora final da reserva do terceiro usu�rio*/
  
    printf ("Digite a hora final da sua reserva: ");
    scanf ("%f", &hora_final_3);

  /*Verifica��o se n�o h� conflito entre os hor�rios*/
  
  /* Foram utilizados dois par�nteses, pois se n�o o "&&"
     seria processado primeiro e no caso  o ou "||" era
     necessario ser processado primeiro*/
  
    if ((hora_final <= hora_inicial_2 || hora_final_2 <= hora_inicial) &&
	    (hora_final <= hora_inicial_3 || hora_final_3 <= hora_inicial) &&
		(hora_final_2 <= hora_inicial_3 || hora_final_3 <= hora_inicial_2)){
			
    	printf ("\nNao ha conflito entre os horarios. Reserva efetuada!!\n");
	} else{
		printf ("\nExiste conflito nos horarios. Reserva nao efetuada!!\n");
	}
	
 



	return 0;
}

