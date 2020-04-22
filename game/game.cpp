#include "library.h"

void game()
{
	RenderWindow window(VideoMode(1200, 768), L"Меню", sf::Style::Fullscreen);
	/*Texture BackgroundTexture;
	BackgroundTexture.loadFromFile("C:/Users/Ангелина/source/repos/game/game/imges/fonMenu.png");
	Sprite Background(BackgroundTexture);*/
	Text text;
	text.setString("Hello world");


	//window.clear();
	window.draw(text);
	window.display();
}