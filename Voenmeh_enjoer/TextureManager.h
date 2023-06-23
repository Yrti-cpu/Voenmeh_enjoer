#pragma once
#include "Game.h"

class TextureManager
{
public:
	static SDL_Texture* LoadTexture(const char* path);//�������� ��������
	static SDL_Texture* LoadText(const wchar_t* message, SDL_Color color, SDL_Rect* rect);//�������� ��������

	static void Draw(SDL_Texture* tex, SDL_Rect src, SDL_Rect dest);//��������� ��������

};

