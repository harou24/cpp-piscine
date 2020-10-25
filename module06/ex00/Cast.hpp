#ifndef CAST_HPP_
# define CAST_HPP_

# include <string>
# include <iostream>
# include <exception>
# include <iomanip>

class Conversion
{
	private:
		std::string _input;

	public:
		Conversion(void);
		Conversion(Conversion & src);
		Conversion(std::string input);
		virtual ~Conversion(void);

		Conversion & operator=(Conversion const & rhs);

		operator char(void) const;
		operator int(void) const;
		operator float(void) const;
		operator double(void) const;

		class ConversionErrorException : public std::exception
		{
			public:
				ConversionErrorException(void);
				ConversionErrorException(ConversionErrorException const & cpy);
				virtual ~ConversionErrorException(void) throw();
				ConversionErrorException & operator=(ConversionErrorException const & old);
				virtual const char* what() const throw();
		};

};

#endif
