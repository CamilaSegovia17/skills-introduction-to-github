  #include <stdio.h>

  float Nota;
  float SegundaNota;
  float TerceraNota;
  float promedio;
 
 main(){
 	
 	printf("ingrese la primera nota para definirla:");
 	scanf("%f", &Nota);
 	printf("ingrese la segunda nota para definirla:");
 	scanf("%f", &SegundaNota);
 	printf("ingrese la tercera nota para definirla:");
 	scanf("%f", &TerceraNota);
 	
 	promedio=(Nota + SegundaNota + TerceraNota) / 3;
 	printf("promedio: %f", promedio);
 	
 }
