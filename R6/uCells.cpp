#include <iostream>
#include <stdio.h>

int main(int _argc, char** _argv){
	int cols = 16;
	int rows = 9;
	
	//top border
	std::cout << "\u250C";
	for (int i = 0 ; i < cols ; ++i){

		std::cout << "\u2500" ;
		std::cout << "\u2500" ;
		std::cout << "\u2500" ;
	
		if (i < cols-1){
			std::cout << "\u252C" ;
		}
	}		
	std::cout << "\u2510" << std::endl;

	for (int j = 0 ; j < rows ; ++j){
		
		//middle
		std::cout << "\u2502";
		for (int i = 0 ; i < cols ; ++i){
			std::cout << " ";
			int v = rand() % 3;

			switch(v){//random cell content
			case 0:
				std::cout << " ";
				break;
			case 1:
				std::cout << "o";
				break;
			case 2:
				std::cout << "x";
				break;
			}
			std::cout << " \u2502";
		}
		std::cout << std::endl;	
		if (j == rows - 1){
			continue;
		}
		std::cout << "\u251C";
		for (int i = 0 ; i < cols ; ++i){
			std::cout << "\u2500" ;
			std::cout << "\u2500" ;
			std::cout << "\u2500" ;
	
			if (i < cols-1){
				std::cout << "\u253C";
			}
		}
		std::cout << "\u2524" << std::endl;

	}

	//bottom border
	std::cout << "\u2514";
	for (int i = 0 ; i < cols ; ++i){

		std::cout << "\u2500" ;
		std::cout << "\u2500" ;
		std::cout << "\u2500" ;
	
		if (i < cols-1){
			std::cout << "\u2534" ;
		}
	}		
	std::cout << "\u2518" << std::endl;
	
	return 0;
}
