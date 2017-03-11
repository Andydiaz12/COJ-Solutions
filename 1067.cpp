#include <cstdio>
 
 int main(){
 
     int valor = 1, bajos = 0, altos = 0;
     char opcion[10];
     
     while(valor != 0){
                 
                      scanf("%d", &valor);
                      if(valor != 0){
                      getchar();
                      gets(opcion);
                      
                      if(opcion[4] == 'h'){
                                   if(altos == 0)
                                   altos = valor;
                                   else if(valor < altos)
                                   altos = valor;
                                   }
                      else if(opcion[4] == 'l'){
                                   if(bajos == 0)
                                   bajos = valor;
                                   else if(valor > bajos)
                                   bajos = valor;
                                   }
            else if(opcion[0] == 'r'){
                    if(altos == 0){
                    	(valor <= bajos) ?printf("Stan is dishonest\n") : printf("Stan may be honest\n");
					}
										
            		else if(bajos == 0){
            			(valor >= altos)? printf("Stan is dishonest\n") :printf("Stan may be honest\n");
					}
                        
					else if(altos == bajos)
					printf("Stan is dishonest\n");
						          
                   else if(valor >= altos || valor <= bajos) 
												 printf("Stan is dishonest\n");
                                            
                    
					else
                                                 printf("Stan may be honest\n");
                                    
                                        bajos = altos = 0;
                                        }
                           
                           }
                      
                 }
 
     return 0;
 }


