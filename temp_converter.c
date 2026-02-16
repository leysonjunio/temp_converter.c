#include <stdio.h>

void celsius(double a){
   int formula = (a - 32)/1.8;
   printf("%d°", formula); 
}
void fahrenheit(int a){
    double formula = (a * 1.8) + 32;
    printf("%0.1fº", formula);
}

int main(){
    int valorC; 
    double valorf; 
    char valorFormula;

    printf("Qual converção será feita");
    printf("\nCelsius = 'c' || Fahrenheit = 'f':");
    scanf("%c", &valorFormula);

    if(valorFormula == 'c'){
        printf("Digiter o valor:");
        scanf("%lf", &valorf);
        celsius(valorf);
    }else{
        printf("Digiter o valor:");
        scanf("%d", &valorC);
        fahrenheit(valorC);
    }
    return 0;
}