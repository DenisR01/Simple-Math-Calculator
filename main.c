//
//  main.c
//  Calculator matematic
//
//  Created by Denis Radulescu on 10/01/2021.
//

#include <stdio.h>
#include <stdlib.h>
int choice,n;
float *v,result=0;
int main(){
    printf("Calculator Matematic\n");
    while(1){
        printf("1.Adunare\n");
        printf("2.Scadere\n");
        printf("3.Inmultire\n");
        printf("4.Impartire\n");
        printf("5.Iesire\n");
        printf("Ce doresti sa efectuezi?");
        scanf("%d",&choice);
        if(choice==5)
            break;
        printf("\nIntrodu numarul de valori\n");scanf("%d",&n);
        printf("\nIntrodu valorile\n");
        v=calloc(n, sizeof(float));
        for(int i=0;i<n;i++){printf("v[%d]=",i);scanf("%f",&v[i]);}
        if(choice==1){for(int i=0;i<n;i++)
            result+=v[i];
        }
        else if(choice==2){result=v[0];
            for(int i=1;i<n;i++)
        result-=v[i];}
        else if(choice==3){int p=1;
            for(int i=0;i<n;i++)
            p*=v[i];
            result=p;}
        else if(choice==4){int d=v[0];
            for(int i=0;i<n;i++)
            d/=v[i];
            result=d;}
        printf("Rezultatul este:%.5f\n",result);}
        free(v);
        return 0;}
