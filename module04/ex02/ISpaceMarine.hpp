#ifndef ISPACE_MARINE_H_
# define ISPACE_MARINE_H_

class ISpaceMarine {

	public:
			virtual ~ISpaceMarine() {}
			virtual ISpaceMarine* clone() const = 0;
			virtual void battleCry() const = 0;
			virtual void rangedAttack() const = 0;
			virtual void meleeAttack() const = 0;

};

#endif
