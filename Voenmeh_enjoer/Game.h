#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <SDL_mixer.h>
#include <iostream>
#include <list>
#include "Records.h"

class Game
{
public:
	Game();//�����������
	~Game();//����������

	void init(const char* title, int width, int height, bool fullscreen);//������������� ���� � ����������
	void menu();
	void start();
	void end();
	void info();
	void player_name();
	void records(std::list<Records*>& r);
	void handleEvents();//��������� �������� ������������
	void generateGameObject();
	void update();//���������� ��������� ����
	void render();//��������� �������� 
	void clean();//�������� ���� � ���������� 

	int running() { return isRunning; }

	static SDL_Renderer* renderer;//���������, � ������� �������� ��������� ����������
	static TTF_Font* gFont;
	static int isRunning;
	static int score;
	static std::wstring name;
	static int SelectedItem;


	static bool Flag1;
	static bool Flag2;

	enum Status
	{
		OFF,
		PAUSE,
		MENU,
		END,
		INFO,
		PLAYER_NAME,
		RECORDS,
		ON
	};
private:
	SDL_Window* window;//����, � ������� �������� ��� ������������ �������
	SDL_Event event;//��������� �������

	Mix_Music* gMusic;
	Mix_Music* gMenu;
	Mix_Music* gWin;
	Mix_Music* gLose;

	Mix_Chunk* gSelect;
	Mix_Chunk* gStart;
	Mix_Chunk* gItem;
	Mix_Chunk* gScroll;

};