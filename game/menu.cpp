#include "library.h"

void menu()
{
	int m = 0;
	RenderWindow window(VideoMode(1152, 768), L"Меню");
	//Texture BackgroundTexture;
	//BackgroundTexture.loadFromFile("C:/Users/Ангелина/source/repos/game/game/imges/p.jpg");
	//Sprite Background(BackgroundTexture);

	RectangleShape Game;
	Game.setPosition(Vector2f(80.f, 250.f));
	Game.setSize(Vector2f(200.f, 70.f));
	Game.setFillColor(Color(0, 0, 0));
	Game.setOutlineThickness(5.f);
	Game.setOutlineColor(Color(251, 62, 146));

	RectangleShape aboutGame;
	aboutGame.setPosition(Vector2f(872.f, 250.f));
	aboutGame.setSize(Vector2f(200.f, 70.f));
	aboutGame.setFillColor(Color(0, 0, 0));
	aboutGame.setOutlineThickness(5.f);
	aboutGame.setOutlineColor(Color(251, 62, 146));

	RectangleShape desk_of_fame;
	desk_of_fame.setPosition(Vector2f(326.f, 80.f));
	desk_of_fame.setSize(Vector2f(200.f, 70.f));
	desk_of_fame.setFillColor(Color(0, 0, 0));
	desk_of_fame.setOutlineThickness(5.f);
	desk_of_fame.setOutlineColor(Color(251, 62, 146));

	RectangleShape help;
	help.setPosition(Vector2f(626.f, 80.f));
	help.setSize(Vector2f(200.f, 70.f));
	help.setFillColor(Color(0, 0, 0));
	help.setOutlineThickness(5.f);
	help.setOutlineColor(Color(255, 255, 255));
	help.setOutlineColor(Color(251, 62, 146));

	RectangleShape exit;
	exit.setPosition(Vector2f(476.f, 618.f));
	exit.setSize(Vector2f(200.f, 70.f));
	exit.setFillColor(Color(0, 0, 0));
	exit.setOutlineThickness(5.f);
	exit.setOutlineColor(Color(251, 62, 62));

	Font font;
	font.loadFromFile("13.ttf");
	Text t1("", font, 30), t2("", font, 30), t3("", font, 30), t4("", font, 30), t5("",	font, 30);
	t1.setString(L"Начать игру");
	t2.setString(L"Об игре");
	t3.setString(L"Доска почета");
	t4.setString(L"Помощь/справка");
	t5.setString(L"Выход");
	t1.setPosition(95, 260);
	t2.setPosition(381, 90);
	t3.setPosition(681, 90);
	t4.setPosition(887, 260);
	t5.setPosition(521, 628);
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
		exit.setOutlineColor(Color(251, 62, 62));
		Game.setOutlineColor(Color(251, 62, 146));
		aboutGame.setOutlineColor(Color(251, 62, 146));
		desk_of_fame.setOutlineColor(Color(251, 62, 146));
		help.setOutlineColor(Color(251, 62, 146));

		/*t1.setFillColor(Color::Magenta);
		t2.setFillColor(Color::Magenta);
		t3.setFillColor(Color::Magenta);
		t4.setFillColor(Color::Magenta);
		t5.setFillColor(Color::Red);*/
		if (IntRect(80, 250, 200, 70).contains(Mouse::getPosition(window)))
		{
			Game.setOutlineColor(Color(106, 251, 62));
				//t1.setFillColor(Color::Green);
			m = 1;
		}
		if (IntRect(872, 250, 200, 70).contains(Mouse::getPosition(window)))
		{
			aboutGame.setOutlineColor(Color(106, 251, 62));
			//t4.setFillColor(Color::Green);
			m = 2;
		}
		if (IntRect(326, 80, 200, 70).contains(Mouse::getPosition(window)))
		{
			desk_of_fame.setOutlineColor(Color(106, 251, 62));
			//t2.setFillColor(Color::Green);
			m = 3;
		}
		if (IntRect(626, 80, 200, 70).contains(Mouse::getPosition(window)))
		{
			help.setOutlineColor(Color(106, 251, 62));
			//t3.setFillColor(Color(0, 255, 0));
			m = 4;
		}
		if (IntRect(476, 618, 200, 70).contains(Mouse::getPosition(window)))
		{
			exit.setOutlineColor(Color(255, 30, 30));
			m = 5;
		}
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
		//window.draw(Background);
		window.draw(Game);
		window.draw(aboutGame);
		window.draw(desk_of_fame);
		window.draw(help);
		window.draw(exit);
		window.draw(t1);
		window.draw(t2);
		window.draw(t3);
		window.draw(t4);
		window.draw(t5);
		window.display();
	}
}
