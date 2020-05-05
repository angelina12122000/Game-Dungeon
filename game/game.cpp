#include "library.h"

void game()
{
	int m = 0;
	RenderWindow window(VideoMode(1200, 768), L"", Style::Fullscreen);
	/*RenderWindow window;
	window.create(VideoMode(1200, 768), L"Игра", Style::Fullscreen);
	Texture BackgroundTexture;
	BackgroundTexture.loadFromFile("C:/Users/Ангелина/source/repos/game/game/imges/fonGame.png");
	Sprite Background(BackgroundTexture);*/

	Image doors1;
	doors1.loadFromFile("C:/Users/Ангелина/source/repos/game/game/imges/текстура.jpg");

	Texture doors1t;
	doors1t.loadFromImage(doors1);
	Sprite d1(doors1t);
	
	d1.setPosition(Vector2f(250, 300));
	d1.setScale(Vector2f(0.33f, 0.33f));


	Image doors2;
	doors2.loadFromFile("C:/Users/Ангелина/source/repos/game/game/imges/текстура.jpg");

	Texture doors2t;
	doors2t.create(200, 200);
	doors2t.loadFromImage(doors2);
	Sprite d2(doors2t);
	
	d2.setPosition(Vector2f(880, 300));
	d2.setScale(Vector2f(0.33f, 0.33f));

	
	Font font;
	font.loadFromFile("13.ttf");

	Text t1("", font, 25);
	t1.setString(L"Menu");
	t1.setPosition(20, 20);//Начать игру
	

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



		if (IntRect(20, 20, 200, 70).contains(Mouse::getPosition(window)))
		{
			t1.setColor(Color::Red);
			m = 1;
		}
		else t1.setColor(Color::White);

		if (IntRect(250, 330, 250, 500).contains(Mouse::getPosition(window)))
		{
			d1.setScale(Vector2f(0.36f, 0.36f));
			d1.setPosition(Vector2f(235, 270));
			d1.setColor(Color(255, 255, 255, 150));
			m = 2;
		}
		else {
			d1.setScale(Vector2f(0.33f, 0.33f));
			d1.setPosition(Vector2f(250, 300));
			d1.setColor(Color(255, 255, 255, 255));
		}

		if (IntRect(880, 330, 250, 500).contains(Mouse::getPosition(window)))
		{
			d2.setScale(Vector2f(0.36f, 0.36f));
			d2.setPosition(Vector2f(865, 270));
			d2.setColor(Color(255, 255, 255, 150));
			m = 3;
		}
		else {
			d2.setScale(Vector2f(0.33f, 0.33f));
			d2.setPosition(Vector2f(880, 300));
			d2.setColor(Color(255, 255, 255, 255));
		}
		

		if (Mouse::isButtonPressed(Mouse::Left))
		{
			switch (m)
			{
			case 1:
				window.close();
				menu();
				break;
			case 2:
				window.close();
				monsters();
				break;
			case 3:
				window.close();
				desk();
				break;
			default:
				break;
			}
		}
		window.clear();
		window.draw(d1);
		window.draw(d2);
		window.draw(t1);
		window.display();
	}


}


	