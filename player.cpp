#include "player.hpp"

Player::Player(std::string name, std::string area, int level = 1, double exp = 0) {
    set_name(name);
    set_area(area);
    set_level(level);
    set_exp(exp);
    
}