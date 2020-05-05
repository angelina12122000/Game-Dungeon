#include "library.h"

void menu()
{
	int m = 0;
	RenderWindow window(VideoMode(1200, 768), L"Меню", sf::Style::Fullscreen);
	Texture BackgroundTexture;
	BackgroundTexture.loadFromFile("C:/Users/Ангелина/source/repos/game/game/imges/fonMenu.png");
	Sprite Background(BackgroundTexture);


	Font font;
	font.loadFromFile("13.ttf");
	Text t1("", font, 25), t2("", font, 25), t3("", font, 25), t4("", font, 25), t5("",	font, 25), t6("", font, 50);
	t1.setString(L"Начать игру");
	t2.setString(L"Об игре");
	t3.setString(L"Доска почета");
	t4.setString(L"Помощь");
	t5.setString(L"Выход");
	t6.setString(L"Game Dungeon");


	t1.setPosition(600, 228);//Начать игру
	t2.setPosition(620, 328);//Об игре
	t3.setPosition(600, 428);//Доска почета
	t4.setPosition(615, 528);//Помощь
	t5.setPosition(625, 628);//Выход
	t6.setPosition(520, 128);//

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case Event::Closed:
				window.close();
				break;
			case Event::KeyPressed:
				if (event.key.code == Keyboard::Escape)
					window.close();
				break;
			}
		}

		

		if (IntRect(600, 228, 200, 70).contains(Mouse::getPosition(window)))
		{
				t1.setColor(Color::Black);
			m = 1;
		}
		else t1.setColor(Color::White);

		if (IntRect(620, 328, 200, 70).contains(Mouse::getPosition(window)))
		{
			t2.setColor(Color::Black);
			m = 2;
		}
		else t2.setColor(Color::White);

		if (IntRect(600, 428, 200, 70).contains(Mouse::getPosition(window)))
		{
			t3.setColor(Color::Black);
			m = 3;
		}
		else t3.setColor(Color::White);

		if (IntRect(615, 528, 200, 70).contains(Mouse::getPosition(window)))
		{
			t4.setColor(Color::Black);
			m = 4;
		}
		else t4.setColor(Color::White);

		if (IntRect(625, 628, 200, 70).contains(Mouse::getPosition(window)))
		{
			t5.setColor(Color::Red);
			m = 5;
		}
		else t5.setColor(Color::White);

		if (Mouse::isButtonPressed(Mouse::Left))
		{
			switch (m)
			{
				case 1:
					window.close();
					game();
					break;
				case 2:
					window.close();
					aboutgame();
					break;
				case 3:
					window.close();
					desk();
					break;
				case 4:
					window.close();
					hhelp();
						break;
				case 5:
					window.close();
					break;
				default:
					break;
			}
		}
		window.clear();
		window.draw(Background);
		window.draw(t1);
		window.draw(t2);
		window.draw(t3);
		window.draw(t4);
		window.draw(t5);
		window.draw(t6);
		window.display();
	}
}
