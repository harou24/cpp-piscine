#include "Enemy.hpp"

Enemy::Enemy(void)
{
	this->_hitPts = 0;
	this->_type = "default";
}

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

std::string const Enemy::getType(void) const
{
	return (this->_type);
}

int Enemy::getHP(void) const
{
	return this->_hitPts;
}

void Enemy::setType(std::string const type)
{
	this->_type = type;
}

void Enemy::setHP(const int val)
{
	this->_hitPts = val;
}

void Enemy::takeDamage(int){}
