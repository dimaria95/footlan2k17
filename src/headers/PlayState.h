#ifndef PLAYSTATE_H_
#define PLAYSTATE_H_

#include "Game.h"
#include "State.h"
#include "Entity.h"
#include "Goal.h"
#include "Team.h"

class PlayState : public State {
public:
    PlayState(Game* game);
    ~PlayState();

    void update();
    void render(sf::RenderWindow& window);
    void keyboard(sf::Keyboard::Key& key);
private:
  Entity* m_ball;
	Entity* m_serbian_chetnik;
  Goal *m_goal_home;
  Goal *m_goal_away;
  Team *m_team1;
  sf::Sprite m_field;
};

#endif