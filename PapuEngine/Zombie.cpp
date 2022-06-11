#include "Zombie.h"



Zombie::Zombie()
{
}


Zombie::~Zombie()
{
}

void Zombie::init(float speed, glm::vec2 position)
{
	_speed = speed;
	_color.set(0, 220, 80, 255);
	_position = position;
}

void Zombie::update(const std::vector<std::string>& levelData)
{
}
