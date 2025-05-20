#include <stdio.h>

int main (){
	
	float hora_inicial, hora_final, hora_inicial_2, 
	      hora_final_2, hora_inicial_3, hora_final_3;
	
	
	printf (" ---------------> Reserva de Salas - Horarios <----------------\n");
	
	
	printf ("\n ------------ Primeira Reserva ------------\n");

  /*Solicitar ao primeiro usuário a hora da reserva*/

    printf ("\nDigite a hora da sua reserva: ");
    scanf ("%f", &hora_inicial);
   
  /*Solicitar a hora final da reserva do primeiro usuário*/
  
    printf ("Digite a hora final da sua reserva: ");
    scanf ("%f", &hora_final);
  

    printf ("\n ------------ Segunda Reserva ------------\n");
   
  /*Solicitar ao segundo usuário a hora da reserva*/
  
    printf ("\nDigite a hora da sua reserva: ");
    scanf ("%f", &hora_inicial_2);
  
  /*Solicitar a hora final da reserva do segundo usuário*/
  
    printf ("Digite a hora final da sua reserva: ");
    scanf ("%f", &hora_final_2);
    
     printf ("\n ------------ Terceira Reserva ------------\n");
   
  /*Solicitar ao terceiro usuário a hora da reserva*/
  
    printf ("\nDigite a hora da sua reserva: ");
    scanf ("%f", &hora_inicial_3);
  
  /*Solicitar a hora final da reserva do terceiro usuário*/
  
    printf ("Digite a hora final da sua reserva: ");
    scanf ("%f", &hora_final_3);

  /*Verificação se não há conflito entre os horários*/
  
  /* Foram utilizados dois parênteses, pois se não o "&&"
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

