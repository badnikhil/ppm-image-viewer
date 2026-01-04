#include<iostream>
#include<string>
#include<fstream>
#include <vector>
#include<SFML/Graphics.hpp>
int HEIGHT = 0;
int WIDTH = 0;
// will update this someday

void handleP6(std::ifstream &ImageFile , sf::Image &Img){


	// extract Height and Width

	// Ignore Comments

	// start reading each byte
}

void handleP3(std::ifstream &ImageFile , sf::Image &Img){
	ImageFile >> WIDTH ;
	ImageFile >> HEIGHT; 
	printf("%d %d\n",HEIGHT ,WIDTH);
	int temp;
	ImageFile >> temp;
	Img.create(WIDTH , HEIGHT , sf::Color::Black);
	for(int i = 0 ; i < HEIGHT ; i++){
		for(int j = 0 ; j < WIDTH ; j++){
			int r ,g ,b ;
			ImageFile >> r;
			ImageFile >> g;
			ImageFile >> b;
			Img.setPixel(j , i , sf::Color(r,g,b , 255));
		}
	}
	
}
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
	
	sf::Image Img;

	std::string format;
	ImageFile >> format;
	if(format == "P6"){
		handleP6(ImageFile,Img);
	}
	else if(format == "P3"){
		handleP3(ImageFile , Img);
	}
	else {
		std::cout<<"Only PPM Files are supported\n";
		return 0;
	}

	sf::RenderWindow window(sf::VideoMode(WIDTH , HEIGHT), "PPM Image viewer");
	sf::Texture Txt;
	Txt.loadFromImage(Img);
	sf::Sprite ImgSprite(Txt);
	while(window.isOpen()){
		sf::Event event;
		while(window.pollEvent(event)){
			if(event.type == sf::Event::Closed){
				window.close();
			}
		}
		window.clear();
		window.draw(ImgSprite);
		window.display();
	}


	return 0;
}
