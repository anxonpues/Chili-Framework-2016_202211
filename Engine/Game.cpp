/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.cpp																			  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#include "MainWindow.h"
#include "Game.h"

Game::Game( MainWindow& wnd )
	:
	wnd( wnd ),
	gfx( wnd )
{
}

void Game::Go()
{
	gfx.BeginFrame();	
	UpdateModel();
	ComposeFrame();
	gfx.EndFrame();
}

void Game::UpdateModel()
{
}

void Game::ComposeFrame()
{
	int x = 400;
	int y = 300;
	int dx = 0;
	int dy = 0;
	int r = 0;
	int g = 0;
	int b = 0;
	int frame = 1;

	if (wnd.kbd.KeyIsPressed(VK_DOWN))
		dy = +30;
	if (wnd.kbd.KeyIsPressed(VK_UP))
		dy = -30;
	if (wnd.kbd.KeyIsPressed(VK_LEFT))
		dx = -30;
	if (wnd.kbd.KeyIsPressed(VK_RIGHT))
		dx = +30;
	if (wnd.kbd.KeyIsPressed(VK_CONTROL))
		r = 255;
	if (wnd.kbd.KeyIsPressed(VK_SHIFT))
		g = 255;
	/*if (wnd.kbd.KeyIsPressed(VK_MENU))	// looks like this code doesn't work
		b = 255; */
	/*if (wnd.kbd.KeyIsPressed(0x12))	// with hexadecimal doesn't work neither
		b = 255;  */
	if (wnd.kbd.KeyIsPressed(VK_RETURN))	
		b = 255;
	if (wnd.kbd.KeyIsPressed(VK_SPACE))
		frame *= (-1);

	if (frame == 1)
	{
		gfx.PutPixel(x + dx - 5, y + dy +0, r, g, b);
		gfx.PutPixel(x + dx - 4, y + dy +0, r, g, b);
		gfx.PutPixel(x + dx - 3, y + dy +0, r, g, b);
		gfx.PutPixel(x + dx + 3, y + dy +0, r, g, b);
		gfx.PutPixel(x + dx + 4, y + dy +0, r, g, b);
		gfx.PutPixel(x + dx + 5, y + dy +0, r, g, b);
		gfx.PutPixel(x + dx + 0, y + dy -5, r, g, b);
		gfx.PutPixel(x + dx + 0, y + dy -4, r, g, b);
		gfx.PutPixel(x + dx + 0, y + dy -3, r, g, b);
		gfx.PutPixel(x + dx + 0, y + dy +3, r, g, b);
		gfx.PutPixel(x + dx + 0, y + dy +4, r, g, b);
		gfx.PutPixel(x + dx + 0, y + dy +5, r, g, b);
	}
	
	if (frame == -1)
	{
		gfx.PutPixel(x + dx + 0, y  + dy + 0, r, g, b);
		gfx.PutPixel(x + dx + 1, y  + dy + 1, r, g, b);
		gfx.PutPixel(x + dx + 1, y  + dy - 1, r, g, b);
		gfx.PutPixel(x + dx + 2, y  + dy + 2, r, g, b);
		gfx.PutPixel(x + dx + 2, y  + dy - 2, r, g, b);
		gfx.PutPixel(x + dx + 3, y  + dy + 3, r, g, b);
		gfx.PutPixel(x + dx + 3, y  + dy - 3, r, g, b);
		gfx.PutPixel(x + dx + 4, y  + dy + 4, r, g, b);
		gfx.PutPixel(x + dx + 4, y  + dy - 4, r, g, b);
		gfx.PutPixel(x + dx + 5, y  + dy + 3, r, g, b);
		gfx.PutPixel(x + dx + 5, y  + dy - 3, r, g, b);
		gfx.PutPixel(x + dx + 6, y  + dy + 2, r, g, b);
		gfx.PutPixel(x + dx + 6, y  + dy - 2, r, g, b);
		gfx.PutPixel(x + dx + 7, y  + dy + 1, r, g, b);
		gfx.PutPixel(x + dx + 7, y  + dy - 1, r, g, b);
		gfx.PutPixel(x + dx + 8, y  + dy + 0, r, g, b);
	}

	/*
	x = 16;
	gfx.PutPixel(395 + x, 305, 255, 25, 255);
	gfx.PutPixel(396 + x, 305, 255, 25, 255);
	gfx.PutPixel(397 + x, 305, 255, 25, 255);
	gfx.PutPixel(398 + x, 305, 255, 25, 255);
	gfx.PutPixel(399 + x, 305, 255, 25, 255);
	gfx.PutPixel(400 + x, 305, 255, 25, 255);
	gfx.PutPixel(401 + x, 295, 255, 25, 255);
	gfx.PutPixel(402 + x, 295, 255, 25, 255);
	gfx.PutPixel(403 + x, 295, 255, 25, 255);
	gfx.PutPixel(404 + x, 295, 255, 25, 255);
	gfx.PutPixel(405 + x, 295, 255, 25, 255);
	gfx.PutPixel(406 + x, 295, 255, 25, 255);

	x = 56;
	y = -20;
	gfx.PutPixel(396 + x, 305 + y, 255, 250, 5);
	gfx.PutPixel(397 + x, 305 + y, 255, 250, 5);
	gfx.PutPixel(398 + x, 305 + y, 255, 250, 5);
	gfx.PutPixel(399 + x, 305 + y, 255, 250, 5);
	gfx.PutPixel(400 + x, 305 + y, 255, 250, 5);
	gfx.PutPixel(401 + x, 295 + y, 255, 250, 5);
	gfx.PutPixel(402 + x, 295 + y, 255, 250, 5);
	gfx.PutPixel(403 + x, 295 + y, 255, 250, 5);
	gfx.PutPixel(404 + x, 295 + y, 255, 250, 5);
	gfx.PutPixel(405 + x, 295 + y, 255, 250, 5);
	gfx.PutPixel(406 + x, 295 + y, 255, 250, 5);
	gfx.PutPixel(395 + x, 305 + y, 255, 250, 5);
	*/						    
	int xoff = 655;
	int yoff = 117;
	gfx.PutPixel(xoff - 5, yoff    , 255, 255, 255);
	gfx.PutPixel(xoff - 4, yoff    , 255, 255, 255);
	gfx.PutPixel(xoff - 3, yoff    , 255, 255, 255);
	gfx.PutPixel(xoff + 3, yoff    , 255, 255, 255);
	gfx.PutPixel(xoff + 4, yoff    , 255, 255, 255);
	gfx.PutPixel(xoff + 5, yoff    , 255, 255, 255);
	gfx.PutPixel(xoff    , yoff - 5, 255, 255, 255);
	gfx.PutPixel(xoff    , yoff - 4, 255, 255, 255);
	gfx.PutPixel(xoff    , yoff - 3, 255, 255, 255);
	gfx.PutPixel(xoff    , yoff + 3, 255, 255, 255);
	gfx.PutPixel(xoff    , yoff + 4, 255, 255, 255);
	gfx.PutPixel(xoff    , yoff + 5, 255, 255, 255);
					     
	xoff = 85;
	yoff = 517;
	gfx.PutPixel(xoff - 5, yoff    , 255, 255, 255);
	gfx.PutPixel(xoff - 4, yoff    , 255, 255, 255);
	gfx.PutPixel(xoff - 3, yoff    , 255, 255, 255);
	gfx.PutPixel(xoff + 3, yoff    , 255, 255, 255);
	gfx.PutPixel(xoff + 4, yoff    , 255, 255, 255);
	gfx.PutPixel(xoff + 5, yoff    , 255, 255, 255);
	gfx.PutPixel(xoff    , yoff - 5, 255, 255, 255);
	gfx.PutPixel(xoff    , yoff - 4, 255, 255, 255);
	gfx.PutPixel(xoff    , yoff - 3, 255, 255, 255);
	gfx.PutPixel(xoff    , yoff + 3, 255, 255, 255);
	gfx.PutPixel(xoff    , yoff + 4, 255, 255, 255);
	gfx.PutPixel(xoff    , yoff + 5, 255, 255, 255);

	xoff = 585;
	yoff = 577;
	gfx.PutPixel(xoff - 5, yoff    , 255, 255, 255);
	gfx.PutPixel(xoff - 4, yoff    , 255, 255, 255);
	gfx.PutPixel(xoff - 3, yoff    , 255, 255, 255);
	gfx.PutPixel(xoff - 2, yoff    , 255,   0,   0);
	gfx.PutPixel(xoff - 1, yoff    , 255, 200,   0);
	gfx.PutPixel(xoff + 1, yoff    , 255, 200,   0);
	gfx.PutPixel(xoff + 2, yoff    , 255,   0,   0);
	gfx.PutPixel(xoff + 3, yoff    , 255, 255, 255);
	gfx.PutPixel(xoff + 4, yoff    , 255, 255, 255);
	gfx.PutPixel(xoff + 5, yoff    , 255, 255, 255);
	gfx.PutPixel(xoff    , yoff - 5, 255, 255, 255);
	gfx.PutPixel(xoff    , yoff - 4, 255, 255, 255);
	gfx.PutPixel(xoff    , yoff - 3, 255, 255, 255);
	gfx.PutPixel(xoff    , yoff - 2, 255,   0,   0);
	gfx.PutPixel(xoff    , yoff - 1, 255, 200,   0);
	gfx.PutPixel(xoff    , yoff + 1, 255, 200,   0);
	gfx.PutPixel(xoff    , yoff + 2, 255,   0,   0);
	gfx.PutPixel(xoff    , yoff + 3, 255, 255, 255);
	gfx.PutPixel(xoff    , yoff + 4, 255, 255, 255);
	gfx.PutPixel(xoff    , yoff + 5, 255, 255, 255);

	int rombx = 90;
	int romby = 68;
	gfx.PutPixel(rombx + 0, romby + 0, 60, 255, 140);
	gfx.PutPixel(rombx + 1, romby + 1, 60, 255, 140);
	gfx.PutPixel(rombx + 1, romby - 1, 60, 255, 140);
	gfx.PutPixel(rombx + 2, romby + 2, 60, 255, 140);
	gfx.PutPixel(rombx + 2, romby - 2, 60, 255, 140);
	gfx.PutPixel(rombx + 3, romby + 3, 60, 255, 140);
	gfx.PutPixel(rombx + 3, romby - 3, 60, 255, 140);
	gfx.PutPixel(rombx + 4 ,romby + 4, 60, 255, 140);
	gfx.PutPixel(rombx + 4, romby - 4, 60, 255, 140);
	gfx.PutPixel(rombx + 5, romby + 3, 60, 255, 140);
	gfx.PutPixel(rombx + 5, romby - 3, 60, 255, 140);
	gfx.PutPixel(rombx + 6, romby + 2, 60, 255, 140);
	gfx.PutPixel(rombx + 6, romby - 2, 60, 255, 140);
	gfx.PutPixel(rombx + 7, romby + 1, 60, 255, 140);
	gfx.PutPixel(rombx + 7, romby - 1, 60, 255, 140);
	gfx.PutPixel(rombx + 8, romby + 0, 60, 255, 140);

	const bool cond = wnd.kbd.KeyIsPressed(VK_DOWN);

	if (cond)
	{
		int cornx = 190;
		int corny = 168;
		// upper left horizontal
		gfx.PutPixel(cornx + 0, corny + 0, 160, 255, 100);
		gfx.PutPixel(cornx + 1, corny + 0, 160, 255, 100);
		gfx.PutPixel(cornx + 2, corny + 0, 160, 255, 100);
		gfx.PutPixel(cornx + 3, corny + 0, 160, 255, 100);
		// upper right horizontal
		gfx.PutPixel(cornx + 6, corny + 0, 160, 255, 100);
		gfx.PutPixel(cornx + 7, corny + 0, 160, 255, 100);
		gfx.PutPixel(cornx + 8, corny + 0, 160, 255, 100);
		gfx.PutPixel(cornx + 9, corny + 0, 160, 255, 100);
		// lower left horizontal
		gfx.PutPixel(cornx + 0, corny + 9, 160, 255, 100);
		gfx.PutPixel(cornx + 1, corny + 9, 160, 255, 100);
		gfx.PutPixel(cornx + 2, corny + 9, 160, 255, 100);
		gfx.PutPixel(cornx + 3, corny + 9, 160, 255, 100);
		// lower right horizontal
		gfx.PutPixel(cornx + 6, corny + 9, 160, 255, 100);
		gfx.PutPixel(cornx + 7, corny + 9, 160, 255, 100);
		gfx.PutPixel(cornx + 8, corny + 9, 160, 255, 100);
		gfx.PutPixel(cornx + 9, corny + 9, 160, 255, 100);
		// upper left vertical
		gfx.PutPixel(cornx + 0, corny + 1, 160, 255, 100);
		gfx.PutPixel(cornx + 0, corny + 2, 160, 255, 100);
		gfx.PutPixel(cornx + 0, corny + 3, 160, 255, 100);
		// lower left vertical
		gfx.PutPixel(cornx + 0, corny + 6, 160, 255, 100);
		gfx.PutPixel(cornx + 0, corny + 7, 160, 255, 100);
		gfx.PutPixel(cornx + 0, corny + 8, 160, 255, 100);
		// upper right vertical
		gfx.PutPixel(cornx + 9, corny + 1, 160, 255, 100);
		gfx.PutPixel(cornx + 9, corny + 2, 160, 255, 100);
		gfx.PutPixel(cornx + 9, corny + 3, 160, 255, 100);
		// lower right vertical
		gfx.PutPixel(cornx + 9, corny + 6, 160, 255, 100);
		gfx.PutPixel(cornx + 9, corny + 7, 160, 255, 100);
		gfx.PutPixel(cornx + 9, corny + 8, 160, 255, 100);
		// centered pixels 
		gfx.PutPixel(cornx + 4, corny + 4, 255, 255, 40);
		gfx.PutPixel(cornx + 4, corny + 5, 255, 255, 40);
		gfx.PutPixel(cornx + 5, corny + 4, 255, 255, 40);
		gfx.PutPixel(cornx + 5, corny + 5, 255, 255, 40);
	}

}
