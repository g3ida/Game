#ifndef __DEF_GAME_H__
#define __DEF_GAME_H__

#include <SDL2/SDL.h>

class Game
{
public :
    Game();
    ~Game();
    void init();
    void handleEvents();
    void render();
    void update();
    void cleanUp();
    int exec();

private :
    bool m_end = false;
};

#endif // __DEF_GAME_H__
