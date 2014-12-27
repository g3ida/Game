#include "Game.h"
#include "Game_error.h"
#include <iostream>

Game::Game()
{

}

Game::~Game()
{

}

void
Game::init()
{
    if(SDL_Init(SDL_INIT_VIDEO) < 0) throw Game_init_fail("Unable to initialize SDL");

}

void
Game::handleEvents()
{

}

void
Game::render()
{

}

void
Game::update()
{

}

void
Game::cleanUp()
{
    if(SDL_WasInit(SDL_INIT_VIDEO)) SDL_Quit();
}

int
Game::exec()
{
    try{
        init();
        while(!m_end){
            handleEvents();
            update();
            render();
        }
    }catch(std::exception& e){
        std::cerr << "FATAL ERROR : " << e.what() << std::endl;
        cleanUp();
    }
    cleanUp();
    return 0;
}
