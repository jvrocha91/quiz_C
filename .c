#include <stdio.h>
#include <stdlib.h>

//Quiz de conhecimentos gerais


int main() {
    
    int i;
    int ans1 , ans2 , ans3 , ans4, ans5 ;
    int point1,point2,point3,point4,point5,point6,point7,point8,point9,point10;
    int point01,point02,point03,point04,point05,point06,point07,point08,point09,point010;
    int total11,total12,total13;
    
    printf(" Bem vindo ao jogo\n\n");
    
    printf("> Aperte 7 para comecar o jogo\n");
    printf(">Aperte 0 para sair do jogo\n");
    
    scanf("%d", &i);
    
    if(i==7)
    {
        printf("O jogo comecou\n\n");
    }    
        
    else if (i==0)
    {
        printf("O jogo acabou !\n\n");
    }
    else
    {
        printf("Invalido\n\n");
    }
    
    if(i==7)
    {
        printf("1)Qual pais tem a maior populacao do planeta ?\n\n");   
        printf("1)India\n");
        printf("2)USA\n");
        printf("3)China\n");
        printf("4)Russia\n");
        
        printf("Resposta:  ");
        scanf("%d", &ans1);
        
        if(ans1==3)
        {
            printf("Resposta correta !\n");
            point1=5;
            printf("Voce marcou %d pontos \n",point1);
        }
        else
        {
            printf("Resposta errada\n");
            point1=0;
            printf("Voce marcou %d pontos \n",point1);
            
        }

        
        printf("2)Qual civilizacao iniciou a revolucao industrial ?\n\n");   
        printf("1)China\n");
        printf("2)Inglaterra\n");
        printf("3)USA\n");
        printf("4)Japao\n");
        
        printf("Resposta:  ");
        scanf("%d", &ans2);
        
        if(ans2==2)
        {
        printf("Resposta correta !\n");
        point2=5;
        printf("Voce marcou %d pontos \n",point2);
        
        }
        
        else
        {
            printf("Resposta errada\n");
            point2=0;
            printf("Voce marcou %d pontos \n",point2);
            
        }
        
        printf("3)Em qual linguagem foi progamado o jogo Minecraft ?\n\n");   
        printf("1)Python\n");
        printf("2)Unity\n");
        printf("3)Android\n");
        printf("4)Java\n");
        
        printf("Resposta:  ");
        scanf("%d", &ans3);
        
         if(ans3==4)
        {
        printf("Resposta correta !\n");
        point3=5;
        printf("Voce marcou %d pontos \n",point3);
        
        }
        
        else
        {
            printf("Resposta errada\n");
            point3=0;
            printf("Voce marcou %d pontos \n",point3);
            
        }
        
        printf("4)Qual pais sediou a primeira copa do mundo ?\n\n");   
        printf("1)Uruguai\n");
        printf("2)Inglaterra\n");
        printf("3)Italia\n");
        printf("4)Argentina\n");
        
        printf("Resposta:  ");
        scanf("%d", &ans4);
        
        if(ans4==1)
        {
            printf("Resposta correta !\n");
            point4=5;
            printf("Voce marcou %d pontos \n",point4);
        }
        else
        {
            printf("Resposta errada\n");
            point4=0;
            printf("Voce marcou %d pontos \n",point4);
            
        }
        
        printf("5)Em qual linguagem ess codigo foi feito ?\n\n");   
        printf("1)C#\n");
        printf("2)C++\n");
        printf("3)C\n");
        printf("4)CSS\n");
        
        printf("Resposta:  ");
        scanf("%d", &ans5);
        
        if(ans5==3)
        {
            printf("Resposta correta !\n");
            point5=5;
            printf("Voce marcou %d pontos \n",point5);
        }
        else
        {
            printf("Resposta errada\n");
            point5=0;
            printf("Voce marcou %d pontos \n",point5);
            
        }
        
        
    }    
            return 0;
    }