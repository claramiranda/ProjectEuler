#include <stdio.h>

#define Number_Of_Dices 20
#define Faces 12
#define Sum_Expected 70
#define T 10

long long combinations,i,fatorial; //Essas variáveis são globais pra poder alterar na função e ela continuar void

//Fatorial é o 10!, a quantidade de combinações possiveis para 10 dados

//A função é recursiva, ou seja, ela chama a si mesma dentro de sua execução

int oi=0;

void calcula(int s,int v,int n,long long LLp,int k) {
		if (n==Number_Of_Dices) {
            if (s==Sum_Expected){
				combinations+=fatorial/LLp;
			}
            return;
        }

		calcula(s+(Number_Of_Dices-n<=T)*v,v,n+1,LLp*(k+1),k+1);

		for (v+=1;v<=Faces;v++){
            calcula(s+(Number_Of_Dices-n<=T)*v,v,n+1,LLp,1);
		}
}

int main() {
    for (fatorial=i=1;i<=Number_Of_Dices;i++){ //Calfulando fatorial
        fatorial*=i;
        //printf("%lli\n",fatorial);
    }

    //inicia recursão com valores zerados
    calcula(0,1,0,1LL,0); //Esse 1LL é que eu estou mandando o valor 1, mas em long long, pra poder caber um valor maior dentro
    printf("%lli\n",combinations); //Mesma coisa aqui, estou imprimindo um tipo de numero maior que int
    //printf("chamadas %d\n",oi);
    return 0;
}

