/*
Author:   Haruso Violeta
Date:     today
Version:  1.0

  Homework 06
  Este programa imprime en pantalla el codigo ASCII
	
*/

#include <iostream>

int main(int argc, char **argv)
{
	
	std::cout<<"\nEste programa imprime en pantalla el codigo ASCII \n\n";

	for(int i = 0; i < 16; i ++)
	{
		for(int j = 0; j < 8; j ++)
			std::cout << (char) (i + j* 16) << "\t";
			
		std::cout << "\n\n";
	}	
	return 0;
}
