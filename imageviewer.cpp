#include<iostream>
#include<string>
#include<fstream>
int main(int argc , char * argv[]){
	if(argc == 1){
		std::cout<<"Wrong Usage / path not defined.\nCorrect Usage is ./IMV \"path - to ppm file\""<<std::endl;
		return 0;
	}
	std::string path_to_file  = argv[1];
	std::ifstream ImageFile(path_to_file);
	if(!ImageFile.is_open()){
		std::cout<<"The File at "+path_to_file+" could not be found\n";
		return 0;
	}
	
	std::cout<<"You reached here";
	return 0;
}
