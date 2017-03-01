#include <cstdio>
#include <cstdlib>
int main(){
float A, B, Respuesta;

scanf("%f %f", &A, &B);
Respuesta=(A-B);
Respuesta= Respuesta/A;
printf("%.2f\n", Respuesta);

system("PAUSE");
return 0;
}
