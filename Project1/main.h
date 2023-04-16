#pragma once

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
#include <chrono>

/*double board[8][8] =
{
/	-4,-2,-3,-5,-6,-3.1,-2.1,-4.1,
	-1,-1.1,-1.2,-1.3,-1.4,-1.5,-1.6,-1.7,
	0 ,0 ,0 ,0 ,0, 0, 0, 0,
	0 ,0 ,0 ,0 ,0, 0, 0, 0,
	0 ,0 ,0 ,0 ,0, 0, 0, 0,
	0 ,0 ,0 ,0 ,0, 0, 0, 0,
	1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7,
	4, 2, 3, 5, 6, 3.1, 2.1, 4.1

}; */


double board[8][8] =
{
	 -4,-2,-3,-5,-6,-3.1,-2.1,-4.1,
	-1,-1.1,-1.2,-1.3,-1.4,-1.5,-1.6,-1.7,
	0 ,0 ,0 ,0 ,0, 0, 0, 0,
	0 ,0 ,0 ,0 ,0, 0, 0, 0,
	0 ,0 ,0 ,0 ,0, 0, 0, 0,
	0 ,0 ,0 ,0 ,0, 0, 0, 0,
	1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7,
	4, 2, 3, 5, 6, 3.1, 2.1, 4.1

};



struct ChessPiece
{
	int x, y;
	double pieceID;
	int color;
	int draw;
	int moved;
};


class ChessGame
{
private:
	sf::RenderWindow window;
	sf::Clock clock;

public:
	int width;
	int height;
	const char* name;
	int size;
	int turn = 0;
	int end = 0;
	int totalturns = 0;

	

	void createwindow()
	{

		ChessPiece blackrook1;
		blackrook1.x = 0;
		blackrook1.y = 0;
		blackrook1.pieceID = -4;
		blackrook1.draw = 1;

		ChessPiece blackrook2;
		blackrook2.x = 0;
		blackrook2.y = 0;
		blackrook2.pieceID = -4.1;
		blackrook2.draw = 1;

		ChessPiece blackqueen;
		blackqueen.x = 0;
		blackqueen.y = 0;
		blackqueen.pieceID = -5;
		blackqueen.draw = 1;

		ChessPiece blackking;
		blackking.x = 0;
		blackking.y = 0;
		blackking.pieceID = -6;
		blackking.draw = 1;

		ChessPiece blackbishop1;
		blackbishop1.x = 0;
		blackbishop1.y = 0;
		blackbishop1.pieceID = -3;
		blackbishop1.draw = 1;

		ChessPiece blackbishop2;
		blackbishop2.x = 0;
		blackbishop2.y = 0;
		blackbishop2.pieceID = -3.1;
		blackbishop2.draw = 1;

		ChessPiece blackknight1;
		blackknight1.x = 0;
		blackknight1.y = 0;
		blackknight1.pieceID = -2;
		blackknight1.draw = 1;

		ChessPiece blackknight2;
		blackknight2.x = 0;
		blackknight2.y = 0;
		blackknight2.pieceID = -2.1;
		blackknight2.draw = 1;

		ChessPiece blackpawn1;
		blackpawn1.x = 0;
		blackpawn1.y = 0;
		blackpawn1.pieceID = -1;
		blackpawn1.draw = 1;
		blackpawn1.moved = 0;

		ChessPiece blackpawn2;
		blackpawn2.x = 0;
		blackpawn2.y = 0;
		blackpawn2.pieceID = -1.1;
		blackpawn2.draw = 1;
		blackpawn2.moved = 0;

		ChessPiece blackpawn3;
		blackpawn3.x = 0;
		blackpawn3.y = 0;
		blackpawn3.pieceID = -1.2;
		blackpawn3.draw = 1;
		blackpawn3.moved = 0;

		ChessPiece blackpawn4;
		blackpawn4.x = 0;
		blackpawn4.y = 0;
		blackpawn4.pieceID = -1.3;
		blackpawn4.draw = 1;
		blackpawn4.moved = 0;

		ChessPiece blackpawn5;
		blackpawn5.x = 0;
		blackpawn5.y = 0;
		blackpawn5.pieceID = -1.4;
		blackpawn5.draw = 1;
		blackpawn5.moved = 0;

		ChessPiece blackpawn6;
		blackpawn6.x = 0;
		blackpawn6.y = 0;
		blackpawn6.pieceID = -1.5;
		blackpawn6.draw = 1;
		blackpawn6.moved = 0;

		ChessPiece blackpawn7;
		blackpawn7.x = 0;
		blackpawn7.y = 0;
		blackpawn7.pieceID = -1.6;
		blackpawn7.draw = 1;
		blackpawn7.moved = 0;
		
		ChessPiece blackpawn8;
		blackpawn8.x = 0;
		blackpawn8.y = 0;
		blackpawn8.pieceID = -1.7;
		blackpawn8.draw = 1;
		blackpawn8.moved = 0;



		//white pieces

		ChessPiece whiteking;
		whiteking.x = 0;
		whiteking.y = 0;
		whiteking.pieceID = 6;
		whiteking.draw = 1;

		ChessPiece whitequeen;
		whitequeen.x = 0;
		whitequeen.y = 0;
		whitequeen.pieceID = 5;
		whitequeen.draw = 1;

		ChessPiece whiterook1;
		whiterook1.x = 0;
		whiterook1.y = 0;
		whiterook1.pieceID = 4;
		whiterook1.draw = 1;

		ChessPiece whiterook2;
		whiterook2.x = 0;
		whiterook2.y = 0;
		whiterook2.pieceID = 4.1;
		whiterook2.draw = 1;


		ChessPiece whitebishop1;
		whitebishop1.x = 0;
		whitebishop1.y = 0;
		whitebishop1.pieceID = 3;
		whitebishop1.draw = 1;

		ChessPiece whitebishop2;
		whitebishop2.x = 0;
		whitebishop2.y = 0;
		whitebishop2.pieceID = 3.1;
		whitebishop2.draw = 1;

		ChessPiece whiteknight1;
		whiteknight1.x = 0;
		whiteknight1.y = 0;
		whiteknight1.pieceID = 2;
		whiteknight1.draw = 1;

		ChessPiece whiteknight2;
		whiteknight2.x = 0;
		whiteknight2.y = 0;
		whiteknight2.pieceID = 2.1;
		whiteknight2.draw = 1;

		ChessPiece whitepawn1;
		whitepawn1.x = 0;
		whitepawn1.y = 0;
		whitepawn1.pieceID = 1;
		whitepawn1.draw = 1;
		whitepawn1.moved = 0;
		
		ChessPiece whitepawn2;
		whitepawn2.x = 0;
		whitepawn2.y = 0;
		whitepawn2.pieceID = 1.1;
		whitepawn2.draw = 1;
		whitepawn2.moved = 0;

		ChessPiece whitepawn3;
		whitepawn3.x = 0;
		whitepawn3.y = 0;
		whitepawn3.pieceID = 1.2;
		whitepawn3.draw = 1;
		whitepawn3.moved = 0;

		ChessPiece whitepawn4;
		whitepawn4.x = 0;
		whitepawn4.y = 0;
		whitepawn4.pieceID = 1.3;
		whitepawn4.draw = 1;
		whitepawn4.moved = 0;

		ChessPiece whitepawn5;
		whitepawn5.x = 0;
		whitepawn5.y = 0;
		whitepawn5.pieceID = 1.4;
		whitepawn5.draw = 1;
		whitepawn5.moved = 0;

		ChessPiece whitepawn6;
		whitepawn6.x = 0;
		whitepawn6.y = 0;
		whitepawn6.pieceID = 1.5;
		whitepawn6.draw = 1;
		whitepawn6.moved = 0;

		ChessPiece whitepawn7;
		whitepawn7.x = 0;
		whitepawn7.y = 0;
		whitepawn7.pieceID = 1.6;
		whitepawn7.draw = 1;
		whitepawn7.moved = 0;

		ChessPiece whitepawn8;
		whitepawn8.x = 0;
		whitepawn8.y = 0;
		whitepawn8.pieceID = 1.7;
		whitepawn8.draw = 1;
		whitepawn8.moved = 0;

		// setting textures

		sf::Texture blackrooktex;
		blackrooktex.loadFromFile("images/blackrook.png");

		sf::Texture blackqueentex;
		blackqueentex.loadFromFile("images/blackqueen.png");
		
		sf::Texture blackkingtex;
		blackkingtex.loadFromFile("images/blackking.png");

		sf::Texture blackbishoptex;
		blackbishoptex.loadFromFile("images/blackbishop.png");

		sf::Texture blackknighttex;
		blackknighttex.loadFromFile("images/blackknight.png");
		
		sf::Texture blackpawntex;
		blackpawntex.loadFromFile("images/blackpawn.png");

		//white pieces textures

		sf::Texture whitekingtex;
		whitekingtex.loadFromFile("images/whiteking.png");

		sf::Texture whitepawntex;
		whitepawntex.loadFromFile("images/whitepawn.png");
		
		sf::Texture whiterooktex;
		whiterooktex.loadFromFile("images/whiterook.png");

		sf::Texture whitebishoptex;
		whitebishoptex.loadFromFile("images/whitebishop.png");

		sf::Texture whiteknighttex;
		whiteknighttex.loadFromFile("images/whiteknight.png");

		sf::Texture whitequeentex;
		whitequeentex.loadFromFile("images/whitequeen.png");



		//setting sprites 

		sf::Sprite blackrooksprite1(blackrooktex);
		blackrooksprite1.setScale(1.5, 1.5);
		blackrooksprite1.setPosition(0.f, 0.f);

		sf::Sprite blackrooksprite2(blackrooktex);
		blackrooksprite2.setScale(1.5, 1.5);
		blackrooksprite2.setPosition(700.f, 0.f);

		sf::Sprite blackqueensprite(blackqueentex);
		blackqueensprite.setScale(1.5, 1.5);
		blackqueensprite.setPosition(300.f, 0.f);

		sf::Sprite blackkingsprite(blackkingtex);
		blackkingsprite.setScale(1.5, 1.5);
		blackkingsprite.setPosition(400.f, 0.f);

		sf::Sprite blackbishopsprite1(blackbishoptex);
		blackbishopsprite1.setScale(1.5, 1.5);
		blackbishopsprite1.setPosition(200.f, 0.f);

		sf::Sprite blackbishopsprite2(blackbishoptex);
		blackbishopsprite2.setScale(1.5, 1.5);
		blackbishopsprite2.setPosition(500.f, 0.f);

		sf::Sprite blackknightsprite1(blackknighttex);
		blackknightsprite1.setScale(1.5, 1.5);
		blackknightsprite1.setPosition(100.f, 0.f);

		sf::Sprite blackknightsprite2(blackknighttex);
		blackknightsprite2.setScale(1.5, 1.5);
		blackknightsprite2.setPosition(600.f, 0.f);

		sf::Sprite blackpawnsprite1(blackpawntex);
		blackpawnsprite1.setScale(1.5, 1.5);
		blackpawnsprite1.setPosition(0.f, 100.f);

		sf::Sprite blackpawnsprite2(blackpawntex);
		blackpawnsprite2.setScale(1.5, 1.5);
		blackpawnsprite2.setPosition(100.f, 100.f);

		sf::Sprite blackpawnsprite3(blackpawntex);
		blackpawnsprite3.setScale(1.5, 1.5);
		blackpawnsprite3.setPosition(200.f, 100.f);

		sf::Sprite blackpawnsprite4(blackpawntex);
		blackpawnsprite4.setScale(1.5, 1.5);
		blackpawnsprite4.setPosition(300.f, 100.f);

		sf::Sprite blackpawnsprite5(blackpawntex);
		blackpawnsprite5.setScale(1.5, 1.5);
		blackpawnsprite5.setPosition(400.f, 100.f);

		sf::Sprite blackpawnsprite6(blackpawntex);
		blackpawnsprite6.setScale(1.5, 1.5);
		blackpawnsprite6.setPosition(500.f, 100.f);

		sf::Sprite blackpawnsprite7(blackpawntex);
		blackpawnsprite7.setScale(1.5, 1.5);
		blackpawnsprite7.setPosition(600.f, 100.f);

		sf::Sprite blackpawnsprite8(blackpawntex);
		blackpawnsprite8.setScale(1.5, 1.5);
		blackpawnsprite8.setPosition(700.f, 100.f);

		//white pieces 
		
		sf::Sprite whitekingsprite(whitekingtex);
		whitekingsprite.setScale(1.5, 1.5);
		whitekingsprite.setPosition(400.f, 700.f);

		sf::Sprite whiterooksprite1(whiterooktex);
		whiterooksprite1.setScale(1.5, 1.5);
		whiterooksprite1.setPosition(0.f, 700.f);

		sf::Sprite whiterooksprite2(whiterooktex);
		whiterooksprite2.setScale(1.5, 1.5);
		whiterooksprite2.setPosition(700.f, 700.f);

		sf::Sprite whitequeensprite(whitequeentex);
		whitequeensprite.setScale(1.5, 1.5);
		whitequeensprite.setPosition(300.f, 700.f);

		sf::Sprite whitebishopsprite1(whitebishoptex);
		whitebishopsprite1.setScale(1.5, 1.5);
		whitebishopsprite1.setPosition(200.f, 700.f);

		sf::Sprite whitebishopsprite2(whitebishoptex);
		whitebishopsprite2.setScale(1.5, 1.5);
		whitebishopsprite2.setPosition(500.f, 700.f);

		sf::Sprite whiteknightsprite1(whiteknighttex);
		whiteknightsprite1.setScale(1.5, 1.5);
		whiteknightsprite1.setPosition(100.f, 700.f);

		sf::Sprite whiteknightsprite2(whiteknighttex);
		whiteknightsprite2.setScale(1.5, 1.5);
		whiteknightsprite2.setPosition(600.f, 700.f);

		sf::Sprite whitepawnsprite1(whitepawntex);
		whitepawnsprite1.setScale(1.5, 1.5);
		whitepawnsprite1.setPosition(0.f, 600.f);

		sf::Sprite whitepawnsprite2(whitepawntex);
		whitepawnsprite2.setScale(1.5, 1.5);
		whitepawnsprite2.setPosition(100.f, 600.f);

		sf::Sprite whitepawnsprite3(whitepawntex);
		whitepawnsprite3.setScale(1.5, 1.5);
		whitepawnsprite3.setPosition(200.f, 600.f);

		sf::Sprite whitepawnsprite4(whitepawntex);
		whitepawnsprite4.setScale(1.5, 1.5);
		whitepawnsprite4.setPosition(300.f, 600.f);

		sf::Sprite whitepawnsprite5(whitepawntex);
		whitepawnsprite5.setScale(1.5, 1.5);
		whitepawnsprite5.setPosition(400.f, 600.f);

		sf::Sprite whitepawnsprite6(whitepawntex);
		whitepawnsprite6.setScale(1.5, 1.5);
		whitepawnsprite6.setPosition(500.f, 600.f);

		sf::Sprite whitepawnsprite7(whitepawntex);
		whitepawnsprite7.setScale(1.5, 1.5);
		whitepawnsprite7.setPosition(600.f, 600.f);

		sf::Sprite whitepawnsprite8(whitepawntex);
		whitepawnsprite8.setScale(1.5, 1.5);
		whitepawnsprite8.setPosition(700.f, 600.f);



		sf::RenderWindow window(sf::VideoMode(width, height), name);



		sf::RectangleShape a1(sf::Vector2f(100, 100));
		a1.setFillColor(sf::Color(255, 255, 255));

		sf::RectangleShape a2(sf::Vector2f(100, 100));
		a2.setFillColor(sf::Color(115, 147, 179));
		a2.setPosition(100.f, 0.f);

		sf::RectangleShape a3(sf::Vector2f(100, 100));
		a3.setFillColor(sf::Color(255, 255, 255));
		a3.setPosition(200.f, 0.f);

		sf::RectangleShape a4(sf::Vector2f(100, 100));
		a4.setFillColor(sf::Color(115, 147, 179));
		a4.setPosition(300.f, 0.f);

		sf::RectangleShape a5(sf::Vector2f(100, 100));
		a5.setFillColor(sf::Color(255, 255, 255));
		a5.setPosition(400.f, 0.f);

		sf::RectangleShape a6(sf::Vector2f(100, 100));
		a6.setFillColor(sf::Color(115, 147, 179));
		a6.setPosition(500.f, 0.f);

		sf::RectangleShape a7(sf::Vector2f(100, 100));
		a7.setFillColor(sf::Color(255, 255, 255));
		a7.setPosition(600.f, 0.f);

		sf::RectangleShape a8(sf::Vector2f(100, 100));
		a8.setFillColor(sf::Color(115, 147, 179));
		a8.setPosition(700.f, 0.f);



		sf::RectangleShape b1(sf::Vector2f(100, 100));
		b1.setFillColor(sf::Color(115, 147, 179));
		b1.setPosition(0.f, 100.f);

		sf::RectangleShape b2(sf::Vector2f(100, 100));
		b2.setFillColor(sf::Color(255, 255, 255));
		b2.setPosition(100.f, 100.f);

		sf::RectangleShape b3(sf::Vector2f(100, 100));
		b3.setFillColor(sf::Color(115, 147, 179));
		b3.setPosition(200.f, 100.f);

		sf::RectangleShape b4(sf::Vector2f(100, 100));
		b4.setFillColor(sf::Color(255, 255, 255));
		b4.setPosition(300.f, 100.f);

		sf::RectangleShape b5(sf::Vector2f(100, 100));
		b5.setFillColor(sf::Color(115, 147, 179));
		b5.setPosition(400.f, 100.f);

		sf::RectangleShape b6(sf::Vector2f(100, 100));
		b6.setFillColor(sf::Color(255, 255, 255));
		b6.setPosition(500.f, 100.f);

		sf::RectangleShape b7(sf::Vector2f(100, 100));
		b7.setFillColor(sf::Color(115, 147, 179));
		b7.setPosition(600.f, 100.f);

		sf::RectangleShape b8(sf::Vector2f(100, 100));
		b8.setFillColor(sf::Color(255, 255, 255));
		b8.setPosition(700.f, 100.f);

		sf::RectangleShape c1(sf::Vector2f(100, 100));
		c1.setFillColor(sf::Color(255, 255, 255));
		c1.setPosition(0.f, 200.f);

		sf::RectangleShape c2(sf::Vector2f(100, 100));
		c2.setFillColor(sf::Color(115, 147, 179));
		c2.setPosition(100.f, 200.f);

		sf::RectangleShape c3(sf::Vector2f(100, 100));
		c3.setFillColor(sf::Color(255, 255, 255));
		c3.setPosition(200.f, 200.f);

		sf::RectangleShape c4(sf::Vector2f(100, 100));
		c4.setFillColor(sf::Color(115, 147, 179));
		c4.setPosition(300.f, 200.f);

		sf::RectangleShape c5(sf::Vector2f(100, 100));
		c5.setFillColor(sf::Color(255, 255, 255));
		c5.setPosition(400.f, 200.f);

		sf::RectangleShape c6(sf::Vector2f(100, 100));
		c6.setFillColor(sf::Color(115, 147, 179));
		c6.setPosition(500.f, 200.f);

		sf::RectangleShape c7(sf::Vector2f(100, 100));
		c7.setFillColor(sf::Color(255, 255, 255));
		c7.setPosition(600.f, 200.f);

		sf::RectangleShape c8(sf::Vector2f(100, 100));
		c8.setFillColor(sf::Color(115, 147, 179));
		c8.setPosition(700.f, 200.f);

		sf::RectangleShape d1(sf::Vector2f(100, 100));
		d1.setFillColor(sf::Color(115, 147, 179));
		d1.setPosition(0.f, 300.f);

		sf::RectangleShape d2(sf::Vector2f(100, 100));
		d2.setFillColor(sf::Color(255, 255, 255));
		d2.setPosition(100.f, 300.f);

		sf::RectangleShape d3(sf::Vector2f(100, 100));
		d3.setFillColor(sf::Color(115, 147, 179));
		d3.setPosition(200.f, 300.f);

		sf::RectangleShape d4(sf::Vector2f(100, 100));
		d4.setFillColor(sf::Color(255, 255, 255));
		d4.setPosition(300.f, 300.f);

		sf::RectangleShape d5(sf::Vector2f(100, 100));
		d5.setFillColor(sf::Color(115, 147, 179));
		d5.setPosition(400.f, 300.f);

		sf::RectangleShape d6(sf::Vector2f(100, 100));
		d6.setFillColor(sf::Color(255, 255, 255));
		d6.setPosition(500.f, 300.f);

		sf::RectangleShape d7(sf::Vector2f(100, 100));
		d7.setFillColor(sf::Color(115, 147, 179));
		d7.setPosition(600.f, 300.f);

		sf::RectangleShape d8(sf::Vector2f(100, 100));
		d8.setFillColor(sf::Color(255, 255, 255));
		d8.setPosition(700.f, 300.f);

		sf::RectangleShape e1(sf::Vector2f(100, 100));
		e1.setFillColor(sf::Color(255, 255, 255));
		e1.setPosition(0.f, 400.f);

		sf::RectangleShape e2(sf::Vector2f(100, 100));
		e2.setFillColor(sf::Color(115, 147, 179));
		e2.setPosition(100.f, 400.f);

		sf::RectangleShape e3(sf::Vector2f(100, 100));
		e3.setFillColor(sf::Color(255, 255, 255));
		e3.setPosition(200.f, 400.f);

		sf::RectangleShape e4(sf::Vector2f(100, 100));
		e4.setFillColor(sf::Color(115, 147, 179));
		e4.setPosition(300.f, 400.f);

		sf::RectangleShape e5(sf::Vector2f(100, 100));
		e5.setFillColor(sf::Color(255, 255, 255));
		e5.setPosition(400.f, 400.f);

		sf::RectangleShape e6(sf::Vector2f(100, 100));
		e6.setFillColor(sf::Color(115, 147, 179));
		e6.setPosition(500.f, 400.f);

		sf::RectangleShape e7(sf::Vector2f(100, 100));
		e7.setFillColor(sf::Color(255, 255, 255));
		e7.setPosition(600.f, 400.f);

		sf::RectangleShape e8(sf::Vector2f(100, 100));
		e8.setFillColor(sf::Color(115, 147, 179));
		e8.setPosition(700.f, 400.f);

		sf::RectangleShape f1(sf::Vector2f(100, 100));
		f1.setFillColor(sf::Color(115, 147, 179));
		f1.setPosition(0.f, 500.f);

		sf::RectangleShape f2(sf::Vector2f(100, 100));
		f2.setFillColor(sf::Color(255, 255, 255));
		f2.setPosition(100.f, 500.f);

		sf::RectangleShape f3(sf::Vector2f(100, 100));
		f3.setFillColor(sf::Color(115, 147, 179));
		f3.setPosition(200.f, 500.f);

		sf::RectangleShape f4(sf::Vector2f(100, 100));
		f4.setFillColor(sf::Color(255, 255, 255));
		f4.setPosition(300.f, 500.f);

		sf::RectangleShape f5(sf::Vector2f(100, 100));
		f5.setFillColor(sf::Color(115, 147, 179));
		f5.setPosition(400.f, 500.f);

		sf::RectangleShape f6(sf::Vector2f(100, 100));
		f6.setFillColor(sf::Color(255, 255, 255));
		f6.setPosition(500.f, 500.f);

		sf::RectangleShape f7(sf::Vector2f(100, 100));
		f7.setFillColor(sf::Color(115, 147, 179));
		f7.setPosition(600.f, 500.f);

		sf::RectangleShape f8(sf::Vector2f(100, 100));
		f8.setFillColor(sf::Color(255, 255, 255));
		f8.setPosition(700.f, 500.f);

		sf::RectangleShape g1(sf::Vector2f(100, 100));
		g1.setFillColor(sf::Color(255, 255, 255));
		g1.setPosition(0.f, 600.f);

		sf::RectangleShape g2(sf::Vector2f(100, 100));
		g2.setFillColor(sf::Color(115, 147, 179));
		g2.setPosition(100.f, 600.f);

		sf::RectangleShape g3(sf::Vector2f(100, 100));
		g3.setFillColor(sf::Color(255, 255, 255));
		g3.setPosition(200.f, 600.f);

		sf::RectangleShape g4(sf::Vector2f(100, 100));
		g4.setFillColor(sf::Color(115, 147, 179));
		g4.setPosition(300.f, 600.f);

		sf::RectangleShape g5(sf::Vector2f(100, 100));
		g5.setFillColor(sf::Color(255, 255, 255));
		g5.setPosition(400.f, 600.f);

		sf::RectangleShape g6(sf::Vector2f(100, 100));
		g6.setFillColor(sf::Color(115, 147, 179));
		g6.setPosition(500.f, 600.f);

		sf::RectangleShape g7(sf::Vector2f(100, 100));
		g7.setFillColor(sf::Color(255, 255, 255));
		g7.setPosition(600.f, 600.f);

		sf::RectangleShape g8(sf::Vector2f(100, 100));
		g8.setFillColor(sf::Color(115, 147, 179));
		g8.setPosition(700.f, 600.f);

		sf::RectangleShape h1(sf::Vector2f(100, 100));
		h1.setFillColor(sf::Color(115, 147, 179));
		h1.setPosition(0.f, 700.f);

		sf::RectangleShape h2(sf::Vector2f(100, 100));
		h2.setFillColor(sf::Color(255, 255, 255));
		h2.setPosition(100.f, 700.f);

		sf::RectangleShape h3(sf::Vector2f(100, 100));
		h3.setFillColor(sf::Color(115, 147, 179));
		h3.setPosition(200.f, 700.f);

		sf::RectangleShape h4(sf::Vector2f(100, 100));
		h4.setFillColor(sf::Color(255, 255, 255));
		h4.setPosition(300.f, 700.f);

		sf::RectangleShape h5(sf::Vector2f(100, 100));
		h5.setFillColor(sf::Color(115, 147, 179));
		h5.setPosition(400.f, 700.f);

		sf::RectangleShape h6(sf::Vector2f(100, 100));
		h6.setFillColor(sf::Color(255, 255, 255));
		h6.setPosition(500.f, 700.f);

		sf::RectangleShape h7(sf::Vector2f(100, 100));
		h7.setFillColor(sf::Color(115, 147, 179));
		h7.setPosition(600.f, 700.f);

		sf::RectangleShape h8(sf::Vector2f(100, 100));
		h8.setFillColor(sf::Color(255, 255, 255));
		h8.setPosition(700.f, 700.f);


		float dx = 0, dy = 0;


		bool a1square = 0;

		double moving = 0;
		int valid = 0;

		int oldx, oldy;

		while (window.isOpen())
		{
			sf::Event event;
			sf::Event MouseReleased;
			while (window.pollEvent(event))
			{
				if (event.type == sf::Event::Closed)
				{

					window.close();
				}
				window.clear();
			}
			if (event.type == sf::Event::MouseButtonPressed)
			{
				if (event.key.code == sf::Mouse::Left)



				{
					sf::Vector2i mpos = sf::Mouse::getPosition(window);
					int x = mpos.x / size;
					int y = mpos.y / size;
					valid = 0;




					std::cout << "ChessPiece: " << board[y][x] << "   ";
					std::cout << "x: " << x << "   " << "y: " << y << std::endl;
					std::cout << board[y][x] << std::endl;

					// This identifies what piece is being selected by using the y and x axis of the mouse click and board[][]

					if (board[y][x] == blackrook1.pieceID)
					{
						oldx = x;
						oldy = y;


						std::cout << "Moving Black Rook";
						moving = blackrook1.pieceID;

					}
					if (board[y][x] == blackrook2.pieceID)
					{
						oldx = x;
						oldy = y;
						
						
						std::cout << "Moving Black Rook";
						moving = blackrook2.pieceID;

					}

					if (board[y][x] == blackking.pieceID)
					{
						oldx = x;
						oldy = y;


						std::cout << "Moving Black King";
						moving = blackking.pieceID;

					}
					
					if (board[y][x] == blackqueen.pieceID)
					{
						oldx = x;
						oldy = y;


						std::cout << "Moving Black Queen";
						moving = blackqueen.pieceID;

					}
					
					if (board[y][x] == blackbishop1.pieceID)
					{
						oldx = x;
						oldy = y;


						std::cout << "Moving Black Bishop";
						moving = blackbishop1.pieceID;

					}

					if (board[y][x] == blackbishop2.pieceID)
					{
						oldx = x;
						oldy = y;


						std::cout << "Moving Black Bishop";
						moving = blackbishop2.pieceID;

					}

					if (board[y][x] == blackknight1.pieceID)
					{
						oldx = x;
						oldy = y;


						std::cout << "Moving Black Knight";
						moving = blackknight1.pieceID;

					}



					if (board[y][x] == blackknight2.pieceID)
					{
						oldx = x;
						oldy = y;


						std::cout << "Moving Black Knight";
						moving = blackknight2.pieceID;

					}

					if (board[y][x] == blackpawn1.pieceID)
					{
						oldx = x;
						oldy = y;


						std::cout << "Moving Black Pawn";
						moving = blackpawn1.pieceID;

					}

					if (board[y][x] == blackpawn2.pieceID)
					{
						oldx = x;
						oldy = y;


						std::cout << "Moving Black Pawn";
						moving = blackpawn2.pieceID;

					}

					if (board[y][x] == blackpawn3.pieceID)
					{
						oldx = x;
						oldy = y;


						std::cout << "Moving Black Pawn";
						moving = blackpawn3.pieceID;

					}

					if (board[y][x] == blackpawn4.pieceID)
					{
						oldx = x;
						oldy = y;


						std::cout << "Moving Black Pawn";
						moving = blackpawn4.pieceID;

					}

					if (board[y][x] == blackpawn5.pieceID)
					{
						oldx = x;
						oldy = y;


						std::cout << "Moving Black Pawn";
						moving = blackpawn5.pieceID;

					}

					if (board[y][x] == blackpawn6.pieceID)
					{
						oldx = x;
						oldy = y;


						std::cout << "Moving Black Pawn";
						moving = blackpawn6.pieceID;

					}

					if (board[y][x] == blackpawn7.pieceID)
					{
						oldx = x;
						oldy = y;


						std::cout << "Moving Black Pawn";
						moving = blackpawn7.pieceID;

					}

					if (board[y][x] == blackpawn8.pieceID)
					{
						oldx = x;
						oldy = y;


						std::cout << "Moving Black Pawn";
						moving = blackpawn8.pieceID;

					}


					// white pieeces
					if (board[y][x] == whiteking.pieceID)
					{
						oldx = x;
						oldy = y;


						std::cout << "Moving White King";
						moving = whiteking.pieceID;

					}


					if (board[y][x] == whiterook1.pieceID)
					{
						oldx = x;
						oldy = y;


						std::cout << "Moving White Rook";
						moving = whiterook1.pieceID;

					}

					if (board[y][x] == whitepawn1.pieceID)
					{
						oldx = x;
						oldy = y;


						std::cout << "Moving White Pawn";
						moving = whitepawn1.pieceID;

					}

					if (board[y][x] == whitepawn4.pieceID)
					{
						oldx = x;
						oldy = y;


						std::cout << "Moving White Pawn";
						moving = whitepawn4.pieceID;

					}






				}
				if (event.type == sf::Event::MouseButtonPressed)
				{
					if (event.key.code == sf::Mouse::Middle)
					{
						std::cout << "cancelled";
						moving = 0;

					}

				}


				// This Determins how the piece selected moves and its rules with exceptions for illegal moves

				if (moving == blackrook1.pieceID && event.type == sf::Event::MouseButtonPressed)
				{
					if (event.key.code == sf::Mouse::Right)
					{



						sf::Vector2i mpos = sf::Mouse::getPosition(window);
						int x = mpos.x / size;
						int y = mpos.y / size;
						int dx = x - oldx;
						int dy = y - oldy;
						int checker = 0;

						for (int i = 0; i < 8; i++)
						{




							if ((x == oldx + i && y == oldy || x == oldx - i && y == oldy) || (y == oldy + i && x == oldx || y == oldy - i && x == oldx))
							{

								if (turn == 1 && (oldy < y && x == oldx)) // Rook moving down
								{

									for (int i = oldy + 1; i < y; i++)
									{

										if (board[y][x] >= 0 && board[i][x] == 0 || board[i][x] == -4)
										{
											checker++;


										}


									}

									if (board[y][x] >= 0 && checker == (y - 1) - oldy)


									{
										if (board[y][x] == whiteknight1.pieceID)
										{
											whiteknight1.draw = 0;
											std::cout << "   White Kngiht Was Taken" << std::endl;

										}
										if (board[y][x] == whiteknight2.pieceID)
										{
											whiteknight2.draw = 0;
											std::cout << "   White Kngiht Was Taken" << std::endl;

										}
										if (board[y][x] == whiterook1.pieceID)
										{
											whiterook1.draw = 0;
											std::cout << "   White Rook Was Taken" << std::endl;

										}

										if (board[y][x] == whiterook2.pieceID)
										{
											whiterook2.draw = 0;
											std::cout << "   White Rook Was Taken" << std::endl;

										}
										if (board[y][x] == whitebishop1.pieceID)
										{
											whitebishop1.draw = 0;
											std::cout << "   White Bishop Was Taken" << std::endl;

										}
										if (board[y][x] == whitebishop2.pieceID)
										{
											whitebishop2.draw = 0;
											std::cout << "   White Bishop Was Taken" << std::endl;

										}

										if (board[y][x] == whiteking.pieceID)
										{
											whiteking.draw = 0;
											std::cout << "   White King Was Taken" << std::endl;

										}
										if (board[y][x] == whitequeen.pieceID)
										{
											whitequeen.draw = 0;
											std::cout << "   White Queen was Taken" << std::endl;

										}
										if (board[y][x] == whitepawn1.pieceID)
										{
											whitepawn1.draw = 0;
											std::cout << "   White Pawn was Taken" << std::endl;

										}
										if (board[y][x] == whitepawn2.pieceID)
										{
											whitepawn2.draw = 0;
											std::cout << "   White Pawn was Taken" << std::endl;

										}
										if (board[y][x] == whitepawn3.pieceID)
										{
											whitepawn3.draw = 0;
											std::cout << "   White Pawn was Taken" << std::endl;

										}

										if (board[y][x] == whitepawn4.pieceID)
										{
											whitepawn4.draw = 0;
											std::cout << "   White Pawn was Taken" << std::endl;

										}

										if (board[y][x] == whitepawn5.pieceID)
										{
											whitepawn5.draw = 0;
											std::cout << "   White Pawn was Taken" << std::endl;

										}
										if (board[y][x] == whitepawn6.pieceID)
										{
											whitepawn6.draw = 0;
											std::cout << "   White Pawn was Taken" << std::endl;

										}

										if (board[y][x] == whitepawn7.pieceID)
										{
											whitepawn6.draw = 0;
											std::cout << "   White Pawn was Taken" << std::endl;

										}

										if (board[y][x] == whitepawn8.pieceID)
										{
											whitepawn8.draw = 0;
											std::cout << "   White Pawn was Taken" << std::endl;

										}
										valid = 1;

										blackrooksprite1.setPosition(x * size, y * size);

										board[y][x] = -4;
										board[oldy][oldx] = 0;
										moving = 0;

										std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;
										std::cout << "chcker: " << checker << std::endl;
										std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
										std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;
										checker = 0;

										turn--;
									}








								}

								if (turn == 1 && (oldy > y && x == oldx)) // Rook Moving Up
								{
									for (int i = oldy - 1; i > y; i--)
									{
										if (board[y][x] >= 0 && board[i][x] == 0 || board[i][x] == -4)
										{
											checker++;

										}


									}


									if (board[y][x] >= 0 && checker == (oldy - 1) - y)
									{
										if (board[y][x] == whiteknight1.pieceID)
										{
											whiteknight1.draw = 0;
											std::cout << "   White Kngiht Was Taken" << std::endl;

										}
										if (board[y][x] == whiteknight2.pieceID)
										{
											whiteknight2.draw = 0;
											std::cout << "   White Kngiht Was Taken" << std::endl;

										}
										if (board[y][x] == whiterook1.pieceID)
										{
											whiterook1.draw = 0;
											std::cout << "   White Rook Was Taken" << std::endl;

										}

										if (board[y][x] == whiterook2.pieceID)
										{
											whiterook2.draw = 0;
											std::cout << "   White Rook Was Taken" << std::endl;

										}
										if (board[y][x] == whitebishop1.pieceID)
										{
											whitebishop1.draw = 0;
											std::cout << "   White Bishop Was Taken" << std::endl;

										}
										if (board[y][x] == whitebishop2.pieceID)
										{
											whitebishop2.draw = 0;
											std::cout << "   White Bishop Was Taken" << std::endl;

										}

										if (board[y][x] == whiteking.pieceID)
										{
											whiteking.draw = 0;
											std::cout << "   White King Was Taken" << std::endl;

										}
										if (board[y][x] == whitequeen.pieceID)
										{
											whitequeen.draw = 0;
											std::cout << "   White Queen was Taken" << std::endl;

										}
										if (board[y][x] == whitepawn1.pieceID)
										{
											whitepawn1.draw = 0;
											std::cout << "   White Pawn was Taken" << std::endl;

										}
										if (board[y][x] == whitepawn2.pieceID)
										{
											whitepawn2.draw = 0;
											std::cout << "   White Pawn was Taken" << std::endl;

										}
										if (board[y][x] == whitepawn3.pieceID)
										{
											whitepawn3.draw = 0;
											std::cout << "   White Pawn was Taken" << std::endl;

										}

										if (board[y][x] == whitepawn4.pieceID)
										{
											whitepawn4.draw = 0;
											std::cout << "   White Pawn was Taken" << std::endl;

										}

										if (board[y][x] == whitepawn5.pieceID)
										{
											whitepawn5.draw = 0;
											std::cout << "   White Pawn was Taken" << std::endl;

										}
										if (board[y][x] == whitepawn6.pieceID)
										{
											whitepawn6.draw = 0;
											std::cout << "   White Pawn was Taken" << std::endl;

										}

										if (board[y][x] == whitepawn7.pieceID)
										{
											whitepawn6.draw = 0;
											std::cout << "   White Pawn was Taken" << std::endl;

										}

										if (board[y][x] == whitepawn8.pieceID)
										{
											whitepawn8.draw = 0;
											std::cout << "   White Pawn was Taken" << std::endl;

										}
										valid = 1;


										blackrooksprite1.setPosition(x * size, y * size);

										board[y][x] = -4;
										board[oldy][oldx] = 0;
										moving = 0;

										std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;

										std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
										std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;
										checker = 0;
										turn--;

									}


								}



								if (turn == 1 &&(oldx < x && y == oldy)) // Rook Moving Right
								{

									for (int i = oldx + 1; i < x; i++)
									{
										if (board[y][x] >= 0 && board[y][i] == 0 || board[y][i] == -4)
										{
											checker++;

										}
									}

									if (board[y][x] >= 0 && checker == (x - 1) - oldx)
									{
										if (board[y][x] == whiteknight1.pieceID)
										{
											whiteknight1.draw = 0;
											std::cout << "   White Kngiht Was Taken" << std::endl;

										}
										if (board[y][x] == whiteknight2.pieceID)
										{
											whiteknight2.draw = 0;
											std::cout << "   White Kngiht Was Taken" << std::endl;

										}
										if (board[y][x] == whiterook1.pieceID)
										{
											whiterook1.draw = 0;
											std::cout << "   White Rook Was Taken" << std::endl;

										}

										if (board[y][x] == whiterook2.pieceID)
										{
											whiterook2.draw = 0;
											std::cout << "   White Rook Was Taken" << std::endl;

										}
										if (board[y][x] == whitebishop1.pieceID)
										{
											whitebishop1.draw = 0;
											std::cout << "   White Bishop Was Taken" << std::endl;

										}
										if (board[y][x] == whitebishop2.pieceID)
										{
											whitebishop2.draw = 0;
											std::cout << "   White Bishop Was Taken" << std::endl;

										}

										if (board[y][x] == whiteking.pieceID)
										{
											whiteking.draw = 0;
											std::cout << "   White King Was Taken" << std::endl;

										}
										if (board[y][x] == whitequeen.pieceID)
										{
											whitequeen.draw = 0;
											std::cout << "   White Queen was Taken" << std::endl;

										}
										if (board[y][x] == whitepawn1.pieceID)
										{
											whitepawn1.draw = 0;
											std::cout << "   White Pawn was Taken" << std::endl;

										}
										if (board[y][x] == whitepawn2.pieceID)
										{
											whitepawn2.draw = 0;
											std::cout << "   White Pawn was Taken" << std::endl;

										}
										if (board[y][x] == whitepawn3.pieceID)
										{
											whitepawn3.draw = 0;
											std::cout << "   White Pawn was Taken" << std::endl;

										}

										if (board[y][x] == whitepawn4.pieceID)
										{
											whitepawn4.draw = 0;
											std::cout << "   White Pawn was Taken" << std::endl;

										}

										if (board[y][x] == whitepawn5.pieceID)
										{
											whitepawn5.draw = 0;
											std::cout << "   White Pawn was Taken" << std::endl;

										}
										if (board[y][x] == whitepawn6.pieceID)
										{
											whitepawn6.draw = 0;
											std::cout << "   White Pawn was Taken" << std::endl;

										}

										if (board[y][x] == whitepawn7.pieceID)
										{
											whitepawn6.draw = 0;
											std::cout << "   White Pawn was Taken" << std::endl;

										}

										if (board[y][x] == whitepawn8.pieceID)
										{
											whitepawn8.draw = 0;
											std::cout << "   White Pawn was Taken" << std::endl;

										}
										valid = 1;


										blackrooksprite1.setPosition(x * size, y * size);

										board[y][x] = -4;
										board[oldy][oldx] = 0;
										moving = 0;

										std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;

										std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
										std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;
										checker = 0;
										turn--;
									}



								}

								if (turn == 1 && (oldx > x && y == oldy)) // left
								{

									for (int i = oldx - 1; i > x; i--)
									{
										if (board[y][x] >= 0 && board[y][i] == 0 || board[y][i] == -4)
										{
											checker++;

										}


									}

									if (board[y][x] >= 0 && checker == (oldx - 1) - x)
									{
										if (board[y][x] == whiteknight1.pieceID)
										{
											whiteknight1.draw = 0;
											std::cout << "   White Kngiht Was Taken" << std::endl;

										}
										if (board[y][x] == whiteknight2.pieceID)
										{
											whiteknight2.draw = 0;
											std::cout << "   White Kngiht Was Taken" << std::endl;

										}
										if (board[y][x] == whiterook1.pieceID)
										{
											whiterook1.draw = 0;
											std::cout << "   White Rook Was Taken" << std::endl;

										}

										if (board[y][x] == whiterook2.pieceID)
										{
											whiterook2.draw = 0;
											std::cout << "   White Rook Was Taken" << std::endl;

										}
										if (board[y][x] == whitebishop1.pieceID)
										{
											whitebishop1.draw = 0;
											std::cout << "   White Bishop Was Taken" << std::endl;

										}
										if (board[y][x] == whitebishop2.pieceID)
										{
											whitebishop2.draw = 0;
											std::cout << "   White Bishop Was Taken" << std::endl;

										}

										if (board[y][x] == whiteking.pieceID)
										{
											whiteking.draw = 0;
											std::cout << "   White King Was Taken" << std::endl;

										}
										if (board[y][x] == whitequeen.pieceID)
										{
											whitequeen.draw = 0;
											std::cout << "   White Queen was Taken" << std::endl;

										}
										if (board[y][x] == whitepawn1.pieceID)
										{
											whitepawn1.draw = 0;
											std::cout << "   White Pawn was Taken" << std::endl;

										}
										if (board[y][x] == whitepawn2.pieceID)
										{
											whitepawn2.draw = 0;
											std::cout << "   White Pawn was Taken" << std::endl;

										}
										if (board[y][x] == whitepawn3.pieceID)
										{
											whitepawn3.draw = 0;
											std::cout << "   White Pawn was Taken" << std::endl;

										}

										if (board[y][x] == whitepawn4.pieceID)
										{
											whitepawn4.draw = 0;
											std::cout << "   White Pawn was Taken" << std::endl;

										}

										if (board[y][x] == whitepawn5.pieceID)
										{
											whitepawn5.draw = 0;
											std::cout << "   White Pawn was Taken" << std::endl;

										}
										if (board[y][x] == whitepawn6.pieceID)
										{
											whitepawn6.draw = 0;
											std::cout << "   White Pawn was Taken" << std::endl;

										}

										if (board[y][x] == whitepawn7.pieceID)
										{
											whitepawn6.draw = 0;
											std::cout << "   White Pawn was Taken" << std::endl;

										}

										if (board[y][x] == whitepawn8.pieceID)
										{
											whitepawn8.draw = 0;
											std::cout << "   White Pawn was Taken" << std::endl;

										}
										valid = 1;


										blackrooksprite1.setPosition(x * size, y * size);

										board[y][x] = -4;
										board[oldy][oldx] = 0;
										moving = 0;

										std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;

										std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
										std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;
										checker = 0;
										turn--;
									}

								}

								if (valid == 0)
								{
									std::cout << "chcker: " << checker << std::endl;
									std::cout << "illegal Move" << std::endl;
								}





							}
						}


					}


				}
				if (moving == blackrook2.pieceID && event.type == sf::Event::MouseButtonPressed)
				{
					if (event.key.code == sf::Mouse::Right)
					{
						sf::Vector2i mpos = sf::Mouse::getPosition(window);
						int x = mpos.x / size;
						int y = mpos.y / size;
						int dx = x - oldx;
						int dy = y - oldy;
						int checker = 0;

						for (int i = 0; i < 8; i++)
						{




							if ((x == oldx + i && y == oldy || x == oldx - i && y == oldy) || (y == oldy + i && x == oldx || y == oldy - i && x == oldx))
							{

								if (turn == 1 && (oldy < y && x == oldx)) // Rook2 moving down
								{

									for (int i = oldy + 1; i < y; i++)
									{
										if (board[y][x] >= 0 && board[i][x] == 0 || board[i][x] == -4.1)
										{
											checker++;

										}


									}

									if (board[y][x] >= 0 && checker == (y - 1) - oldy)


									{
										if (board[y][x] == whiteknight1.pieceID)
										{
											whiteknight1.draw = 0;
											std::cout << "   White Kngiht Was Taken" << std::endl;

										}
										if (board[y][x] == whiteknight2.pieceID)
										{
											whiteknight2.draw = 0;
											std::cout << "   White Kngiht Was Taken" << std::endl;

										}
										if (board[y][x] == whiterook1.pieceID)
										{
											whiterook1.draw = 0;
											std::cout << "   White Rook Was Taken" << std::endl;

										}

										if (board[y][x] == whiterook2.pieceID)
										{
											whiterook2.draw = 0;
											std::cout << "   White Rook Was Taken" << std::endl;

										}
										if (board[y][x] == whitebishop1.pieceID)
										{
											whitebishop1.draw = 0;
											std::cout << "   White Bishop Was Taken" << std::endl;

										}
										if (board[y][x] == whitebishop2.pieceID)
										{
											whitebishop2.draw = 0;
											std::cout << "   White Bishop Was Taken" << std::endl;

										}

										if (board[y][x] == whiteking.pieceID)
										{
											whiteking.draw = 0;
											std::cout << "   White King Was Taken" << std::endl;

										}
										if (board[y][x] == whitequeen.pieceID)
										{
											whitequeen.draw = 0;
											std::cout << "   White Queen was Taken" << std::endl;

										}
										if (board[y][x] == whitepawn1.pieceID)
										{
											whitepawn1.draw = 0;
											std::cout << "   White Pawn was Taken" << std::endl;

										}
										if (board[y][x] == whitepawn2.pieceID)
										{
											whitepawn2.draw = 0;
											std::cout << "   White Pawn was Taken" << std::endl;

										}
										if (board[y][x] == whitepawn3.pieceID)
										{
											whitepawn3.draw = 0;
											std::cout << "   White Pawn was Taken" << std::endl;

										}

										if (board[y][x] == whitepawn4.pieceID)
										{
											whitepawn4.draw = 0;
											std::cout << "   White Pawn was Taken" << std::endl;

										}

										if (board[y][x] == whitepawn5.pieceID)
										{
											whitepawn5.draw = 0;
											std::cout << "   White Pawn was Taken" << std::endl;

										}
										if (board[y][x] == whitepawn6.pieceID)
										{
											whitepawn6.draw = 0;
											std::cout << "   White Pawn was Taken" << std::endl;

										}

										if (board[y][x] == whitepawn7.pieceID)
										{
											whitepawn6.draw = 0;
											std::cout << "   White Pawn was Taken" << std::endl;

										}

										if (board[y][x] == whitepawn8.pieceID)
										{
											whitepawn8.draw = 0;
											std::cout << "   White Pawn was Taken" << std::endl;

										}
										valid = 1;

										blackrooksprite2.setPosition(x * size, y * size);

										board[y][x] = -4.1;
										board[oldy][oldx] = 0;
										moving = 0;

										std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;
										std::cout << "chcker: " << checker << std::endl;
										std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
										std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;
										checker = 0;
										turn--;
									}








								}

								if (turn == 1 && (oldy > y && x == oldx)) // Rook Moving Up
								{
									for (int i = oldy - 1; i > y; i--)
									{
										if (board[y][x] >= 0 && board[i][x] == 0 || board[i][x] == -4.1)
										{
											checker++;

										}


									}


									if (board[y][x] >= 0 && checker == (oldy - 1) - y)
									{
										if (board[y][x] == whiteknight1.pieceID)
										{
											whiteknight1.draw = 0;
											std::cout << "   White Kngiht Was Taken" << std::endl;

										}
										if (board[y][x] == whiteknight2.pieceID)
										{
											whiteknight2.draw = 0;
											std::cout << "   White Kngiht Was Taken" << std::endl;

										}
										if (board[y][x] == whiterook1.pieceID)
										{
											whiterook1.draw = 0;
											std::cout << "   White Rook Was Taken" << std::endl;

										}

										if (board[y][x] == whiterook2.pieceID)
										{
											whiterook2.draw = 0;
											std::cout << "   White Rook Was Taken" << std::endl;

										}
										if (board[y][x] == whitebishop1.pieceID)
										{
											whitebishop1.draw = 0;
											std::cout << "   White Bishop Was Taken" << std::endl;

										}
										if (board[y][x] == whitebishop2.pieceID)
										{
											whitebishop2.draw = 0;
											std::cout << "   White Bishop Was Taken" << std::endl;

										}

										if (board[y][x] == whiteking.pieceID)
										{
											whiteking.draw = 0;
											std::cout << "   White King Was Taken" << std::endl;

										}
										if (board[y][x] == whitequeen.pieceID)
										{
											whitequeen.draw = 0;
											std::cout << "   White Queen was Taken" << std::endl;

										}
										if (board[y][x] == whitepawn1.pieceID)
										{
											whitepawn1.draw = 0;
											std::cout << "   White Pawn was Taken" << std::endl;

										}
										if (board[y][x] == whitepawn2.pieceID)
										{
											whitepawn2.draw = 0;
											std::cout << "   White Pawn was Taken" << std::endl;

										}
										if (board[y][x] == whitepawn3.pieceID)
										{
											whitepawn3.draw = 0;
											std::cout << "   White Pawn was Taken" << std::endl;

										}

										if (board[y][x] == whitepawn4.pieceID)
										{
											whitepawn4.draw = 0;
											std::cout << "   White Pawn was Taken" << std::endl;

										}

										if (board[y][x] == whitepawn5.pieceID)
										{
											whitepawn5.draw = 0;
											std::cout << "   White Pawn was Taken" << std::endl;

										}
										if (board[y][x] == whitepawn6.pieceID)
										{
											whitepawn6.draw = 0;
											std::cout << "   White Pawn was Taken" << std::endl;

										}

										if (board[y][x] == whitepawn7.pieceID)
										{
											whitepawn6.draw = 0;
											std::cout << "   White Pawn was Taken" << std::endl;

										}

										if (board[y][x] == whitepawn8.pieceID)
										{
											whitepawn8.draw = 0;
											std::cout << "   White Pawn was Taken" << std::endl;

										}
										valid = 1;


										blackrooksprite2.setPosition(x * size, y * size);

										board[y][x] = -4.1;
										board[oldy][oldx] = 0;
										moving = 0;

										std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;

										std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
										std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;
										checker = 0;
										turn++;

									}


								}



								if (turn == 1 && (oldx < x && y == oldy)) // Rook Moving Right
								{

									for (int i = oldx + 1; i < x; i++)
									{
										if (board[y][x] >= 0 && board[y][i] == 0 || board[y][i] == -4.1)
										{
											checker++;

										}
									}

									if (board[y][x] >= 0 && checker == (x - 1) - oldx)
									{
										if (board[y][x] == whiteknight1.pieceID)
										{
											whiteknight1.draw = 0;
											std::cout << "   White Kngiht Was Taken" << std::endl;

										}
										if (board[y][x] == whiteknight2.pieceID)
										{
											whiteknight2.draw = 0;
											std::cout << "   White Kngiht Was Taken" << std::endl;

										}
										if (board[y][x] == whiterook1.pieceID)
										{
											whiterook1.draw = 0;
											std::cout << "   White Rook Was Taken" << std::endl;

										}

										if (board[y][x] == whiterook2.pieceID)
										{
											whiterook2.draw = 0;
											std::cout << "   White Rook Was Taken" << std::endl;

										}
										if (board[y][x] == whitebishop1.pieceID)
										{
											whitebishop1.draw = 0;
											std::cout << "   White Bishop Was Taken" << std::endl;

										}
										if (board[y][x] == whitebishop2.pieceID)
										{
											whitebishop2.draw = 0;
											std::cout << "   White Bishop Was Taken" << std::endl;

										}

										if (board[y][x] == whiteking.pieceID)
										{
											whiteking.draw = 0;
											std::cout << "   White King Was Taken" << std::endl;

										}
										if (board[y][x] == whitequeen.pieceID)
										{
											whitequeen.draw = 0;
											std::cout << "   White Queen was Taken" << std::endl;

										}
										if (board[y][x] == whitepawn1.pieceID)
										{
											whitepawn1.draw = 0;
											std::cout << "   White Pawn was Taken" << std::endl;

										}
										if (board[y][x] == whitepawn2.pieceID)
										{
											whitepawn2.draw = 0;
											std::cout << "   White Pawn was Taken" << std::endl;

										}
										if (board[y][x] == whitepawn3.pieceID)
										{
											whitepawn3.draw = 0;
											std::cout << "   White Pawn was Taken" << std::endl;

										}

										if (board[y][x] == whitepawn4.pieceID)
										{
											whitepawn4.draw = 0;
											std::cout << "   White Pawn was Taken" << std::endl;

										}

										if (board[y][x] == whitepawn5.pieceID)
										{
											whitepawn5.draw = 0;
											std::cout << "   White Pawn was Taken" << std::endl;

										}
										if (board[y][x] == whitepawn6.pieceID)
										{
											whitepawn6.draw = 0;
											std::cout << "   White Pawn was Taken" << std::endl;

										}

										if (board[y][x] == whitepawn7.pieceID)
										{
											whitepawn6.draw = 0;
											std::cout << "   White Pawn was Taken" << std::endl;

										}

										if (board[y][x] == whitepawn8.pieceID)
										{
											whitepawn8.draw = 0;
											std::cout << "   White Pawn was Taken" << std::endl;

										}
										valid = 1;


										blackrooksprite2.setPosition(x * size, y * size);

										board[y][x] = -4.1;
										board[oldy][oldx] = 0;
										moving = 0;

										std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;

										std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
										std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;

										checker = 0;
										turn--;
									}



								}

								if (turn == 1 && (oldx > x && y == oldy)) // left
								{

									for (int i = oldx - 1; i > x; i--)
									{
										if (board[y][x] >= 0 && board[y][i] == 0 || board[y][i] == -4.1)
										{
											checker++;

										}


									}

									if (board[y][x] >= 0 && checker == (oldx - 1) - x)
									{
										if (board[y][x] == whiteknight1.pieceID)
										{
											whiteknight1.draw = 0;
											std::cout << "   White Kngiht Was Taken" << std::endl;

										}
										if (board[y][x] == whiteknight2.pieceID)
										{
											whiteknight2.draw = 0;
											std::cout << "   White Kngiht Was Taken" << std::endl;

										}
										if (board[y][x] == whiterook1.pieceID)
										{
											whiterook1.draw = 0;
											std::cout << "   White Rook Was Taken" << std::endl;

										}

										if (board[y][x] == whiterook2.pieceID)
										{
											whiterook2.draw = 0;
											std::cout << "   White Rook Was Taken" << std::endl;

										}
										if (board[y][x] == whitebishop1.pieceID)
										{
											whitebishop1.draw = 0;
											std::cout << "   White Bishop Was Taken" << std::endl;

										}
										if (board[y][x] == whitebishop2.pieceID)
										{
											whitebishop2.draw = 0;
											std::cout << "   White Bishop Was Taken" << std::endl;

										}

										if (board[y][x] == whiteking.pieceID)
										{
											whiteking.draw = 0;
											std::cout << "   White King Was Taken" << std::endl;

										}
										if (board[y][x] == whitequeen.pieceID)
										{
											whitequeen.draw = 0;
											std::cout << "   White Queen was Taken" << std::endl;

										}
										if (board[y][x] == whitepawn1.pieceID)
										{
											whitepawn1.draw = 0;
											std::cout << "   White Pawn was Taken" << std::endl;

										}
										if (board[y][x] == whitepawn2.pieceID)
										{
											whitepawn2.draw = 0;
											std::cout << "   White Pawn was Taken" << std::endl;

										}
										if (board[y][x] == whitepawn3.pieceID)
										{
											whitepawn3.draw = 0;
											std::cout << "   White Pawn was Taken" << std::endl;

										}

										if (board[y][x] == whitepawn4.pieceID)
										{
											whitepawn4.draw = 0;
											std::cout << "   White Pawn was Taken" << std::endl;

										}

										if (board[y][x] == whitepawn5.pieceID)
										{
											whitepawn5.draw = 0;
											std::cout << "   White Pawn was Taken" << std::endl;

										}
										if (board[y][x] == whitepawn6.pieceID)
										{
											whitepawn6.draw = 0;
											std::cout << "   White Pawn was Taken" << std::endl;

										}

										if (board[y][x] == whitepawn7.pieceID)
										{
											whitepawn6.draw = 0;
											std::cout << "   White Pawn was Taken" << std::endl;

										}

										if (board[y][x] == whitepawn8.pieceID)
										{
											whitepawn8.draw = 0;
											std::cout << "   White Pawn was Taken" << std::endl;

										}
										valid = 1;


										blackrooksprite2.setPosition(x * size, y * size);

										board[y][x] = -4.1;
										board[oldy][oldx] = 0;
										moving = 0;

										std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;

										std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
										std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;
										checker = 0;
										turn--;
									}

								}

								if (valid == 0)
								{
									std::cout << "chcker: " << checker << std::endl;
									std::cout << "illegal Move" << std::endl;
								}





							}
						}


					}

				}
				if (moving == blackking.pieceID && event.type == sf::Event::MouseButtonPressed)
				{
					if (event.key.code == sf::Mouse::Right)
					{

						sf::Vector2i mpos = sf::Mouse::getPosition(window);
						int x = mpos.x / size;
						int y = mpos.y / size;
						int dx = x - oldx;
						int dy = y - oldy;
						int checker = 0;


						if (oldx <= x + 1 && oldy <= y + 1 || oldx <= x - 1 && oldy <= y - 1 || oldx <= x + 1 && oldy <= y - 1 || oldx <= x - 1 && oldy <= y + 1)
						{


							if (board[y][x] >= 0 && (x == oldx + 1 && y == oldy || x == oldx - 1 && y == oldy || y == oldy + 1 && x == oldx || y == oldy - 1 && x == oldx || x == oldx + 1 && y == oldy + 1 || x == oldx - 1 && y == oldy + 1 || x == oldx - 1 && y == oldy - 1 || x == oldx + 1 && y == oldy - 1))

							{
								valid = 1;


								blackkingsprite.setPosition(x* size, y* size);

								board[y][x] = -6;
								board[oldy][oldx] = 0;
								moving = 0;

								std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;
								std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
								std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;
	

							}

							if (valid == 0)
							{
								
								std::cout << "illegal Move" << std::endl;
							}

							
						}




					}



				}
				if (moving == blackbishop1.pieceID && event.type == sf::Event::MouseButtonPressed)
				{
					if (event.key.code == sf::Mouse::Right)
					{

						sf::Vector2i mpos = sf::Mouse::getPosition(window);
						int x = mpos.x / size;
						int y = mpos.y / size;
						int dx = x - oldx;
						int dy = y - oldy;
						int checker = 0;


						for (int i = 0; i < 8; i++)
						{
							if ((x == oldx + i && y == oldy + i) || (x == oldx - i && y == oldy - i) || (x == oldx + i && y == oldy - i) || (x == oldx - i && y == oldy + i))
							{

								if (x > oldx && y > oldy) // moving down right
								{

									for (int i = oldx + 1, j = oldy + 1; i < x && j < y; i++, j++)
									{
										if (board[y][x] >= 0 && board[j][i] == 0 || board[i][j] == -3)
										{
											checker++;

										}


									}

									if (board[y][x] >= 0 && checker == (y - 1) - oldy && checker == (x - 1) - oldx)


									{

										valid = 1;

										blackbishopsprite1.setPosition(x * size, y * size);

										board[y][x] = -3;
										board[oldy][oldx] = 0;
										moving = 0;

										std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;
										std::cout << "chcker: " << checker << std::endl;
										std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
										std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;
										checker = 0;

									}


								}

								if (x < oldx && y > oldy) // moving down left
								{

									for (int i = oldx - 1, j = oldy + 1; i > x && j < y; i--, j++)
									{
										if (board[y][x] >= 0 && board[j][i] == 0 || board[i][j] == -3)
										{
											checker++;

										}


									}

									if (board[y][x] >= 0 && checker == (y - 1) - oldy && checker == (oldx - 1) - x)


									{

										valid = 1;

										blackbishopsprite1.setPosition(x * size, y * size);

										board[y][x] = -3;
										board[oldy][oldx] = 0;
										moving = 0;

										std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;
										std::cout << "chcker: " << checker << std::endl;
										std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
										std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;
										checker = 0;

									}
								}

								if (x < oldx && y < oldy) // moving up left
								{

									for (int i = oldx - 1, j = oldy - 1; i > x && j > y; i--, j--)
									{
										if (board[y][x] >= 0 && board[j][i] == 0 || board[i][j] == -3)
										{
											checker++;

										}


									}

									if (board[y][x] >= 0 && checker == (oldx - 1) - x && checker == (oldy - 1) - y)


									{

										valid = 1;

										blackbishopsprite1.setPosition(x * size, y * size);

										board[y][x] = -3;
										board[oldy][oldx] = 0;
										moving = 0;

										std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;
										std::cout << "chcker: " << checker << std::endl;
										std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
										std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;
										checker = 0;

									}
								}

								if (x > oldx && y < oldy) // moving up right
								{

									for (int i = oldx + 1, j = oldy - 1; i < x && j > y; i++, j--)
									{
										if (board[y][x] >= 0 && board[j][i] == 0 || board[i][j] == -3)
										{
											checker++;

										}


									}

									if (board[y][x] >= 0 && checker == (x - 1) - oldx && checker == (oldy - 1) - y)


									{

										valid = 1;

										blackbishopsprite1.setPosition(x * size, y * size);

										board[y][x] = -3;
										board[oldy][oldx] = 0;
										moving = 0;

										std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;
										std::cout << "chcker: " << checker << std::endl;
										std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
										std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;
										checker = 0;

									}
								}


								if (valid == 0)
								{
									std::cout << "chcker: " << checker << std::endl;
									std::cout << "illegal Move" << std::endl;
								}














								

							}


						}



					}

				}
				if (moving == blackbishop2.pieceID && event.type == sf::Event::MouseButtonPressed)
				{
					if (event.key.code == sf::Mouse::Right)
					{

						sf::Vector2i mpos = sf::Mouse::getPosition(window);
						int x = mpos.x / size;
						int y = mpos.y / size;
						int dx = x - oldx;
						int dy = y - oldy;
						int checker = 0;


						for (int i = 0; i < 8; i++)
						{
							if ((x == oldx + i && y == oldy + i) || (x == oldx - i && y == oldy - i) || (x == oldx + i && y == oldy - i) || (x == oldx - i && y == oldy + i))
							{

								if (x > oldx && y > oldy) // moving down right
								{

									for (int i = oldx + 1, j = oldy + 1; i < x && j < y; i++, j++)
									{
										if (board[y][x] >= 0 && board[j][i] == 0 || board[i][j] == -3.1)
										{
											checker++;

										}


									}

									if (board[y][x] >= 0 && checker == (y - 1) - oldy && checker == (x - 1) - oldx)


									{

										valid = 1;

										blackbishopsprite2.setPosition(x * size, y * size);

										board[y][x] = -3.1;
										board[oldy][oldx] = 0;
										moving = 0;

										std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;
										std::cout << "chcker: " << checker << std::endl;
										std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
										std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;
										checker = 0;

									}


								}

								if (x < oldx && y > oldy) // moving down left
								{

									for (int i = oldx - 1, j = oldy + 1; i > x && j < y; i--, j++)
									{
										if (board[y][x] >= 0 && board[j][i] == 0 || board[i][j] == -3.1)
										{
											checker++;

										}


									}

									if (board[y][x] >= 0 && checker == (y - 1) - oldy && checker == (oldx - 1) - x)


									{

										valid = 1;

										blackbishopsprite2.setPosition(x * size, y * size);

										board[y][x] = -3.1;
										board[oldy][oldx] = 0;
										moving = 0;

										std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;
										std::cout << "chcker: " << checker << std::endl;
										std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
										std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;
										checker = 0;

									}
								}

								if (x < oldx&& y < oldy) // moving up left
								{

									for (int i = oldx - 1, j = oldy - 1; i > x && j > y; i--, j--)
									{
										if (board[y][x] >= 0 && board[j][i] == 0 || board[i][j] == -3.1)
										{
											checker++;

										}


									}

									if (board[y][x] >= 0 && checker == (oldx - 1) - x && checker == (oldy - 1) - y)


									{

										valid = 1;

										blackbishopsprite2.setPosition(x * size, y * size);

										board[y][x] = -3.1;
										board[oldy][oldx] = 0;
										moving = 0;

										std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;
										std::cout << "chcker: " << checker << std::endl;
										std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
										std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;
										checker = 0;

									}
								}

								if (x > oldx && y < oldy) // moving up right
								{

									for (int i = oldx + 1, j = oldy - 1; i < x && j > y; i++, j--)
									{
										if (board[y][x] >= 0 && board[j][i] == 0 || board[i][j] == -3.1)
										{
											checker++;

										}


									}

									if (board[y][x] >= 0 && checker == (x - 1) - oldx && checker == (oldy - 1) - y)


									{

										valid = 1;

										blackbishopsprite2.setPosition(x * size, y * size);

										board[y][x] = -3;
										board[oldy][oldx] = 0;
										moving = 0;

										std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;
										std::cout << "chcker: " << checker << std::endl;
										std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
										std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;
										checker = 0;

									}
								}


								if (valid == 0)
								{
									std::cout << "chcker: " << checker << std::endl;
									std::cout << "illegal Move" << std::endl;
								}
















							}


						}



					}

				}
				if (moving == blackknight1.pieceID && event.type == sf::Event::MouseButtonPressed)
				{
					if (event.key.code == sf::Mouse::Right)
					{

						sf::Vector2i mpos = sf::Mouse::getPosition(window);
						int x = mpos.x / size;
						int y = mpos.y / size;
						int dx = x - oldx;
						int dy = y - oldy;
						int checker = 0;


						if (x == oldx + 1 && y == oldy + 2 || x == oldx + 2 && y == oldy + 1 || x == oldx - 1 && y == oldy + 2 || x == oldx - 2 && y == oldy + 1 || x == oldx + 1 && y == oldy - 2 || x == oldx + 2 && y == oldy - 1 || x == oldx - 1 && y == oldy - 2 || x == oldx - 2 && y == oldy - 1)
						{


							if (board[y][x] >= 0)

							{
								valid = 1;


								blackknightsprite1.setPosition(x * size, y * size);

								board[y][x] = -2;
								board[oldy][oldx] = 0;
								moving = 0;

								std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;
								std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
								std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;


							}

							if (valid == 0)
							{

								std::cout << "illegal Move" << std::endl;
							}


						}




					}



				}
				if (moving == blackknight2.pieceID && event.type == sf::Event::MouseButtonPressed)
				{
					if (event.key.code == sf::Mouse::Right)
					{

						sf::Vector2i mpos = sf::Mouse::getPosition(window);
						int x = mpos.x / size;
						int y = mpos.y / size;
						int dx = x - oldx;
						int dy = y - oldy;
						int checker = 0;


						if (x == oldx + 1 && y == oldy + 2 || x == oldx + 2 && y == oldy + 1 || x == oldx - 1 && y == oldy + 2 || x == oldx - 2 && y == oldy + 1 || x == oldx + 1 && y == oldy - 2 || x == oldx + 2 && y == oldy - 1 || x == oldx - 1 && y == oldy - 2 || x == oldx - 2 && y == oldy - 1)
						{


							if (board[y][x] >= 0)

							{
								valid = 1;


								blackknightsprite2.setPosition(x * size, y * size);

								board[y][x] = -2.1;
								board[oldy][oldx] = 0;
								moving = 0;

								std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;
								std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
								std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;


							}

							if (valid == 0)
							{

								std::cout << "illegal Move" << std::endl;
							}


						}




					}



				}
				if (moving == blackqueen.pieceID && event.type == sf::Event::MouseButtonPressed)
				{
					if (event.key.code == sf::Mouse::Right)
					{
						sf::Vector2i mpos = sf::Mouse::getPosition(window);
						int x = mpos.x / size;
						int y = mpos.y / size;
						int dx = x - oldx;
						int dy = y - oldy;
						int checker = 0;

						for (int i = 0; i < 8; i++)
						{




							if (((x == oldx + i && y == oldy || x == oldx - i && y == oldy) || (y == oldy + i && x == oldx || y == oldy - i && x == oldx)) || (x == oldx + i && y == oldy + i) || (x == oldx - i && y == oldy - i) || (x == oldx + i && y == oldy - i) || (x == oldx - i && y == oldy + i))
							{

								if (oldy < y && x == oldx) // Rook2 moving down
								{

									for (int i = oldy + 1; i < y; i++)
									{
										if (board[y][x] >= 0 && board[i][x] == 0 || board[i][x] == -4.1)
										{
											checker++;

										}


									}

									if (board[y][x] >= -0 && checker == (y - 1) - oldy)


									{
										valid = 1;

										blackqueensprite.setPosition(x * size, y * size);

										board[y][x] = -5;
										board[oldy][oldx] = 0;
										moving = 0;

										std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;
										std::cout << "chcker: " << checker << std::endl;
										std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
										std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;
										checker = 0;

									}








								}

								if (oldy > y && x == oldx) // Rook Moving Up
								{
									for (int i = oldy - 1; i > y; i--)
									{
										if (board[y][x] >= 0 && board[i][x] == 0 || board[i][x] == -4.1)
										{
											checker++;

										}


									}


									if (board[y][x] >= 0 && checker == (oldy - 1) - y)
									{
										valid = 1;


										blackqueensprite.setPosition(x * size, y * size);

										board[y][x] = -5;
										board[oldy][oldx] = 0;
										moving = 0;

										std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;

										std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
										std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;


									}


								}



								if (oldx < x && y == oldy) // Rook Moving Right
								{

									for (int i = oldx + 1; i < x; i++)
									{
										if (board[y][x] >= 0 && board[y][i] == 0 || board[y][i] == -4.1)
										{
											checker++;

										}
									}

									if (board[y][x] >= 0 && checker == (x - 1) - oldx)
									{
										valid = 1;


										blackqueensprite.setPosition(x * size, y * size);

										board[y][x] = -5;
										board[oldy][oldx] = 0;
										moving = 0;

										std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;

										std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
										std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;
									}



								}

								if (oldx > x && y == oldy) // left
								{

									for (int i = oldx - 1; i > x; i--)
									{
										if (board[y][x] >= 0 && board[y][i] == 0 || board[y][i] == -4.1)
										{
											checker++;

										}


									}

									if (board[y][x] >= 0 && checker == (oldx - 1) - x)
									{
										valid = 1;


										blackqueensprite.setPosition(x * size, y * size);

										board[y][x] = -5;
										board[oldy][oldx] = 0;
										moving = 0;

										std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;

										std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
										std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;
									}

								

								}

								if (x > oldx && y > oldy) // moving down right
								{

									for (int i = oldx + 1, j = oldy + 1; i < x && j < y; i++, j++)
									{
										if (board[y][x] >= 0 && board[j][i] == 0 || board[i][j] == -3)
										{
											checker++;

										}


									}

									if (board[y][x] >= 0 && checker == (y - 1) - oldy && checker == (x - 1) - oldx)


									{

										valid = 1;

										blackqueensprite.setPosition(x * size, y * size);

										board[y][x] = -5;
										board[oldy][oldx] = 0;
										moving = 0;

										std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;
										std::cout << "chcker: " << checker << std::endl;
										std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
										std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;
										checker = 0;

									}


								}

								if (x < oldx && y > oldy) // moving down left
								{

									for (int i = oldx - 1, j = oldy + 1; i > x && j < y; i--, j++)
									{
										if (board[y][x] >= 0 && board[j][i] == 0 || board[i][j] == -3)
										{
											checker++;

										}


									}

									if (board[y][x] >= 0 && checker == (y - 1) - oldy && checker == (oldx - 1) - x)


									{

										valid = 1;

										blackqueensprite.setPosition(x * size, y * size);

										board[y][x] = -5;
										board[oldy][oldx] = 0;
										moving = 0;

										std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;
										std::cout << "chcker: " << checker << std::endl;
										std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
										std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;
										checker = 0;

									}
								}

								if (x < oldx&& y < oldy) // moving up left
								{

									for (int i = oldx - 1, j = oldy - 1; i > x && j > y; i--, j--)
									{
										if (board[y][x] >= 0 && board[j][i] == 0 || board[i][j] == -3)
										{
											checker++;

										}


									}

									if (board[y][x] >= 0 && checker == (oldx - 1) - x && checker == (oldy - 1) - y)


									{

										valid = 1;

										blackqueensprite.setPosition(x * size, y * size);

										board[y][x] = -5;
										board[oldy][oldx] = 0;
										moving = 0;

										std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;
										std::cout << "chcker: " << checker << std::endl;
										std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
										std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;
										checker = 0;

									}
								}

								if (x > oldx && y < oldy) // moving up right
								{

									for (int i = oldx + 1, j = oldy - 1; i < x && j > y; i++, j--)
									{
										if (board[y][x] >= 0 && board[j][i] == 0 || board[i][j] == -3)
										{
											checker++;

										}


									}

									if (board[y][x] >= 0 && checker == (x - 1) - oldx && checker == (oldy - 1) - y)


									{

										valid = 1;

										blackqueensprite.setPosition(x * size, y * size);

										board[y][x] = -5;
										board[oldy][oldx] = 0;
										moving = 0;

										std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;
										std::cout << "chcker: " << checker << std::endl;
										std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
										std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;
										checker = 0;

									}

								}





								if (valid == 0)
								{
									std::cout << "chcker: " << checker << std::endl;
									std::cout << "illegal Move" << std::endl;
								}





							}
						}


					}

				}
				if (moving == blackpawn1.pieceID && event.type == sf::Event::MouseButtonPressed)
				{
					if (event.key.code == sf::Mouse::Right)
					{

						sf::Vector2i mpos = sf::Mouse::getPosition(window);
						int x = mpos.x / size;
						int y = mpos.y / size;
						int dx = x - oldx;
						int dy = y - oldy;
						int checker = 0;


						if (blackpawn1.moved == 0)
						{


							if (turn == 1 && ((board[y][x] == 0 && y <= oldy + 2 && oldx == x && board[y - 1][x] == 0 || board[y - 1][x] == blackpawn1.pieceID) || (board[oldy + 1][oldx + 1] > 0 && x == oldx + 1 && y == oldy + 1) || (board[oldy + 1][oldx - 1] > 0 && x == oldx - 1 && y == oldy + 1)))

							{
								valid = 1;

								if (board[y][x] == whiteknight1.pieceID)
								{
									whiteknight1.draw = 0;
									std::cout << "   White Kngiht Was Taken" << std::endl;

								}
								if (board[y][x] == whiteknight2.pieceID)
								{
									whiteknight2.draw = 0;
									std::cout << "   White Kngiht Was Taken" << std::endl;

								}
								if (board[y][x] == whiterook1.pieceID)
								{
									whiterook1.draw = 0;
									std::cout << "   White Rook Was Taken" << std::endl;

								}

								if (board[y][x] == whiterook2.pieceID)
								{
									whiterook2.draw = 0;
									std::cout << "   White Rook Was Taken" << std::endl;

								}
								if (board[y][x] == whitebishop1.pieceID)
								{
									whitebishop1.draw = 0;
									std::cout << "   White Bishop Was Taken" << std::endl;

								}
								if (board[y][x] == whitebishop2.pieceID)
								{
									whitebishop2.draw = 0;
									std::cout << "   White Bishop Was Taken" << std::endl;

								}

								if (board[y][x] == whiteking.pieceID)
								{
									whiteking.draw = 0;
									std::cout << "   White King Was Taken" << std::endl;

								}
								if (board[y][x] == whitequeen.pieceID)
								{
									whitequeen.draw = 0;
									std::cout << "   White Queen was Taken" << std::endl;

								}
								if (board[y][x] == whitepawn1.pieceID)
								{
									whitepawn1.draw = 0;
									std::cout << "   White Pawn was Taken" << std::endl;

								}
								if (board[y][x] == whitepawn2.pieceID)
								{
									whitepawn2.draw = 0;
									std::cout << "   White Pawn was Taken" << std::endl;

								}
								if (board[y][x] == whitepawn3.pieceID)
								{
									whitepawn3.draw = 0;
									std::cout << "   White Pawn was Taken" << std::endl;

								}

								if (board[y][x] == whitepawn4.pieceID)
								{
									whitepawn4.draw = 0;
									std::cout << "   White Pawn was Taken" << std::endl;

								}

								if (board[y][x] == whitepawn5.pieceID)
								{
									whitepawn5.draw = 0;
									std::cout << "   White Pawn was Taken" << std::endl;

								}
								if (board[y][x] == whitepawn6.pieceID)
								{
									whitepawn6.draw = 0;
									std::cout << "   White Pawn was Taken" << std::endl;

								}
	
								if (board[y][x] == whitepawn7.pieceID)
								{
									whitepawn6.draw = 0;
									std::cout << "   White Pawn was Taken" << std::endl;

								}
	
								if (board[y][x] == whitepawn8.pieceID)
								{
									whitepawn8.draw = 0;
									std::cout << "   White Pawn was Taken" << std::endl;

								}

								blackpawnsprite1.setPosition(x * size, y * size);

								board[y][x] = -1;
								board[oldy][oldx] = 0;
								moving = 0;
								blackpawn1.moved++;
								std::cout << blackpawn1.moved << std::endl;
								std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;
								std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
								std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;

								turn--;
							}
						}

						if (blackpawn1.moved > 0)
						{


							if (turn == 1 && ((board[y][x] == 0 && y == oldy + 1 && oldx == x) || (board[oldy + 1][oldx + 1] > 0 && x == oldx + 1 && y == oldy + 1) || (board[oldy + 1][oldx - 1] > 0 && x == oldx - 1 && y == oldy + 1)))

							{
								valid = 1;

								if (board[y][x] == whiteknight1.pieceID)
								{
									whiteknight1.draw = 0;
									std::cout << "   White Kngiht Was Taken" << std::endl;

								}
								if (board[y][x] == whiteknight2.pieceID)
								{
									whiteknight2.draw = 0;
									std::cout << "   White Kngiht Was Taken" << std::endl;

								}
								if (board[y][x] == whiterook1.pieceID)
								{
									whiterook1.draw = 0;
									std::cout << "   White Rook Was Taken" << std::endl;

								}

								if (board[y][x] == whiterook2.pieceID)
								{
									whiterook2.draw = 0;
									std::cout << "   White Rook Was Taken" << std::endl;

								}
								if (board[y][x] == whitebishop1.pieceID)
								{
									whitebishop1.draw = 0;
									std::cout << "   White Bishop Was Taken" << std::endl;

								}
								if (board[y][x] == whitebishop2.pieceID)
								{
									whitebishop2.draw = 0;
									std::cout << "   White Bishop Was Taken" << std::endl;

								}

								if (board[y][x] == whiteking.pieceID)
								{
									whiteking.draw = 0;
									std::cout << "   White King Was Taken" << std::endl;

								}
								if (board[y][x] == whitequeen.pieceID)
								{
									whitequeen.draw = 0;
									std::cout << "   White Queen was Taken" << std::endl;

								}
								if (board[y][x] == whitepawn1.pieceID)
								{
									whitepawn1.draw = 0;
									std::cout << "   White Pawn was Taken" << std::endl;

								}
								if (board[y][x] == whitepawn2.pieceID)
								{
									whitepawn2.draw = 0;
									std::cout << "   White Pawn was Taken" << std::endl;

								}
								if (board[y][x] == whitepawn3.pieceID)
								{
									whitepawn3.draw = 0;
									std::cout << "   White Pawn was Taken" << std::endl;

								}

								if (board[y][x] == whitepawn4.pieceID)
								{
									whitepawn4.draw = 0;
									std::cout << "   White Pawn was Taken" << std::endl;

								}

								if (board[y][x] == whitepawn5.pieceID)
								{
									whitepawn5.draw = 0;
									std::cout << "   White Pawn was Taken" << std::endl;

								}
								if (board[y][x] == whitepawn6.pieceID)
								{
									whitepawn6.draw = 0;
									std::cout << "   White Pawn was Taken" << std::endl;

								}

								if (board[y][x] == whitepawn7.pieceID)
								{
									whitepawn6.draw = 0;
									std::cout << "   White Pawn was Taken" << std::endl;

								}

								if (board[y][x] == whitepawn8.pieceID)
								{
									whitepawn8.draw = 0;
									std::cout << "   White Pawn was Taken" << std::endl;

								}

								blackpawnsprite1.setPosition(x * size, y * size);

								board[y][x] = -1;
								board[oldy][oldx] = 0;
								moving = 0;
								blackpawn1.moved++;
								std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;
								std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
								std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;

								turn--;
							}
						
							if (board[y - 1][x] < 1.8 && board[y - 1][x] >= 1)
							{

								if (board[y - 1][x] == whitepawn1.pieceID && whitepawn1.moved == 1 && oldy == y - 1)
								{

									valid = 1;
									blackpawnsprite1.setPosition(x * size, y * size);
									whitepawn1.draw = 0;
									board[y][x] = 1;
									board[oldy][oldx] = 0;
									moving = 0;
									blackpawn1.moved++;
									std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;
									std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
									std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;
									std::cout << "En Passant!!!" << std::endl;
									turn++;



								}
								if (board[y - 1][x] == whitepawn2.pieceID && whitepawn2.moved == 1 && oldy == y - 1)
								{

									valid = 1;
									blackpawnsprite1.setPosition(x * size, y * size);
									whitepawn2.draw = 0;
									board[y][x] = 1;
									board[oldy][oldx] = 0;
									moving = 0;
									blackpawn1.moved++;
									std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;
									std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
									std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;
									std::cout << "En Passant!!!" << std::endl;
									turn++;



								}
								if (board[y - 1][x] == whitepawn3.pieceID && whitepawn3.moved == 1 && oldy == y - 1)
								{

									valid = 1;
									blackpawnsprite1.setPosition(x * size, y * size);
									whitepawn3.draw = 0;
									board[y][x] = 1;
									board[oldy][oldx] = 0;
									moving = 0;
									blackpawn1.moved++;
									std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;
									std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
									std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;
									std::cout << "En Passant!!!" << std::endl;
									turn++;



								}

								if (board[y - 1][x] == blackpawn4.pieceID && blackpawn4.moved == 1 && oldy == y - 1)
								{

									valid = 1;
									blackpawnsprite1.setPosition(x * size, y * size);
									blackpawn4.draw = 0;
									board[y][x] = 1;
									board[oldy][oldx] = 0;
									moving = 0;
									blackpawn1.moved++;
									std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;
									std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
									std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;
									std::cout << "En Passant!!!" << std::endl;
									turn++;



								}

								if (board[y - 1][x] == blackpawn5.pieceID && blackpawn5.moved == 1 && oldy == y - 1)
								{

									valid = 1;
									blackpawnsprite1.setPosition(x * size, y * size);
									blackpawn5.draw = 0;
									board[y][x] = 1;
									board[oldy][oldx] = 0;
									moving = 0;
									blackpawn1.moved++;
									std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;
									std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
									std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;
									std::cout << "En Passant!!!" << std::endl;
									turn++;



								}
								if (board[y - 1][x] == blackpawn6.pieceID && blackpawn6.moved == 1 && oldy == y - 1)
								{

									valid = 1;
									blackpawnsprite1.setPosition(x * size, y * size);
									blackpawn6.draw = 0;
									board[y][x] = 1;
									board[oldy][oldx] = 0;
									moving = 0;
									blackpawn1.moved++;
									std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;
									std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
									std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;
									std::cout << "En Passant!!!" << std::endl;
									turn++;



								}
								if (board[y - 1][x] == blackpawn7.pieceID && blackpawn7.moved == 1 && oldy == y - 1)
								{

									valid = 1;
									blackpawnsprite1.setPosition(x * size, y * size);
									blackpawn7.draw = 0;
									board[y][x] = 1;
									board[oldy][oldx] = 0;
									moving = 0;
									blackpawn1.moved++;
									std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;
									std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
									std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;
									std::cout << "En Passant!!!" << std::endl;
									turn++;



								}
								if (board[y - 1][x] == blackpawn8.pieceID && blackpawn8.moved == 1 && oldy == y - 1)
								{

									valid = 1;
									blackpawnsprite1.setPosition(x * size, y * size);
									blackpawn8.draw = 0;
									board[y][x] = 1;
									board[oldy][oldx] = 0;
									moving = 0;
									blackpawn1.moved++;
									std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;
									std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
									std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;
									std::cout << "En Passant!!!" << std::endl;
									turn++;



								}


							}



						
						}



						if (valid == 0)
						{

							std::cout << "illegal Move" << std::endl;
						}


						




					}



				}
				if (moving == blackpawn2.pieceID && event.type == sf::Event::MouseButtonPressed)
				{
					if (event.key.code == sf::Mouse::Right)
					{

						sf::Vector2i mpos = sf::Mouse::getPosition(window);
						int x = mpos.x / size;
						int y = mpos.y / size;
						int dx = x - oldx;
						int dy = y - oldy;
						int checker = 0;


						if (blackpawn2.moved == 0)
						{


							if (turn == 1 && (board[y][x] == 0 && y <= oldy + 2 && oldx == x && board[y - 1][x] == 0 || board[y - 1][x] == blackpawn2.pieceID) || (board[oldy + 1][oldx + 1] > 0 && x == oldx + 1 && y == oldy + 1) || (board[oldy + 1][oldx - 1] > 0 && x == oldx - 1 && y == oldy + 1))

							{
								valid = 1;


								blackpawnsprite2.setPosition(x * size, y * size);

								board[y][x] = -1.1;
								board[oldy][oldx] = 0;
								moving = 0;
								blackpawn2.moved++;
								std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;
								std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
								std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;

						
								turn--;
								

							}


						}

						if (blackpawn2.moved > 0)
						{


							if (turn == 1 && (board[y][x] == 0 && y == oldy + 1 && oldx == x) || (board[oldy + 1][oldx + 1] > 0 && x == oldx + 1 && y == oldy + 1) || (board[oldy + 1][oldx - 1] > 0 && x == oldx - 1 && y == oldy + 1))

							{
								valid = 1;


								blackpawnsprite2.setPosition(x * size, y * size);

								board[y][x] = -1.1;
								board[oldy][oldx] = 0;
								moving = 0;

								std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;
								std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
								std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;
								std::cout << "turn"<< turn << std::endl;
								turn--;
								std::cout << turn << std::endl;

							}



						}



						if (valid == 0)
						{

							std::cout << "illegal Move" << std::endl;
						}





					}



				}
				if (moving == blackpawn3.pieceID && event.type == sf::Event::MouseButtonPressed)
				{
					if (event.key.code == sf::Mouse::Right)
					{

						sf::Vector2i mpos = sf::Mouse::getPosition(window);
						int x = mpos.x / size;
						int y = mpos.y / size;
						int dx = x - oldx;
						int dy = y - oldy;
						int checker = 0;


						if (blackpawn3.moved == 0)
						{


							if (turn == 1 && (board[y][x] == 0 && y <= oldy + 2 && oldx == x && board[y - 1][x] == 0 || board[y - 1][x] == blackpawn2.pieceID) || (board[oldy + 1][oldx + 1] > 0 && x == oldx + 1 && y == oldy + 1) || (board[oldy + 1][oldx - 1] > 0 && x == oldx - 1 && y == oldy + 1))

							{
								valid = 1;


								blackpawnsprite3.setPosition(x * size, y * size);

								board[y][x] = -1.2;
								board[oldy][oldx] = 0;
								moving = 0;
								blackpawn3.moved++;
								std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;
								std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
								std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;


								turn--;


							}


						}

						if (blackpawn3.moved > 0)
						{


							if (turn == 1 && (board[y][x] == 0 && y == oldy + 1 && oldx == x) || (board[oldy + 1][oldx + 1] > 0 && x == oldx + 1 && y == oldy + 1) || (board[oldy + 1][oldx - 1] > 0 && x == oldx - 1 && y == oldy + 1))

							{
								valid = 1;


								blackpawnsprite3.setPosition(x * size, y * size);

								board[y][x] = -1.2;
								board[oldy][oldx] = 0;
								moving = 0;

								std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;
								std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
								std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;
								std::cout << "turn" << turn << std::endl;
								turn--;
								std::cout << turn << std::endl;

							}



						}



						if (valid == 0)
						{

							std::cout << "illegal Move" << std::endl;
						}





					}



				}
				if (moving == blackpawn3.pieceID && event.type == sf::Event::MouseButtonPressed)
				{
					if (event.key.code == sf::Mouse::Right)
					{

						sf::Vector2i mpos = sf::Mouse::getPosition(window);
						int x = mpos.x / size;
						int y = mpos.y / size;
						int dx = x - oldx;
						int dy = y - oldy;
						int checker = 0;


						if (blackpawn3.moved == 0)
						{


							if (turn == 1 && (board[y][x] == 0 && y <= oldy + 2 && oldx == x && board[y - 1][x] == 0 || board[y - 1][x] == blackpawn3.pieceID) || (board[oldy + 1][oldx + 1] > 0 && x == oldx + 1 && y == oldy + 1) || (board[oldy + 1][oldx - 1] > 0 && x == oldx - 1 && y == oldy + 1))

							{
								valid = 1;


								blackpawnsprite3.setPosition(x * size, y * size);

								board[y][x] = -1.2;
								board[oldy][oldx] = 0;
								moving = 0;
								blackpawn3.moved++;
								std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;
								std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
								std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;


								turn--;


							}


						}

						if (blackpawn3.moved > 0)
						{


							if (turn == 1 && (board[y][x] == 0 && y == oldy + 1 && oldx == x) || (board[oldy + 1][oldx + 1] > 0 && x == oldx + 1 && y == oldy + 1) || (board[oldy + 1][oldx - 1] > 0 && x == oldx - 1 && y == oldy + 1))

							{
								valid = 1;


								blackpawnsprite3.setPosition(x * size, y * size);

								board[y][x] = -1.2;
								board[oldy][oldx] = 0;
								moving = 0;

								std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;
								std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
								std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;
								std::cout << "turn" << turn << std::endl;
								turn--;
								std::cout << turn << std::endl;

							}



						}



						if (valid == 0)
						{

							std::cout << "illegal Move" << std::endl;
						}





					}



				}
				if (moving == blackpawn4.pieceID && event.type == sf::Event::MouseButtonPressed)
				{
					if (event.key.code == sf::Mouse::Right)
					{

						sf::Vector2i mpos = sf::Mouse::getPosition(window);
						int x = mpos.x / size;
						int y = mpos.y / size;
						int dx = x - oldx;
						int dy = y - oldy;
						int checker = 0;


						if (blackpawn4.moved == 0)
						{


							if (turn == 1 && (board[y][x] == 0 && y <= oldy + 2 && oldx == x && board[y - 1][x] == 0 || board[y - 1][x] == blackpawn4.pieceID) || (board[oldy + 1][oldx + 1] > 0 && x == oldx + 1 && y == oldy + 1) || (board[oldy + 1][oldx - 1] > 0 && x == oldx - 1 && y == oldy + 1))

							{
								valid = 1;


								blackpawnsprite4.setPosition(x * size, y * size);

								board[y][x] = -1.3;
								board[oldy][oldx] = 0;
								moving = 0;
								blackpawn4.moved++;
								std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;
								std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
								std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;


								turn--;


							}


						}

						if (blackpawn4.moved > 0)
						{


							if (turn == 1 && (board[y][x] == 0 && y == oldy + 1 && oldx == x) || (board[oldy + 1][oldx + 1] > 0 && x == oldx + 1 && y == oldy + 1) || (board[oldy + 1][oldx - 1] > 0 && x == oldx - 1 && y == oldy + 1))

							{
								valid = 1;


								blackpawnsprite4.setPosition(x * size, y * size);

								board[y][x] = -1.3;
								board[oldy][oldx] = 0;
								moving = 0;

								std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;
								std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
								std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;
								std::cout << "turn" << turn << std::endl;
								turn--;
								std::cout << turn << std::endl;

							}



						}



						if (valid == 0)
						{

							std::cout << "illegal Move" << std::endl;
						}





					}



				}
				if (moving == blackpawn5.pieceID && event.type == sf::Event::MouseButtonPressed)
				{
					if (event.key.code == sf::Mouse::Right)
					{

						sf::Vector2i mpos = sf::Mouse::getPosition(window);
						int x = mpos.x / size;
						int y = mpos.y / size;
						int dx = x - oldx;
						int dy = y - oldy;
						int checker = 0;


						if (blackpawn5.moved == 0)
						{


							if (turn == 1 && (board[y][x] == 0 && y <= oldy + 2 && oldx == x && board[y - 1][x] == 0 || board[y - 1][x] == blackpawn5.pieceID) || (board[oldy + 1][oldx + 1] > 0 && x == oldx + 1 && y == oldy + 1) || (board[oldy + 1][oldx - 1] > 0 && x == oldx - 1 && y == oldy + 1))

							{
								valid = 1;


								blackpawnsprite5.setPosition(x * size, y * size);

								board[y][x] = -1.4;
								board[oldy][oldx] = 0;
								moving = 0;
								blackpawn5.moved++;
								std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;
								std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
								std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;


								turn--;


							}


						}

						if (blackpawn5.moved > 0)
						{


							if (turn == 1 && (board[y][x] == 0 && y == oldy + 1 && oldx == x) || (board[oldy + 1][oldx + 1] > 0 && x == oldx + 1 && y == oldy + 1) || (board[oldy + 1][oldx - 1] > 0 && x == oldx - 1 && y == oldy + 1))

							{
								valid = 1;


								blackpawnsprite5.setPosition(x * size, y * size);

								board[y][x] = -1.4;
								board[oldy][oldx] = 0;
								moving = 0;

								std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;
								std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
								std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;
								std::cout << "turn" << turn << std::endl;
								turn--;
								std::cout << turn << std::endl;

							}



						}



						if (valid == 0)
						{

							std::cout << "illegal Move" << std::endl;
						}





					}



				}
				if (moving == blackpawn6.pieceID && event.type == sf::Event::MouseButtonPressed)
				{
					if (event.key.code == sf::Mouse::Right)
					{

						sf::Vector2i mpos = sf::Mouse::getPosition(window);
						int x = mpos.x / size;
						int y = mpos.y / size;
						int dx = x - oldx;
						int dy = y - oldy;
						int checker = 0;


						if (blackpawn6.moved == 0)
						{


							if (turn == 1 && (board[y][x] == 0 && y <= oldy + 2 && oldx == x && board[y - 1][x] == 0 || board[y - 1][x] == blackpawn6.pieceID) || (board[oldy + 1][oldx + 1] > 0 && x == oldx + 1 && y == oldy + 1) || (board[oldy + 1][oldx - 1] > 0 && x == oldx - 1 && y == oldy + 1))

							{
								valid = 1;


								blackpawnsprite6.setPosition(x * size, y * size);

								board[y][x] = -1.5;
								board[oldy][oldx] = 0;
								moving = 0;
								blackpawn6.moved++;
								std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;
								std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
								std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;


								turn--;


							}


						}

						if (blackpawn6.moved > 0)
						{


							if (turn == 1 && (board[y][x] == 0 && y == oldy + 1 && oldx == x) || (board[oldy + 1][oldx + 1] > 0 && x == oldx + 1 && y == oldy + 1) || (board[oldy + 1][oldx - 1] > 0 && x == oldx - 1 && y == oldy + 1))

							{
								valid = 1;


								blackpawnsprite6.setPosition(x * size, y * size);

								board[y][x] = -1.5;
								board[oldy][oldx] = 0;
								moving = 0;

								std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;
								std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
								std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;
								std::cout << "turn" << turn << std::endl;
								turn--;
								std::cout << turn << std::endl;

							}



						}



						if (valid == 0)
						{

							std::cout << "illegal Move" << std::endl;
						}





					}



				}
				if (moving == blackpawn7.pieceID && event.type == sf::Event::MouseButtonPressed)
				{
					if (event.key.code == sf::Mouse::Right)
					{

						sf::Vector2i mpos = sf::Mouse::getPosition(window);
						int x = mpos.x / size;
						int y = mpos.y / size;
						int dx = x - oldx;
						int dy = y - oldy;
						int checker = 0;


						if (blackpawn7.moved == 0)
						{


							if (turn == 1 && (board[y][x] == 0 && y <= oldy + 2 && oldx == x && board[y - 1][x] == 0 || board[y - 1][x] == blackpawn7.pieceID) || (board[oldy + 1][oldx + 1] > 0 && x == oldx + 1 && y == oldy + 1) || (board[oldy + 1][oldx - 1] > 0 && x == oldx - 1 && y == oldy + 1))

							{
								valid = 1;


								blackpawnsprite7.setPosition(x * size, y * size);

								board[y][x] = -1.6;
								board[oldy][oldx] = 0;
								moving = 0;
								blackpawn7.moved++;
								std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;
								std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
								std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;


								turn--;


							}


						}

						if (blackpawn7.moved > 0)
						{


							if (turn == 1 && (board[y][x] == 0 && y == oldy + 1 && oldx == x) || (board[oldy + 1][oldx + 1] > 0 && x == oldx + 1 && y == oldy + 1) || (board[oldy + 1][oldx - 1] > 0 && x == oldx - 1 && y == oldy + 1))

							{
								valid = 1;


								blackpawnsprite7.setPosition(x * size, y * size);

								board[y][x] = -1.6;
								board[oldy][oldx] = 0;
								moving = 0;

								std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;
								std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
								std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;
								std::cout << "turn" << turn << std::endl;
								turn--;
								std::cout << turn << std::endl;

							}



						}



						if (valid == 0)
						{

							std::cout << "illegal Move" << std::endl;
						}





					}



				}
				if (moving == blackpawn8.pieceID && event.type == sf::Event::MouseButtonPressed)
				{
					if (event.key.code == sf::Mouse::Right)
					{

						sf::Vector2i mpos = sf::Mouse::getPosition(window);
						int x = mpos.x / size;
						int y = mpos.y / size;
						int dx = x - oldx;
						int dy = y - oldy;
						int checker = 0;


						if (blackpawn8.moved == 0)
						{


							if (turn == 1 && (board[y][x] == 0 && y <= oldy + 2 && oldx == x && board[y - 1][x] == 0 || board[y - 1][x] == blackpawn8.pieceID) || (board[oldy + 1][oldx + 1] > 0 && x == oldx + 1 && y == oldy + 1) || (board[oldy + 1][oldx - 1] > 0 && x == oldx - 1 && y == oldy + 1))

							{
								valid = 1;


								blackpawnsprite8.setPosition(x * size, y * size);

								board[y][x] = -1.7;
								board[oldy][oldx] = 0;
								moving = 0;
								blackpawn8.moved++;
								std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;
								std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
								std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;


								turn--;


							}


						}

						if (blackpawn8.moved > 0)
						{


							if (turn == 1 && (board[y][x] == 0 && y == oldy + 1 && oldx == x) || (board[oldy + 1][oldx + 1] > 0 && x == oldx + 1 && y == oldy + 1) || (board[oldy + 1][oldx - 1] > 0 && x == oldx - 1 && y == oldy + 1))

							{
								valid = 1;


								blackpawnsprite8.setPosition(x * size, y * size);

								board[y][x] = -1.7;
								board[oldy][oldx] = 0;
								moving = 0;

								std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;
								std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
								std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;
								std::cout << "turn" << turn << std::endl;
								turn--;
								std::cout << turn << std::endl;

							}



						}



						if (valid == 0)
						{

							std::cout << "illegal Move" << std::endl;
						}





					}



				}


				// white pieces
				if (moving == whiteking.pieceID && event.type == sf::Event::MouseButtonPressed)
				{
					if (event.key.code == sf::Mouse::Right)
					{

						sf::Vector2i mpos = sf::Mouse::getPosition(window);
						int x = mpos.x / size;
						int y = mpos.y / size;
						int dx = x - oldx;
						int dy = y - oldy;
						int checker = 0;


						if ( oldx <= x + 1 && oldy <= y + 1 || oldx <= x - 1 && oldy <= y - 1 || oldx <= x + 1 && oldy <= y - 1 || oldx <= x - 1 && oldy <= y + 1)
						{


							if (turn == 0 && (board[y][x] <= 10 && (x == oldx + 1 && y == oldy || x == oldx - 1 && y == oldy || y == oldy + 1 && x == oldx || y == oldy - 1 && x == oldx || x == oldx + 1 && y == oldy + 1 || x == oldx - 1 && y == oldy + 1 || x == oldx - 1 && y == oldy - 1 || x == oldx + 1 && y == oldy - 1)))

							{
								valid = 1;

								if (board[y][x] == blackknight1.pieceID)
								{
									blackknight1.draw = 0;
									std::cout << "   Black Kngiht Was Taken" << std::endl;

								}
								if (board[y][x] == blackknight2.pieceID)
								{
									blackknight2.draw = 0;
									std::cout << "   Black Kngiht Was Taken" << std::endl;

								}
								if (board[y][x] == blackrook1.pieceID)
								{
									blackrook1.draw = 0;
									std::cout << "   Black Rook Was Taken" << std::endl;

								}

								if (board[y][x] == blackrook2.pieceID)
								{
									blackrook2.draw = 0;
									std::cout << "   Black Rook Was Taken" << std::endl;

								}
								if (board[y][x] == blackbishop1.pieceID)
								{
									blackbishop1.draw = 0;
									std::cout << "   Black Rook Was Taken" << std::endl;

								}
								if (board[y][x] == blackbishop2.pieceID)
								{
									blackbishop2.draw = 0;
									std::cout << "   Black Rook Was Taken" << std::endl;

								}
								if (board[y][x] == blackqueen.pieceID)
								{
									blackqueen.draw = 0;
									std::cout << "   Black Rook Was Taken" << std::endl;

								}
								if (board[y][x] == blackpawn1.pieceID)
								{
									blackpawn1.draw = 0;
									std::cout << "   Black Rook Was Taken" << std::endl;

								}
								if (board[y][x] == blackpawn2.pieceID)
								{
									blackpawn2.draw = 0;
									std::cout << "   Black Rook Was Taken" << std::endl;

								}
								if (board[y][x] == blackpawn3.pieceID)
								{
									blackpawn3.draw = 0;
									std::cout << "   Black Rook Was Taken" << std::endl;

								}

								if (board[y][x] == blackpawn3.pieceID)
								{
									blackpawn3.draw = 0;
									std::cout << "   Black Rook Was Taken" << std::endl;

								}
								if (board[y][x] == blackpawn4.pieceID)
								{
									blackpawn4.draw = 0;
									std::cout << "   Black Rook Was Taken" << std::endl;

								}
								if (board[y][x] == blackpawn5.pieceID)
								{
									blackpawn5.draw = 0;
									std::cout << "   Black Rook Was Taken" << std::endl;

								}
								if (board[y][x] == blackpawn6.pieceID)
								{
									blackpawn6.draw = 0;
									std::cout << "   Black Rook Was Taken" << std::endl;

								}
								if (board[y][x] == blackpawn7.pieceID)
								{
									blackpawn7.draw = 0;
									std::cout << "   Black Rook Was Taken" << std::endl;

								}
								if (board[y][x] == blackpawn8.pieceID)
								{
									blackpawn8.draw = 0;
									std::cout << "   Black Rook Was Taken" << std::endl;

								}
								whitekingsprite.setPosition(x * size, y * size);

								board[y][x] = 6;
								board[oldy][oldx] = 0;
								moving = 0;

								std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;
								std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
								std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;

								turn++;

							}

							else 
							{

								std::cout << "illegal Move" << std::endl;
							}



						}

						else
						{
							std::cout << "illegal Move" << std::endl;
						}


					}



				}
				if (moving == whiterook1.pieceID && event.type == sf::Event::MouseButtonPressed)
				{
					if (event.key.code == sf::Mouse::Right)
					{



						sf::Vector2i mpos = sf::Mouse::getPosition(window);
						int x = mpos.x / size;
						int y = mpos.y / size;
						int dx = x - oldx;
						int dy = y - oldy;
						int checker = 0;

						for (int i = 0; i < 8; i++)
						{




							if ((x == oldx + i && y == oldy || x == oldx - i && y == oldy) || (y == oldy + i && x == oldx || y == oldy - i && x == oldx))
							{

								if (turn == 0 && ( oldy < y && x == oldx)) // Rook moving up
								{

									for (int i = oldy + 1; i < y; i++)
									{

										if (board[y][x] <= 0 && board[i][x] == 0 || board[i][x] == 4)
										{
											checker++;


										}


									}

									if (board[y][x] <= 0 && checker == (y - 1) - oldy)


									{
										if (board[y][x] == blackknight1.pieceID)
										{
											blackknight1.draw = 0;
											std::cout << "   Black Kngiht Was Taken" << std::endl;

										}
										if (board[y][x] == blackknight2.pieceID)
										{
											blackknight2.draw = 0;
											std::cout << "   Black Kngiht Was Taken" << std::endl;

										}
										if (board[y][x] == blackrook1.pieceID)
										{
											blackrook1.draw = 0;
											std::cout << "   Black Rook Was Taken" << std::endl;

										}

										if (board[y][x] == blackrook2.pieceID)
										{
											blackrook2.draw = 0;
											std::cout << "   Black Rook Was Taken" << std::endl;

										}
										if (board[y][x] == blackbishop1.pieceID)
										{
											blackbishop1.draw = 0;
											std::cout << "   Black Bishop Was Taken" << std::endl;

										}
										if (board[y][x] == blackbishop2.pieceID)
										{
											blackbishop2.draw = 0;
											std::cout << "   Black Bishop Was Taken" << std::endl;

										}

										if (board[y][x] == blackking.pieceID)
										{
											blackking.draw = 0;
											std::cout << "   Black King Was Taken" << std::endl;

										}
										if (board[y][x] == blackqueen.pieceID)
										{
											blackqueen.draw = 0;
											std::cout << "   Black Queen Was Taken" << std::endl;

										}
										if (board[y][x] == blackpawn1.pieceID)
										{
											blackpawn1.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}
										if (board[y][x] == blackpawn2.pieceID)
										{
											blackpawn2.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}
										if (board[y][x] == blackpawn3.pieceID)
										{
											blackpawn3.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}

										if (board[y][x] == blackpawn3.pieceID)
										{
											blackpawn3.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}
										if (board[y][x] == blackpawn4.pieceID)
										{
											blackpawn4.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}
										if (board[y][x] == blackpawn5.pieceID)
										{
											blackpawn5.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}
										if (board[y][x] == blackpawn6.pieceID)
										{
											blackpawn6.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}
										if (board[y][x] == blackpawn7.pieceID)
										{
											blackpawn7.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}
										if (board[y][x] == blackpawn8.pieceID)
										{
											blackpawn8.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}
										valid = 1;

										whiterooksprite1.setPosition(x * size, y * size);

										board[y][x] = 4;
										board[oldy][oldx] = 0;
										moving = 0;

										std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;
										std::cout << "chcker: " << checker << std::endl;
										std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
										std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;
										checker = 0;
										turn++;

									}








								}

								if (turn == 0 && (oldy > y && x == oldx)) // Rook Moving Down
								{
									for (int i = oldy - 1; i > y; i--)
									{
										if (board[y][x] <= 0 && board[i][x] == 0 || board[i][x] == 4)
										{
											checker++;

										}


									}


									if (board[y][x] <= 0 && checker == (oldy - 1) - y)
									{
										if (board[y][x] == blackknight1.pieceID)
										{
											blackknight1.draw = 0;
											std::cout << "   Black Kngiht Was Taken" << std::endl;

										}
										if (board[y][x] == blackknight2.pieceID)
										{
											blackknight2.draw = 0;
											std::cout << "   Black Kngiht Was Taken" << std::endl;

										}
										if (board[y][x] == blackrook1.pieceID)
										{
											blackrook1.draw = 0;
											std::cout << "   Black Rook Was Taken" << std::endl;

										}

										if (board[y][x] == blackrook2.pieceID)
										{
											blackrook2.draw = 0;
											std::cout << "   Black Rook Was Taken" << std::endl;

										}
										if (board[y][x] == blackbishop1.pieceID)
										{
											blackbishop1.draw = 0;
											std::cout << "   Black Bishop Was Taken" << std::endl;

										}
										if (board[y][x] == blackbishop2.pieceID)
										{
											blackbishop2.draw = 0;
											std::cout << "   Black Bishop Was Taken" << std::endl;

										}

										if (board[y][x] == blackking.pieceID)
										{
											blackking.draw = 0;
											std::cout << "   Black King Was Taken" << std::endl;

										}
										if (board[y][x] == blackqueen.pieceID)
										{
											blackqueen.draw = 0;
											std::cout << "   Black Queen Was Taken" << std::endl;

										}
										if (board[y][x] == blackpawn1.pieceID)
										{
											blackpawn1.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}
										if (board[y][x] == blackpawn2.pieceID)
										{
											blackpawn2.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}
										if (board[y][x] == blackpawn3.pieceID)
										{
											blackpawn3.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}

										if (board[y][x] == blackpawn3.pieceID)
										{
											blackpawn3.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}
										if (board[y][x] == blackpawn4.pieceID)
										{
											blackpawn4.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}
										if (board[y][x] == blackpawn5.pieceID)
										{
											blackpawn5.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}
										if (board[y][x] == blackpawn6.pieceID)
										{
											blackpawn6.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}
										if (board[y][x] == blackpawn7.pieceID)
										{
											blackpawn7.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}
										if (board[y][x] == blackpawn8.pieceID)
										{
											blackpawn8.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}
										valid = 1;


										whiterooksprite1.setPosition(x * size, y * size);

										board[y][x] = 4;
										board[oldy][oldx] = 0;
										moving = 0;

										std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;

										std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
										std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;
										checker = 0;
										turn++;

									}


								}



								if (turn == 0 && (oldx < x && y == oldy)) // Rook Moving Right
								{

									for (int i = oldx + 1; i < x; i++)
									{
										if (board[y][x] <= 0 && board[y][i] == 0 || board[y][i] == 4)
										{
											checker++;

										}
									}

									if (board[y][x] <= 0 && checker == (x - 1) - oldx)
									{
										if (board[y][x] == blackknight1.pieceID)
										{
											blackknight1.draw = 0;
											std::cout << "   Black Kngiht Was Taken" << std::endl;

										}
										if (board[y][x] == blackknight2.pieceID)
										{
											blackknight2.draw = 0;
											std::cout << "   Black Kngiht Was Taken" << std::endl;

										}
										if (board[y][x] == blackrook1.pieceID)
										{
											blackrook1.draw = 0;
											std::cout << "   Black Rook Was Taken" << std::endl;

										}

										if (board[y][x] == blackrook2.pieceID)
										{
											blackrook2.draw = 0;
											std::cout << "   Black Rook Was Taken" << std::endl;

										}
										if (board[y][x] == blackbishop1.pieceID)
										{
											blackbishop1.draw = 0;
											std::cout << "   Black Bishop Was Taken" << std::endl;

										}
										if (board[y][x] == blackbishop2.pieceID)
										{
											blackbishop2.draw = 0;
											std::cout << "   Black Bishop Was Taken" << std::endl;

										}

										if (board[y][x] == blackking.pieceID)
										{
											blackking.draw = 0;
											std::cout << "   Black King Was Taken" << std::endl;

										}
										if (board[y][x] == blackqueen.pieceID)
										{
											blackqueen.draw = 0;
											std::cout << "   Black Queen Was Taken" << std::endl;

										}
										if (board[y][x] == blackpawn1.pieceID)
										{
											blackpawn1.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}
										if (board[y][x] == blackpawn2.pieceID)
										{
											blackpawn2.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}
										if (board[y][x] == blackpawn3.pieceID)
										{
											blackpawn3.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}

										if (board[y][x] == blackpawn3.pieceID)
										{
											blackpawn3.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}
										if (board[y][x] == blackpawn4.pieceID)
										{
											blackpawn4.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}
										if (board[y][x] == blackpawn5.pieceID)
										{
											blackpawn5.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}
										if (board[y][x] == blackpawn6.pieceID)
										{
											blackpawn6.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}
										if (board[y][x] == blackpawn7.pieceID)
										{
											blackpawn7.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}
										if (board[y][x] == blackpawn8.pieceID)
										{
											blackpawn8.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}
										valid = 1;


										whiterooksprite1.setPosition(x * size, y * size);

										board[y][x] = 4;
										board[oldy][oldx] = 0;
										moving = 0;

										std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;

										std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
										std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;
										checker = 0;
										turn++;
									}



								}

								if (turn == 0 && (oldx > x && y == oldy)) // left
								{

									for (int i = oldx - 1; i > x; i--)
									{
										if (board[y][x] <= 0 && board[y][i] == 0 || board[y][i] == 4)
										{
											checker++;

										}


									}

									if (board[y][x] <= 0 && checker == (oldx - 1) - x)
									{
										if (board[y][x] == blackknight1.pieceID)
										{
											blackknight1.draw = 0;
											std::cout << "   Black Kngiht Was Taken" << std::endl;

										}
										if (board[y][x] == blackknight2.pieceID)
										{
											blackknight2.draw = 0;
											std::cout << "   Black Kngiht Was Taken" << std::endl;

										}
										if (board[y][x] == blackrook1.pieceID)
										{
											blackrook1.draw = 0;
											std::cout << "   Black Rook Was Taken" << std::endl;

										}

										if (board[y][x] == blackrook2.pieceID)
										{
											blackrook2.draw = 0;
											std::cout << "   Black Rook Was Taken" << std::endl;

										}
										if (board[y][x] == blackbishop1.pieceID)
										{
											blackbishop1.draw = 0;
											std::cout << "   Black Bishop Was Taken" << std::endl;

										}
										if (board[y][x] == blackbishop2.pieceID)
										{
											blackbishop2.draw = 0;
											std::cout << "   Black Bishop Was Taken" << std::endl;

										}

										if (board[y][x] == blackking.pieceID)
										{
											blackking.draw = 0;
											std::cout << "   Black King Was Taken" << std::endl;

										}
										if (board[y][x] == blackqueen.pieceID)
										{
											blackqueen.draw = 0;
											std::cout << "   Black Queen Was Taken" << std::endl;

										}
										if (board[y][x] == blackpawn1.pieceID)
										{
											blackpawn1.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}
										if (board[y][x] == blackpawn2.pieceID)
										{
											blackpawn2.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}
										if (board[y][x] == blackpawn3.pieceID)
										{
											blackpawn3.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}

										if (board[y][x] == blackpawn3.pieceID)
										{
											blackpawn3.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}
										if (board[y][x] == blackpawn4.pieceID)
										{
											blackpawn4.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}
										if (board[y][x] == blackpawn5.pieceID)
										{
											blackpawn5.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}
										if (board[y][x] == blackpawn6.pieceID)
										{
											blackpawn6.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}
										if (board[y][x] == blackpawn7.pieceID)
										{
											blackpawn7.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}
										if (board[y][x] == blackpawn8.pieceID)
										{
											blackpawn8.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}
										valid = 1;


										whiterooksprite1.setPosition(x * size, y * size);

										board[y][x] = 4;
										board[oldy][oldx] = 0;
										moving = 0;

										std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;

										std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
										std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;
										checker = 0;
										turn++;
									}

								}

								if (valid == 0)
								{
									std::cout << "chcker: " << checker << std::endl;
									std::cout << "illegal Move" << std::endl;
								}





							}
						}


					}


				}
				if (moving == whiterook2.pieceID && event.type == sf::Event::MouseButtonPressed)
				{
					if (event.key.code == sf::Mouse::Right)
					{



						sf::Vector2i mpos = sf::Mouse::getPosition(window);
						int x = mpos.x / size;
						int y = mpos.y / size;
						int dx = x - oldx;
						int dy = y - oldy;
						int checker = 0;

						for (int i = 0; i < 8; i++)
						{




							if ((x == oldx + i && y == oldy || x == oldx - i && y == oldy) || (y == oldy + i && x == oldx || y == oldy - i && x == oldx))
							{

								if (turn == 0 && (oldy < y && x == oldx)) // Rook moving up
								{

									for (int i = oldy + 1; i < y; i++)
									{

										if (board[y][x] <= 0 && board[i][x] == 0 || board[i][x] == 4)
										{
											checker++;


										}


									}

									if (board[y][x] <= 0 && checker == (y - 1) - oldy)


									{
										if (board[y][x] == blackknight1.pieceID)
										{
											blackknight1.draw = 0;
											std::cout << "   Black Kngiht Was Taken" << std::endl;

										}
										if (board[y][x] == blackknight2.pieceID)
										{
											blackknight2.draw = 0;
											std::cout << "   Black Kngiht Was Taken" << std::endl;

										}
										if (board[y][x] == blackrook1.pieceID)
										{
											blackrook1.draw = 0;
											std::cout << "   Black Rook Was Taken" << std::endl;

										}

										if (board[y][x] == blackrook2.pieceID)
										{
											blackrook2.draw = 0;
											std::cout << "   Black Rook Was Taken" << std::endl;

										}
										if (board[y][x] == blackbishop1.pieceID)
										{
											blackbishop1.draw = 0;
											std::cout << "   Black Bishop Was Taken" << std::endl;

										}
										if (board[y][x] == blackbishop2.pieceID)
										{
											blackbishop2.draw = 0;
											std::cout << "   Black Bishop Was Taken" << std::endl;

										}

										if (board[y][x] == blackking.pieceID)
										{
											blackking.draw = 0;
											std::cout << "   Black King Was Taken" << std::endl;

										}
										if (board[y][x] == blackqueen.pieceID)
										{
											blackqueen.draw = 0;
											std::cout << "   Black Queen Was Taken" << std::endl;

										}
										if (board[y][x] == blackpawn1.pieceID)
										{
											blackpawn1.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}
										if (board[y][x] == blackpawn2.pieceID)
										{
											blackpawn2.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}
										if (board[y][x] == blackpawn3.pieceID)
										{
											blackpawn3.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}

										if (board[y][x] == blackpawn3.pieceID)
										{
											blackpawn3.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}
										if (board[y][x] == blackpawn4.pieceID)
										{
											blackpawn4.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}
										if (board[y][x] == blackpawn5.pieceID)
										{
											blackpawn5.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}
										if (board[y][x] == blackpawn6.pieceID)
										{
											blackpawn6.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}
										if (board[y][x] == blackpawn7.pieceID)
										{
											blackpawn7.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}
										if (board[y][x] == blackpawn8.pieceID)
										{
											blackpawn8.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}
										valid = 1;

										whiterooksprite2.setPosition(x * size, y * size);

										board[y][x] = 4;
										board[oldy][oldx] = 0;
										moving = 0;

										std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;
										std::cout << "chcker: " << checker << std::endl;
										std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
										std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;
										checker = 0;
										turn++;

									}








								}

								if (turn == 0 && (oldy > y && x == oldx)) // Rook Moving Down
								{
									for (int i = oldy - 1; i > y; i--)
									{
										if (board[y][x] <= 0 && board[i][x] == 0 || board[i][x] == 4)
										{
											checker++;

										}


									}


									if (board[y][x] <= 0 && checker == (oldy - 1) - y)
									{
										if (board[y][x] == blackknight1.pieceID)
										{
											blackknight1.draw = 0;
											std::cout << "   Black Kngiht Was Taken" << std::endl;

										}
										if (board[y][x] == blackknight2.pieceID)
										{
											blackknight2.draw = 0;
											std::cout << "   Black Kngiht Was Taken" << std::endl;

										}
										if (board[y][x] == blackrook1.pieceID)
										{
											blackrook1.draw = 0;
											std::cout << "   Black Rook Was Taken" << std::endl;

										}

										if (board[y][x] == blackrook2.pieceID)
										{
											blackrook2.draw = 0;
											std::cout << "   Black Rook Was Taken" << std::endl;

										}
										if (board[y][x] == blackbishop1.pieceID)
										{
											blackbishop1.draw = 0;
											std::cout << "   Black Bishop Was Taken" << std::endl;

										}
										if (board[y][x] == blackbishop2.pieceID)
										{
											blackbishop2.draw = 0;
											std::cout << "   Black Bishop Was Taken" << std::endl;

										}

										if (board[y][x] == blackking.pieceID)
										{
											blackking.draw = 0;
											std::cout << "   Black King Was Taken" << std::endl;

										}
										if (board[y][x] == blackqueen.pieceID)
										{
											blackqueen.draw = 0;
											std::cout << "   Black Queen Was Taken" << std::endl;

										}
										if (board[y][x] == blackpawn1.pieceID)
										{
											blackpawn1.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}
										if (board[y][x] == blackpawn2.pieceID)
										{
											blackpawn2.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}
										if (board[y][x] == blackpawn3.pieceID)
										{
											blackpawn3.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}

										if (board[y][x] == blackpawn3.pieceID)
										{
											blackpawn3.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}
										if (board[y][x] == blackpawn4.pieceID)
										{
											blackpawn4.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}
										if (board[y][x] == blackpawn5.pieceID)
										{
											blackpawn5.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}
										if (board[y][x] == blackpawn6.pieceID)
										{
											blackpawn6.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}
										if (board[y][x] == blackpawn7.pieceID)
										{
											blackpawn7.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}
										if (board[y][x] == blackpawn8.pieceID)
										{
											blackpawn8.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}
										valid = 1;


										whiterooksprite2.setPosition(x * size, y * size);

										board[y][x] = 4;
										board[oldy][oldx] = 0;
										moving = 0;

										std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;

										std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
										std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;
										checker = 0;
										turn++;

									}


								}



								if (turn == 0 && (oldx < x && y == oldy)) // Rook Moving Right
								{

									for (int i = oldx + 1; i < x; i++)
									{
										if (board[y][x] <= 0 && board[y][i] == 0 || board[y][i] == 4)
										{
											checker++;

										}
									}

									if (board[y][x] <= 0 && checker == (x - 1) - oldx)
									{
										if (board[y][x] == blackknight1.pieceID)
										{
											blackknight1.draw = 0;
											std::cout << "   Black Kngiht Was Taken" << std::endl;

										}
										if (board[y][x] == blackknight2.pieceID)
										{
											blackknight2.draw = 0;
											std::cout << "   Black Kngiht Was Taken" << std::endl;

										}
										if (board[y][x] == blackrook1.pieceID)
										{
											blackrook1.draw = 0;
											std::cout << "   Black Rook Was Taken" << std::endl;

										}

										if (board[y][x] == blackrook2.pieceID)
										{
											blackrook2.draw = 0;
											std::cout << "   Black Rook Was Taken" << std::endl;

										}
										if (board[y][x] == blackbishop1.pieceID)
										{
											blackbishop1.draw = 0;
											std::cout << "   Black Bishop Was Taken" << std::endl;

										}
										if (board[y][x] == blackbishop2.pieceID)
										{
											blackbishop2.draw = 0;
											std::cout << "   Black Bishop Was Taken" << std::endl;

										}

										if (board[y][x] == blackking.pieceID)
										{
											blackking.draw = 0;
											std::cout << "   Black King Was Taken" << std::endl;

										}
										if (board[y][x] == blackqueen.pieceID)
										{
											blackqueen.draw = 0;
											std::cout << "   Black Queen Was Taken" << std::endl;

										}
										if (board[y][x] == blackpawn1.pieceID)
										{
											blackpawn1.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}
										if (board[y][x] == blackpawn2.pieceID)
										{
											blackpawn2.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}
										if (board[y][x] == blackpawn3.pieceID)
										{
											blackpawn3.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}

										if (board[y][x] == blackpawn3.pieceID)
										{
											blackpawn3.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}
										if (board[y][x] == blackpawn4.pieceID)
										{
											blackpawn4.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}
										if (board[y][x] == blackpawn5.pieceID)
										{
											blackpawn5.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}
										if (board[y][x] == blackpawn6.pieceID)
										{
											blackpawn6.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}
										if (board[y][x] == blackpawn7.pieceID)
										{
											blackpawn7.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}
										if (board[y][x] == blackpawn8.pieceID)
										{
											blackpawn8.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}
										valid = 1;


										whiterooksprite1.setPosition(x * size, y * size);

										board[y][x] = 4;
										board[oldy][oldx] = 0;
										moving = 0;

										std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;

										std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
										std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;
										checker = 0;
										turn++;
									}



								}

								if (turn == 0 && (oldx > x && y == oldy)) // left
								{

									for (int i = oldx - 1; i > x; i--)
									{
										if (board[y][x] <= 0 && board[y][i] == 0 || board[y][i] == 4)
										{
											checker++;

										}


									}

									if (board[y][x] <= 0 && checker == (oldx - 1) - x)
									{
										if (board[y][x] == blackknight1.pieceID)
										{
											blackknight1.draw = 0;
											std::cout << "   Black Kngiht Was Taken" << std::endl;

										}
										if (board[y][x] == blackknight2.pieceID)
										{
											blackknight2.draw = 0;
											std::cout << "   Black Kngiht Was Taken" << std::endl;

										}
										if (board[y][x] == blackrook1.pieceID)
										{
											blackrook1.draw = 0;
											std::cout << "   Black Rook Was Taken" << std::endl;

										}

										if (board[y][x] == blackrook2.pieceID)
										{
											blackrook2.draw = 0;
											std::cout << "   Black Rook Was Taken" << std::endl;

										}
										if (board[y][x] == blackbishop1.pieceID)
										{
											blackbishop1.draw = 0;
											std::cout << "   Black Bishop Was Taken" << std::endl;

										}
										if (board[y][x] == blackbishop2.pieceID)
										{
											blackbishop2.draw = 0;
											std::cout << "   Black Bishop Was Taken" << std::endl;

										}

										if (board[y][x] == blackking.pieceID)
										{
											blackking.draw = 0;
											std::cout << "   Black King Was Taken" << std::endl;

										}
										if (board[y][x] == blackqueen.pieceID)
										{
											blackqueen.draw = 0;
											std::cout << "   Black Queen Was Taken" << std::endl;

										}
										if (board[y][x] == blackpawn1.pieceID)
										{
											blackpawn1.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}
										if (board[y][x] == blackpawn2.pieceID)
										{
											blackpawn2.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}
										if (board[y][x] == blackpawn3.pieceID)
										{
											blackpawn3.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}

										if (board[y][x] == blackpawn3.pieceID)
										{
											blackpawn3.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}
										if (board[y][x] == blackpawn4.pieceID)
										{
											blackpawn4.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}
										if (board[y][x] == blackpawn5.pieceID)
										{
											blackpawn5.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}
										if (board[y][x] == blackpawn6.pieceID)
										{
											blackpawn6.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}
										if (board[y][x] == blackpawn7.pieceID)
										{
											blackpawn7.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}
										if (board[y][x] == blackpawn8.pieceID)
										{
											blackpawn8.draw = 0;
											std::cout << "   Black Pawn Was Taken" << std::endl;

										}
										valid = 1;


										whiterooksprite1.setPosition(x * size, y * size);

										board[y][x] = 4;
										board[oldy][oldx] = 0;
										moving = 0;

										std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;

										std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
										std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;
										checker = 0;
										turn++;
									}

								}

								if (valid == 0)
								{
									std::cout << "chcker: " << checker << std::endl;
									std::cout << "illegal Move" << std::endl;
								}





							}
						}


					}


				}

				if (moving == whitepawn1.pieceID && event.type == sf::Event::MouseButtonPressed)
				{
					if (event.key.code == sf::Mouse::Right)
					{

						sf::Vector2i mpos = sf::Mouse::getPosition(window);
						int x = mpos.x / size;
						int y = mpos.y / size;
						int dx = x - oldx;
						int dy = y - oldy;
						int checker = 0;


						if (whitepawn1.moved == 0)
						{


							if (turn == 0 && ((board[y][x] == 0 && y >= oldy - 2 && oldx == x && board[y + 1][x] == 0 || board[y + 1][x] == whitepawn1.pieceID) || (board[oldy - 1][oldx + 1] < 0 && x == oldx + 1 && y == oldy - 1) || (board[oldy - 1][oldx - 1] < 0 && x == oldx - 1 && y == oldy - 1)))

							{
								valid = 1;


								if (board[y][x] == blackknight1.pieceID)
								{
									blackknight1.draw = 0;
									std::cout << "   Black Kngiht Was Taken" << std::endl;

								}
								if (board[y][x] == blackknight2.pieceID)
								{
									blackknight2.draw = 0;
									std::cout << "   Black Kngiht Was Taken" << std::endl;

								}
								if (board[y][x] == blackrook1.pieceID)
								{
									blackrook1.draw = 0;
									std::cout << "   Black Rook Was Taken" << std::endl;

								}

								if (board[y][x] == blackrook2.pieceID)
								{
									blackrook2.draw = 0;
									std::cout << "   Black Rook Was Taken" << std::endl;

								}
								if (board[y][x] == blackbishop1.pieceID)
								{
									blackbishop1.draw = 0;
									std::cout << "   Black Bishop Was Taken" << std::endl;

								}
								if (board[y][x] == blackbishop2.pieceID)
								{
									blackbishop2.draw = 0;
									std::cout << "   Black Bishop Was Taken" << std::endl;

								}

								if (board[y][x] == blackking.pieceID)
								{
									blackking.draw = 0;
									std::cout << "   Black King Was Taken" << std::endl;

								}
								if (board[y][x] == blackqueen.pieceID)
								{
									blackqueen.draw = 0;
									std::cout << "   Black Queen Was Taken" << std::endl;

								}
								if (board[y][x] == blackpawn1.pieceID)
								{
									blackpawn1.draw = 0;
									std::cout << "   Black Pawn Was Taken" << std::endl;

								}
								if (board[y][x] == blackpawn2.pieceID)
								{
									blackpawn2.draw = 0;
									std::cout << "   Black Pawn Was Taken" << std::endl;

								}
								if (board[y][x] == blackpawn3.pieceID)
								{
									blackpawn3.draw = 0;
									std::cout << "   Black Pawn Was Taken" << std::endl;

								}

								if (board[y][x] == blackpawn3.pieceID)
								{
									blackpawn3.draw = 0;
									std::cout << "   Black Pawn Was Taken" << std::endl;

								}
								if (board[y][x] == blackpawn4.pieceID)
								{
									blackpawn4.draw = 0;
									std::cout << "   Black Pawn Was Taken" << std::endl;

								}
								if (board[y][x] == blackpawn5.pieceID)
								{
									blackpawn5.draw = 0;
									std::cout << "   Black Pawn Was Taken" << std::endl;

								}
								if (board[y][x] == blackpawn6.pieceID)
								{
									blackpawn6.draw = 0;
									std::cout << "   Black Pawn Was Taken" << std::endl;

								}
								if (board[y][x] == blackpawn7.pieceID)
								{
									blackpawn7.draw = 0;
									std::cout << "   Black Pawn Was Taken" << std::endl;

								}
								if (board[y][x] == blackpawn8.pieceID)
								{
									blackpawn8.draw = 0;
									std::cout << "   Black Pawn Was Taken" << std::endl;

								}



								whitepawnsprite1.setPosition(x * size, y * size);
								board[y][x] = 1;
								board[oldy][oldx] = 0;
								moving = 0;
								whitepawn1.moved++;
								std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;
								std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
								std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;


								turn++;


							}


						}

						if (whitepawn1.moved > 0)
						{


							if (turn == 0 && ((board[y][x] == 0 && y == oldy - 1 && oldx == x) || (board[oldy - 1][oldx + 1] < 0 && x == oldx + 1 && y == oldy - 1) || (board[oldy - 1][oldx - 1] < 0 && x == oldx - 1 && y == oldy - 1)))

							{
								

								if (board[y][x] == blackknight1.pieceID)
								{
									blackknight1.draw = 0;
									std::cout << "   Black Kngiht Was Taken" << std::endl;

								}
								if (board[y][x] == blackknight2.pieceID)
								{
									blackknight2.draw = 0;
									std::cout << "   Black Kngiht Was Taken" << std::endl;

								}
								if (board[y][x] == blackrook1.pieceID)
								{
									blackrook1.draw = 0;
									std::cout << "   Black Rook Was Taken" << std::endl;

								}

								if (board[y][x] == blackrook2.pieceID)
								{
									blackrook2.draw = 0;
									std::cout << "   Black Rook Was Taken" << std::endl;

								}
								if (board[y][x] == blackbishop1.pieceID)
								{
									blackbishop1.draw = 0;
									std::cout << "   Black Bishop Was Taken" << std::endl;

								}
								if (board[y][x] == blackbishop2.pieceID)
								{
									blackbishop2.draw = 0;
									std::cout << "   Black Bishop Was Taken" << std::endl;

								}

								if (board[y][x] == blackking.pieceID)
								{
									blackking.draw = 0;
									std::cout << "   Black King Was Taken" << std::endl;

								}
								if (board[y][x] == blackqueen.pieceID)
								{
									blackqueen.draw = 0;
									std::cout << "   Black Queen Was Taken" << std::endl;

								}
								if (board[y][x] == blackpawn1.pieceID)
								{
									blackpawn1.draw = 0;
									std::cout << "   Black Pawn Was Taken" << std::endl;

								}
								if (board[y][x] == blackpawn2.pieceID)
								{
									blackpawn2.draw = 0;
									std::cout << "   Black Pawn Was Taken" << std::endl;

								}
								if (board[y][x] == blackpawn3.pieceID)
								{
									blackpawn3.draw = 0;
									std::cout << "   Black Pawn Was Taken" << std::endl;

								}

								if (board[y][x] == blackpawn3.pieceID)
								{
									blackpawn3.draw = 0;
									std::cout << "   Black Pawn Was Taken" << std::endl;

								}
								if (board[y][x] == blackpawn4.pieceID)
								{
									blackpawn4.draw = 0;
									std::cout << "   Black Pawn Was Taken" << std::endl;

								}
								if (board[y][x] == blackpawn5.pieceID)
								{
									blackpawn5.draw = 0;
									std::cout << "   Black Pawn Was Taken" << std::endl;

								}
								if (board[y][x] == blackpawn6.pieceID)
								{
									blackpawn6.draw = 0;
									std::cout << "   Black Pawn Was Taken" << std::endl;

								}
								if (board[y][x] == blackpawn7.pieceID)
								{
									blackpawn7.draw = 0;
									std::cout << "   Black Pawn Was Taken" << std::endl;

								}
								if (board[y][x] == blackpawn8.pieceID)
								{
									blackpawn8.draw = 0;
									std::cout << "   Black Pawn Was Taken" << std::endl;

								}
								valid = 1;

								whitepawnsprite1.setPosition(x * size, y * size);

								board[y][x] = 1;
								board[oldy][oldx] = 0;
								moving = 0;
								whitepawn1.moved++;
								std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;
								std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
								std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;

								turn++;


							}

							if (board[y + 1][x] > -1.8 && board[y + 1][x] <= -1)
							{

								if (board[y + 1][x] == blackpawn1.pieceID && blackpawn1.moved == 1 && oldy == y + 1)
								{

									valid = 1;
									whitepawnsprite1.setPosition(x * size, y * size);
									blackpawn1.draw = 0;
									board[y][x] = 1;
									board[oldy][oldx] = 0;
									moving = 0;
									whitepawn1.moved++;
									std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;
									std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
									std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;
									std::cout << "En Passant!!!" << std::endl;
									turn++;



								}
								if (board[y + 1][x] == blackpawn2.pieceID && blackpawn2.moved == 1 && oldy == y + 1)
								{

									valid = 1;
									whitepawnsprite1.setPosition(x * size, y * size);
									blackpawn2.draw = 0;
									board[y][x] = 1;
									board[oldy][oldx] = 0;
									moving = 0;
									whitepawn1.moved++;
									std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;
									std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
									std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;
									std::cout << "En Passant!!!" << std::endl;
									turn++;



								}
								if (board[y + 1][x] == blackpawn3.pieceID && blackpawn3.moved == 1 && oldy == y + 1)
								{

									valid = 1;
									whitepawnsprite1.setPosition(x * size, y * size);
									blackpawn3.draw = 0;
									board[y][x] = 1;
									board[oldy][oldx] = 0;
									moving = 0;
									whitepawn1.moved++;
									std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;
									std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
									std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;
									std::cout << "En Passant!!!" << std::endl;
									turn++;



								}

								if (board[y + 1][x] == blackpawn4.pieceID && blackpawn4.moved == 1 && oldy == y + 1)
								{

									valid = 1;
									whitepawnsprite1.setPosition(x * size, y * size);
									blackpawn4.draw = 0;
									board[y][x] = 1;
									board[oldy][oldx] = 0;
									moving = 0;
									whitepawn1.moved++;
									std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;
									std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
									std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;
									std::cout << "En Passant!!!" << std::endl;
									turn++;



								}

								if (board[y + 1][x] == blackpawn5.pieceID && blackpawn5.moved == 1 && oldy == y + 1)
								{

									valid = 1;
									whitepawnsprite1.setPosition(x * size, y * size);
									blackpawn5.draw = 0;
									board[y][x] = 1;
									board[oldy][oldx] = 0;
									moving = 0;
									whitepawn1.moved++;
									std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;
									std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
									std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;
									std::cout << "En Passant!!!" << std::endl;
									turn++;



								}
								if (board[y + 1][x] == blackpawn6.pieceID && blackpawn6.moved == 1 && oldy == y + 1)
								{

									valid = 1;
									whitepawnsprite1.setPosition(x * size, y * size);
									blackpawn6.draw = 0;
									board[y][x] = 1;
									board[oldy][oldx] = 0;
									moving = 0;
									whitepawn1.moved++;
									std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;
									std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
									std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;
									std::cout << "En Passant!!!" << std::endl;
									turn++;



								}
								if (board[y + 1][x] == blackpawn7.pieceID && blackpawn7.moved == 1 && oldy == y + 1)
								{

									valid = 1;
									whitepawnsprite1.setPosition(x * size, y * size);
									blackpawn7.draw = 0;
									board[y][x] = 1;
									board[oldy][oldx] = 0;
									moving = 0;
									whitepawn1.moved++;
									std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;
									std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
									std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;
									std::cout << "En Passant!!!" << std::endl;
									turn++;



								}
								if (board[y + 1][x] == blackpawn8.pieceID && blackpawn8.moved == 1 && oldy == y + 1)
								{

									valid = 1;
									whitepawnsprite1.setPosition(x * size, y * size);
									blackpawn8.draw = 0;
									board[y][x] = 1;
									board[oldy][oldx] = 0;
									moving = 0;
									whitepawn1.moved++;
									std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;
									std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
									std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;
									std::cout << "En Passant!!!" << std::endl;
									turn++;



								}


							}





						}



						if (valid == 0)
						{

							std::cout << "illegal Move" << std::endl;
						}





					}



				}
				if (moving == whitepawn4.pieceID && event.type == sf::Event::MouseButtonPressed)
				{
					if (event.key.code == sf::Mouse::Right)
					{

						sf::Vector2i mpos = sf::Mouse::getPosition(window);
						int x = mpos.x / size;
						int y = mpos.y / size;
						int dx = x - oldx;
						int dy = y - oldy;
						int checker = 0;


						if (whitepawn4.moved == 0)
						{


							if (turn == 0 && ((board[y][x] == 0 && y >= oldy - 2 && oldx == x && board[y + 1][x] == 0 || board[y + 1][x] == whitepawn4.pieceID) || (board[oldy - 1][oldx + 1] < 0 && x == oldx + 1 && y == oldy - 1) || (board[oldy - 1][oldx - 1] < 0 && x == oldx - 1 && y == oldy - 1)))

							{
								

								
								if (board[y][x] == blackknight1.pieceID)
								{
									blackknight1.draw = 0;
									std::cout << "   Black Kngiht Was Taken" << std::endl;

								}
								if (board[y][x] == blackknight2.pieceID)
								{
									blackknight2.draw = 0;
									std::cout << "   Black Kngiht Was Taken" << std::endl;

								}
								if (board[y][x] == blackrook1.pieceID)
								{
									blackrook1.draw = 0;
									std::cout << "   Black Rook Was Taken" << std::endl;

								}

								if (board[y][x] == blackrook2.pieceID)
								{
									blackrook2.draw = 0;
									std::cout << "   Black Rook Was Taken" << std::endl;

								}
								if (board[y][x] == blackbishop1.pieceID)
								{
									blackbishop1.draw = 0;
									std::cout << "   Black Bishop Was Taken" << std::endl;

								}
								if (board[y][x] == blackbishop2.pieceID)
								{
									blackbishop2.draw = 0;
									std::cout << "   Black Bishop Was Taken" << std::endl;

								}

								if (board[y][x] == blackking.pieceID)
								{
									blackking.draw = 0;
									std::cout << "   Black King Was Taken" << std::endl;

								}
								if (board[y][x] == blackqueen.pieceID)
								{
									blackqueen.draw = 0;
									std::cout << "   Black Queen Was Taken" << std::endl;

								}
								if (board[y][x] == blackpawn1.pieceID)
								{
									blackpawn1.draw = 0;
									std::cout << "   Black Pawn Was Taken" << std::endl;

								}
								if (board[y][x] == blackpawn2.pieceID)
								{
									blackpawn2.draw = 0;
									std::cout << "   Black Pawn Was Taken" << std::endl;

								}
								if (board[y][x] == blackpawn3.pieceID)
								{
									blackpawn3.draw = 0;
									std::cout << "   Black Pawn Was Taken" << std::endl;

								}

								if (board[y][x] == blackpawn3.pieceID)
								{
									blackpawn3.draw = 0;
									std::cout << "   Black Pawn Was Taken" << std::endl;

								}
								if (board[y][x] == blackpawn4.pieceID)
								{
									blackpawn4.draw = 0;
									std::cout << "   Black Pawn Was Taken" << std::endl;

								}
								if (board[y][x] == blackpawn5.pieceID)
								{
									blackpawn5.draw = 0;
									std::cout << "   Black Pawn Was Taken" << std::endl;

								}
								if (board[y][x] == blackpawn6.pieceID)
								{
									blackpawn6.draw = 0;
									std::cout << "   Black Pawn Was Taken" << std::endl;

								}
								if (board[y][x] == blackpawn7.pieceID)
								{
									blackpawn7.draw = 0;
									std::cout << "   Black Pawn Was Taken" << std::endl;

								}
								if (board[y][x] == blackpawn8.pieceID)
								{
									blackpawn8.draw = 0;
									std::cout << "   Black Pawn Was Taken" << std::endl;

								}

								valid = 1;

								whitepawnsprite4.setPosition(x* size, y* size);
								board[y][x] = 1.3;
								board[oldy][oldx] = 0;
								moving = 0;
								whitepawn4.moved++;
								std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;
								std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
								std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;


								turn++;


							}


						}

						if (whitepawn4.moved > 0)
						{


							if (turn == 0 && ((board[y][x] == 0 && y == oldy - 1 && oldx == x) || (board[oldy - 1][oldx + 1] < 0 && x == oldx + 1 && y == oldy - 1) || (board[oldy - 1][oldx - 1] < 0 && x == oldx - 1 && y == oldy - 1)))

							{
								if (board[y][x] == blackknight1.pieceID)
								{
									blackknight1.draw = 0;
									std::cout << "   Black Kngiht Was Taken" << std::endl;

								}
								if (board[y][x] == blackknight2.pieceID)
								{
									blackknight2.draw = 0;
									std::cout << "   Black Kngiht Was Taken" << std::endl;

								}
								if (board[y][x] == blackrook1.pieceID)
								{
									blackrook1.draw = 0;
									std::cout << "   Black Rook Was Taken" << std::endl;

								}

								if (board[y][x] == blackrook2.pieceID)
								{
									blackrook2.draw = 0;
									std::cout << "   Black Rook Was Taken" << std::endl;

								}
								if (board[y][x] == blackbishop1.pieceID)
								{
									blackbishop1.draw = 0;
									std::cout << "   Black Bishop Was Taken" << std::endl;

								}
								if (board[y][x] == blackbishop2.pieceID)
								{
									blackbishop2.draw = 0;
									std::cout << "   Black Bishop Was Taken" << std::endl;

								}

								if (board[y][x] == blackking.pieceID)
								{
									blackking.draw = 0;
									std::cout << "   Black King Was Taken" << std::endl;

								}
								if (board[y][x] == blackqueen.pieceID)
								{
									blackqueen.draw = 0;
									std::cout << "   Black Queen Was Taken" << std::endl;

								}
								if (board[y][x] == blackpawn1.pieceID)
								{
									blackpawn1.draw = 0;
									std::cout << "   Black Pawn Was Taken" << std::endl;

								}
								if (board[y][x] == blackpawn2.pieceID)
								{
									blackpawn2.draw = 0;
									std::cout << "   Black Pawn Was Taken" << std::endl;

								}
								if (board[y][x] == blackpawn3.pieceID)
								{
									blackpawn3.draw = 0;
									std::cout << "   Black Pawn Was Taken" << std::endl;

								}

								if (board[y][x] == blackpawn3.pieceID)
								{
									blackpawn3.draw = 0;
									std::cout << "   Black Pawn Was Taken" << std::endl;

								}
								if (board[y][x] == blackpawn4.pieceID)
								{
									blackpawn4.draw = 0;
									std::cout << "   Black Pawn Was Taken" << std::endl;

								}
								if (board[y][x] == blackpawn5.pieceID)
								{
									blackpawn5.draw = 0;
									std::cout << "   Black Pawn Was Taken" << std::endl;

								}
								if (board[y][x] == blackpawn6.pieceID)
								{
									blackpawn6.draw = 0;
									std::cout << "   Black Pawn Was Taken" << std::endl;

								}
								if (board[y][x] == blackpawn7.pieceID)
								{
									blackpawn7.draw = 0;
									std::cout << "   Black Pawn Was Taken" << std::endl;

								}
								if (board[y][x] == blackpawn8.pieceID)
								{
									blackpawn8.draw = 0;
									std::cout << "   Black Pawn Was Taken" << std::endl;

								}

								valid = 1;

								whitepawnsprite4.setPosition(x * size, y * size);

								board[y][x] = 1.3;
								board[oldy][oldx] = 0;
								moving = 0;
								whitepawn4.moved++;
								std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;
								std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
								std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;
								
								turn++;
			

							}

							if (board[y + 1][x] > -1.8 && board[y + 1][x] <= -1)
							{

								if (board[y + 1][x] == blackpawn1.pieceID && blackpawn1.moved == 1 && oldy == y + 1)
								{

									valid = 1;
									whitepawnsprite4.setPosition(x * size, y * size);
									blackpawn1.draw = 0;
									board[y][x] = 1.3;
									board[oldy][oldx] = 0;
									moving = 0;
									whitepawn4.moved++;
									std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;
									std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
									std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;
									std::cout << "En Passant!!!" << std::endl;
									turn++;



								}
								if (board[y + 1][x] == blackpawn2.pieceID && blackpawn2.moved == 1 && oldy == y + 1)
								{

									valid = 1;
									whitepawnsprite4.setPosition(x * size, y * size);
									blackpawn2.draw = 0;
									board[y][x] = 1.3;
									board[oldy][oldx] = 0;
									moving = 0;
									whitepawn4.moved++;
									std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;
									std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
									std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;
									std::cout << "En Passant!!!" << std::endl;
									turn++;



								}
								if (board[y + 1][x] == blackpawn3.pieceID && blackpawn3.moved == 1 && oldy == y + 1)
								{

									valid = 1;
									whitepawnsprite4.setPosition(x * size, y * size);
									blackpawn3.draw = 0;
									board[y][x] = 1.3;
									board[oldy][oldx] = 0;
									moving = 0;
									whitepawn4.moved++;
									std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;
									std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
									std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;
									std::cout << "En Passant!!!" << std::endl;
									turn++;



								}

								if (board[y + 1][x] == blackpawn4.pieceID && blackpawn4.moved == 1 && oldy == y + 1)
								{

									valid = 1;
									whitepawnsprite4.setPosition(x * size, y * size);
									blackpawn4.draw = 0;
									board[y][x] = 1.3;
									board[oldy][oldx] = 0;
									moving = 0;
									whitepawn4.moved++;
									std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;
									std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
									std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;
									std::cout << "En Passant!!!" << std::endl;
									turn++;



								}

								if (board[y + 1][x] == blackpawn5.pieceID && blackpawn5.moved == 1 && oldy == y + 1)
								{

									valid = 1;
									whitepawnsprite4.setPosition(x * size, y * size);
									blackpawn5.draw = 0;
									board[y][x] = 1.3;
									board[oldy][oldx] = 0;
									moving = 0;
									whitepawn4.moved++;
									std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;
									std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
									std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;
									std::cout << "En Passant!!!" << std::endl;
									turn++;



								}
								if (board[y + 1][x] == blackpawn6.pieceID && blackpawn6.moved == 1 && oldy == y + 1)
								{

									valid = 1;
									whitepawnsprite4.setPosition(x * size, y * size);
									blackpawn6.draw = 0;
									board[y][x] = 1.3;
									board[oldy][oldx] = 0;
									moving = 0;
									whitepawn4.moved++;
									std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;
									std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
									std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;
									std::cout << "En Passant!!!" << std::endl;
									turn++;



								}
								if (board[y + 1][x] == blackpawn7.pieceID && blackpawn7.moved == 1 && oldy == y + 1)
								{

									valid = 1;
									whitepawnsprite4.setPosition(x * size, y * size);
									blackpawn7.draw = 0;
									board[y][x] = 1.3;
									board[oldy][oldx] = 0;
									moving = 0;
									whitepawn4.moved++;
									std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;
									std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
									std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;
									std::cout << "En Passant!!!" << std::endl;
									turn++;



								}
								if (board[y + 1][x] == blackpawn8.pieceID && blackpawn8.moved == 1 && oldy == y + 1)
								{

									valid = 1;
									whitepawnsprite4.setPosition(x * size, y * size);
									blackpawn8.draw = 0;
									board[y][x] = 1.3;
									board[oldy][oldx] = 0;
									moving = 0;
									whitepawn4.moved++;
									std::cout << "///MOVED//" << "ChessPiece: " << board[y][x] << "   " << std::endl;
									std::cout << "oldx: " << oldx << "   " << "oldy: " << oldy << std::endl;
									std::cout << "TO: " << "x: " << x << "   " << "y: " << y << std::endl;
									std::cout << "En Passant!!!" << std::endl;
									turn++;



								}


							}





						}



						if (valid == 0)
						{

							std::cout << "illegal Move" << std::endl;
						}





					}



				}
			}

			
			//draws the sqaures of the board
			
			window.draw(a1);
			window.draw(a2);
			window.draw(a3);
			window.draw(a4);
			window.draw(a5);
			window.draw(a6);
			window.draw(a7);
			window.draw(a8);

			window.draw(b1);
			window.draw(b2);
			window.draw(b3);
			window.draw(b4);
			window.draw(b5);
			window.draw(b6);
			window.draw(b7);
			window.draw(b8);

			window.draw(c1);
			window.draw(c2);
			window.draw(c3);
			window.draw(c4);
			window.draw(c5);
			window.draw(c6);
			window.draw(c7);
			window.draw(c8);

			window.draw(d1);
			window.draw(d2);
			window.draw(d3);
			window.draw(d4);
			window.draw(d5);
			window.draw(d6);
			window.draw(d7);
			window.draw(d8);

			window.draw(e1);
			window.draw(e2);
			window.draw(e3);
			window.draw(e4);
			window.draw(e5);
			window.draw(e6);
			window.draw(e7);
			window.draw(e8);

			window.draw(f1);
			window.draw(f2);
			window.draw(f3);
			window.draw(f4);
			window.draw(f5);
			window.draw(f6);
			window.draw(f7);
			window.draw(f8);

			window.draw(g1);
			window.draw(g2);
			window.draw(g3);
			window.draw(g4);
			window.draw(g5);
			window.draw(g6);
			window.draw(g7);
			window.draw(g8);

			window.draw(h1);
			window.draw(h2);
			window.draw(h3);
			window.draw(h4);
			window.draw(h5);
			window.draw(h6);
			window.draw(h7);
			window.draw(h8);



			//draws the peices of the board and removes them if draw == 0

			if (blackrook1.draw == 1)
			{
				window.draw(blackrooksprite1);

			}

			if (blackrook2.draw == 1)
			{
				window.draw(blackrooksprite2);

			}


			if (blackqueen.draw == 1)
			{
				window.draw(blackqueensprite);

			}

			if (blackking.draw == 1)
			{
				window.draw(blackkingsprite);

			}

			if (blackbishop1.draw == 1)
			{
				window.draw(blackbishopsprite1);

			}

			if (blackbishop2.draw == 1)
			{
				window.draw(blackbishopsprite2);

			}

			if (blackknight1.draw == 1)
			{
				window.draw(blackknightsprite1);

			}

			if (blackknight2.draw == 1)
			{
				window.draw(blackknightsprite2);

			}

			if (blackpawn1.draw == 1)
			{
				window.draw(blackpawnsprite1);

			}

			if (blackpawn2.draw == 1)
			{
				window.draw(blackpawnsprite2);

			}

			if (blackpawn3.draw == 1)
			{
				window.draw(blackpawnsprite3);

			}

			if (blackpawn4.draw == 1)
			{
				window.draw(blackpawnsprite4);

			}
			if (blackpawn5.draw == 1)
			{
				window.draw(blackpawnsprite5);

			}
			if (blackpawn6.draw == 1)
			{
				window.draw(blackpawnsprite6);

			}
			if (blackpawn7.draw == 1)
			{
				window.draw(blackpawnsprite7);

			}
			if (blackpawn8.draw == 1)
			{
				window.draw(blackpawnsprite8);

			}




			// white pieces

			if (whiterook1.draw == 1)
			{
				window.draw(whiterooksprite1);

			}

			if (whiterook1.draw == 1)
			{
				window.draw(whiterooksprite2);

			}

			if (whiterook2.draw == 1)
			{
				window.draw(whiterooksprite2);

			}

			if (whitequeen.draw == 1)
			{
				window.draw(whitequeensprite);

			}

			if (whiteking.draw == 1)
			{
				window.draw(whitekingsprite);

			}

			if (whitebishop1.draw == 1)
			{
				window.draw(whitebishopsprite1);

			}

			if (whitebishop2.draw == 1)
			{
				window.draw(whitebishopsprite2);

			}

			if (whiteknight1.draw == 1)
			{
				window.draw(whiteknightsprite1);

			}

			if (whiteknight2.draw == 1)
			{
				window.draw(whiteknightsprite2);

			}

			if (whitepawn1.draw == 1)
			{
				window.draw(whitepawnsprite1);

			}

			if (whitepawn2.draw == 1)
			{
				window.draw(whitepawnsprite2);

			}

			if (whitepawn3.draw == 1)
			{
				window.draw(whitepawnsprite3);

			}

			if (whitepawn4.draw == 1)
			{
				window.draw(whitepawnsprite4);

			}
			if (whitepawn5.draw == 1)
			{
				window.draw(whitepawnsprite5);

			}
			if (whitepawn6.draw == 1)
			{
				window.draw(whitepawnsprite6);

			}
			if (whitepawn7.draw == 1)
			{
				window.draw(whitepawnsprite7);

			}
			if (whitepawn8.draw == 1)
			{
				window.draw(whitepawnsprite8);

			}







			// game end
			if (blackking.draw == 0 && end == 0 )
			{
				
				std::cout << "White Wins!";
				end++;

			}

			if (whiteking.draw == 0)
			{

				std::cout << "Black Wins!";
				window.close();

			}
			window.display();


		}
	}


};