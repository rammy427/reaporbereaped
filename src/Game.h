#include "Player.h"
#include "Mob.h"
#include <vector>

#ifndef GAME_H
#define GAME_H

class Game
{
public:
    Game(sf::RenderWindow& rw);
    void run();
private:
    void processEvents();
    void updateEntities();
    void drawFrame();
    /** Game Functions **/
    void doPlayerMobCollision();
private:
    sf::RenderWindow& rw;
    sf::Clock clock;
    /** Game Variables **/
    Player player;
    std::vector<Mob> mobs;
};

#endif