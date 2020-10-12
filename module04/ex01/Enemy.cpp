#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type)
{
	this->_hitPts = hp;
	this->_type = type;
}

Enemy::Enemy(const Enemy &e)
{
	*(this) = e;
}

Enemy::~Enemy(void)
{

}

Enemy& Enemy::operator = (const Enemy &e)
{
	this->_type = e._type;
	this->_hitPts = e._hitPts;
	return (*this);
}

std::string const Enemy::getType() const
{
	return (this->_type);
}

int Enemy::getHP() const
{
	return this->_hitPts;
}

void Enemy::takeDamage(int){}
