#include "library.h"

void monsters()
{
	int m = 0;
	RenderWindow window(VideoMode(1200, 768), L"", Style::Fullscreen);
	/*RenderWindow window;
	window.create(VideoMode(1200, 768), L"Игра", Style::Fullscreen);
	Texture BackgroundTexture;
	BackgroundTexture.loadFromFile("C:/Users/Ангелина/source/repos/game/game/imges/fonGame.png");
	Sprite Background(BackgroundTexture);*/

	Image mob1;
	mob1.loadFromFile("C:/Users/Ангелина/source/repos/game/game/imges/mob1.png");

	Texture mob1t;
	mob1t.loadFromImage(mob1);
	Sprite m1(mob1t);

	m1.setPosition(Vector2f(550, 300));
	m1.setScale(Vector2f(0.4f, 0.4f));


	Font font;
	font.loadFromFile("13.ttf");
	
	Text t1("", font, 25), health("", font, 25);
	t1.setString(L"Meню");
	t1.setPosition(100, 20);
	health.setPosition(600, 50);

	int zd1 = 100;
	int uron1 = 25;


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

		if (IntRect(550, 330, 250, 500).contains(Mouse::getPosition(window)))
		{
			m1.setScale(Vector2f(0.42f, 0.42f));
			m = 2;
		}
		else {
			m1.setScale(Vector2f(0.4f, 0.4f));
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
				m1.setColor(Color::Red);
				zd1 = zd1 - uron1;
				break;
			default:
				break;
			}
		}
		stringstream zdor;
		zdor << zd1;
		health.setString(L"Жизни:" + zdor.str());
		window.clear();
		window.draw(m1);
		window.draw(t1); 
		window.draw(health);
		window.display();
	}


}


