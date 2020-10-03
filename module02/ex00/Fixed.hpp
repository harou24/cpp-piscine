#ifndef FIXED_H
# define FIXED_H

class Fixed {
	private :
			int	_fixedPointValue;
			static const int _fractionalBits;

	public :
			Fixed(void);
			Fixed(const Fixed &f);
			Fixed& operator = (const Fixed &f);
			~Fixed(void);

			int	getRawBits() const;
			void setRawBits(const int fpv);
};

#endif
