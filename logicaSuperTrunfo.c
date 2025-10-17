#include <stdio.h>

int main() {

  //carta 1 
  char estado [63] = "riodejaneiro";
  int populaçao = 17;
  float area = 1.200 ;
  float PIB = 359.6;
  int pontosturisticos = 58;
  
  printf ("estado = %s\n populaçao = %d\n", estado , populaçao);
  printf ("area = %.4f\n PIB = %.3f\n" , area , PIB);
  printf ("pontosturisticos = %d\n", pontosturisticos);


   //carta 2 
  char estado2[63]= "saopaulo";
  int populaçao2 = 46;
  float area2 = 248.219;
  float PIB2 =  3.5;
  int pontosturistico2 = 36;
  
  printf ("estado2 = %s\n populaçao2 = %d\n", estado2 , populaçao2);
  printf ("area2 = %.4f\n PIB2 = %.2f\n", area2 , PIB2);
  printf ("pontosturisticos2 = %d\n", pontosturistico2);
 
  if (area > area2)
  {
    printf("o estado 1 e melhor\n");
  } else {
    printf("o estado 2 e melhor\n");
  }
  
  if (populaçao > populaçao2)
  {
    printf("o estado 1 e melhor\n");
  } else {
    printf("o estado 2 e melhor\n");
  }
  if (PIB > PIB2)
  {
    printf("o estado 1 e melhor\n");
  } else {
    printf("o estado 2 e melhor\n");
  }
  if (pontosturisticos > pontosturistico2)
  {
    printf("o estado 1 e melhor\n");
  } else {
    printf("o estado 2 e melhor\n");
  }







}

