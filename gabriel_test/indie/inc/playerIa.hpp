#ifndef PLAYERIA_HPP_
# define PLAYERIA_HPP_

#include "game.hpp"
#include "../inc/player.hpp"

class playerIa : public player
{
        public:
                playerIa(int, int, game *, int);
                ~playerIa();
		void run(game *t);
		void collide_bomb();
		std::pair<int, int> find();
		bool is_danger(std::pair<int , int>);
		std::pair<int, int> choose_mod();
		void movePlayer(int ,int, game *t);
		void putBomb(game *);
		void walkOnFire(game *t);
		void setlive();
		bool ntMove(int, int, game *);
		bool check_collision(int , int);
                void takeRadius() {};
                void movePlayer(moveDir, game*) {};
                void timeExplode(game *) {};
                void setLimitBomb() {};

	private:
	void attack(int x, int y);
	std::pair<int, int> get_cover(int x, int y);
	std::map<int, element*> _board;
	std::vector<std::pair<int, int>> escape;
	int oldx;
	int oldy;
	int _maxLimitBomb;
	int _limitBomb;
	int _timeResetBomb;
	int _onResetBomb;
	int _radius;
	bool _alive;
	irr::scene::ISceneNode *_node;
	float xa;
	float ya;
};


#endif /* PLAYERIA_HPP_ */
