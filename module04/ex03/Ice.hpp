#ifndef ICE_H_
# define ICE_H_

class Ice : public AMateria {
		
		public : 
			Ice(void);
			Ice(const Ice &ice);
			~Ice(void);

			Ice& operator = (const Ice &ice);

			AMateria* clone() const;
			virtual void use(ICharacter& target);


};

#endif
