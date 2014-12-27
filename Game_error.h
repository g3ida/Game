#ifndef __DEF_GAME_ERROR_H__
#define __DEF_GAME_ERROR_H__

#include <exception>
#include <string>
#include <SDL2/SDL.h>

class Game_error : public std::exception {

public :
    Game_error(const std::string& msg) : m_msg(msg) {}
    virtual const char* what() const noexcept {
		return m_msg.c_str();
	}
private :
    std::string m_msg;
};

class Game_init_fail : public Game_error {

public :
    Game_init_fail(const std::string& msg) : Game_error(msg) {}

};

#endif // __DEF_GAME_ERROR_H__
