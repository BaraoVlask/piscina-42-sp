#include<stdio.h>

void rush(int x, int y)
{
	int posX;
	int posY;

	posY = 1;
	while(posY <= y)//loop enquanto a posY for menor ou igual y 
	{
		posX = 1;
		while(posX <= x)//loop enquanto a posX for menor ou igual x
		{
			if(posY == 1){//identifica a primeira linha
				printf("(%i,%i)", posY, posX);
			}
			if(posY > 1 && posY < y && (posX == 1 || posX == x)){
				//identifica as colunas
				printf("(%i,%i)", posY, posX);
			}
			if(posY > 1 && posY < y && posX > 1 && posX < x){
				//Identifica o meio
				printf("*****");
			}
			if(posY == y && y > 1){
				//identifica a ultima linha
				printf("(%i,%i)", posY, posX);
			}

			posX++;
		}
		printf("\n");

		posY++;
	}
}