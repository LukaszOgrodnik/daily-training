#include <iostream>
#include <string>
#include <cmath>

bool canMove(std::string piece, std::string current, std::string target) {
	if (piece=="Rook"){
	    std::cout << "Chosen piece is rook" << std::endl;
	    if (current[0] == target[0] || current[1] == target[1] )
	    return true;
	}
    if (piece=="Bishop"){
	    std::cout << "Chosen piece is bishop" << std::endl;
	    if  (abs(current[0] - target[0]) == abs(current[1] - target[1]) )
	    return true;
	}
	if (piece=="Knight"){
	    std::cout << "Chosen piece is knight" << std::endl;
	    if  (abs(current[0] - target[0]) == 2 &&  abs(current[1] - target[1])==1 )
	    return true;
	    if  (abs(current[0] - target[0]) == 1 &&  abs(current[1] - target[1])==2 )
	    return true;
	}
	if (piece=="Pawn"){
	    std::cout << "Chosen piece is pawn" << std::endl;
	    if (current[0] == target[0]){
	        if(abs(current[1] - target[1]) ==1)
	        return true;

	        if(char (current[1])=='7' && target[1]=='5') 
	        return true;
	        if(current[1]=='2' && target[1]=='4') 
	        return true;
	    } 
	}
	if (piece=="Queen"){
	    std::cout << "Chosen piece is queen" << std::endl;
	    if (current[0] == target[0] || current[1] == target[1] )
	    return true;
	    else if (abs(current[0] - target[0]) == abs(current[1] - target[1]) )
	    return true;
	}
	if (piece=="King"){
	    std::cout << "Chosen piece is king" << std::endl;
	    if ((current[0] == target[0] || current[1] == target[1]) && abs(current[1] - target[1]) ==1)
	    return true;
	    else if ((abs(current[0] - target[0]) == abs(current[1] - target[1]))  && abs(current[1] - target[1]) ==1)
	    return true;
	}
    return false;
}


int main() {
    std::cout << canMove("Knight", "B1", "D2") << std::endl;
    return 0;
}
