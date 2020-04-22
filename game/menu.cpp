#include "library.h"

void menu()
{
	int m = 0;
	RenderWindow window(VideoMode(1200, 768), L"����", sf::Style::Fullscreen);
	Texture BackgroundTexture;
	BackgroundTexture.loadFromFile("C:/Users/��������/source/repos/game/game/imges/fonMenu.png");
	Sprite Background(BackgroundTexture);

	/*RectangleShape Game;
	Game.setPosition(Vector2f(476.f, 218.f));//������� ������
	Game.setFillColor(Color(250, 0, 0));
	Game.setOutlineThickness(5.f);
	Game.setOutlineColor(Color(251, 62, 146));

	RectangleShape aboutGame;
	aboutGame.setPosition(Vector2f(476.f, 288.f));//������� ������
	aboutGame.setFillColor(Color(0, 0, 0));
	aboutGame.setOutlineThickness(5.f);
	aboutGame.setOutlineColor(Color(251, 62, 146));

	RectangleShape desk_of_fame;
	desk_of_fame.setPosition(Vector2f(476.f, 358.f));//������� ������
	desk_of_fame.setFillColor(Color(0, 0, 0));
	desk_of_fame.setOutlineThickness(5.f);
	desk_of_fame.setOutlineColor(Color(251, 62, 146));

	RectangleShape help;
	help.setPosition(Vector2f(476.f, 428.f));//������� ������
	help.setFillColor(Color(0, 0, 0));
	help.setOutlineThickness(5.f);
	help.setOutlineColor(Color(255, 255, 255));
	help.setOutlineColor(Color(251, 62, 146));

	RectangleShape exit;
	exit.setPosition(Vector2f(476.f, 498.f));//������� ������
	exit.setFillColor(Color(0, 0, 0));
	exit.setOutlineThickness(5.f);
	exit.setOutlineColor(Color(251, 62, 62));*/

	Font font;
	font.loadFromFile("13.ttf");
	Text t1("", font, 25), t2("", font, 25), t3("", font, 25), t4("", font, 25), t5("",	font, 25), t6("", font, 50);
	t1.setString(L"������ ����");
	t2.setString(L"�� ����");
	t3.setString(L"����� ������");
	t4.setString(L"������");
	t5.setString(L"�����");
	t6.setString(L"Game Dungeon");


	t1.setPosition(600, 228);//������ ����
	t2.setPosition(620, 328);//�� ����
	t3.setPosition(600, 428);//����� ������
	t4.setPosition(615, 528);//������
	t5.setPosition(625, 628);//�����
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
