#include <stdio.h>

//EXTRA CLASSE


// QUESTÃO 1

/*
main(){
	
	int resposta;
	
	printf("1-Rio de Janeiro  2-São Paulo  3-Minas Gerais 4-Espirito Santo  5-Nenhuma das opcoes \n ");
	scanf("%d",&resposta);
	
	switch(resposta){
		case 1:{
			printf("Voce e carioca");
			break;
		}
		
		case 2:{
			printf("Voce e Paulista");
			break;
		}
		
		case 3:{
			printf("Voce e Mineiro");
			break;
		}
		
		case 4:{
			printf("voce e Capixaba");
			break;
		}
		
		case 5:{
			printf("diferente das acima, voce nao e do sudeste");
			break;
		}
	}
}
*/





// QUESTÃO 2

/*
main(){
	
	int n1, n2, dif, i;
	
	printf("Escolha um numero: ");
	scanf("%d",&n1);
	
	printf("Escolha um numero: ");
	scanf("%d",&n2);
	
	if(n1>n2){
		
		dif=n1-n2;
		printf(" %d e maior que %d e a diferenca entre eles e: %d\n ",n1,n2,dif);
		printf("Esses sao os numeros impares entre eles do maior para o menor: ");
		
		for(i=n1-1; i>n2; i--){
			if(i%2!=0){
				printf("%d ",i);
				
			}
		}
		
	}
	
	if(n2>n1){
		
		dif=n2-n1;
		printf(" %d e maior que %d e a diferença entre eles e: %d\n ",n2, n1, dif);
		printf("Esses sao os numeros impares entre eles do maior para o menor: ");
		
		for(i=n2-1; i>n1; i--){
			if(i%2!=0){
				printf("%d ",i);	
			}
		}
	}
	
	if(n1==n2){
		printf("Os numeros sao iguais");
	}
}
*/




// 	QUESTÃO 3

/*
main(){

	int voto, total, jose, joao, maria, fatima;
	float nulo, branco, percnulo, percbranco;
	
	
//	VOU TER QUE DECLARAR 0 POIS ALGUMAS VARIÁVEIS ESTAVAM VINDO COM UM VALOR ALEATÓRIO
	nulo=0;
	branco=0;
	fatima=0;
	maria=0;
	joao=0;
	jose=0;
	total=0;
	  
	
	do{
		printf("Vote no seu candidato:\n\n 1-Jose 2-joao 3-Maria 4-Fatima 5-nulo 6-branco\n");
		scanf("%d",&voto);
		
		total=total+1;
		
		if(voto==1){
			jose=jose+1;
		}
		if(voto==2){
			joao=joao+1;
		}	
		if(voto==3){
			maria=maria+1;
		}
		if(voto==4){
			fatima=fatima+1;
		}
		if(voto==5){
			nulo=nulo+1;
		}
		if(voto==6){
			branco=branco+1;
		}		
		
		if(voto>6){
			printf("Opcao invalida");
		}
	}while(voto!=0);
	
	printf("Total de votos: %d\n Jose: %d\n Joao: %d\n Maria: %d\n Fatima: %d\n nulos: %d\n brancos: %d\n\n ", total, jose,joao,maria,fatima,nulo,branco);

	percnulo=(nulo/total)*100;
	percbranco=(branco/total)*100;
	
	printf("Votos nulos representam: %.2f%\n",percnulo);
	printf("Votos brancos representam: %.2f%",percbranco);
	
	
	
}
*/





			
