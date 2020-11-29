#ifndef SPAN_H_
# define SPAN_H_

#include <vector>

class Span {
	private :
		unsigned int 	_nb_elem;
		std::vector<int> 	_set;

	public :
		Span(void);
		Span(unsigned int n);
		Span(const Span& cpy);
		~Span(void);

		Span& operator = (const Span&);

		void 		addNumber(int nb);
		unsigned int 	shortestSpan(void) const;
		unsigned int 	longestSpan(void) const;

		void		addRange(std::vector<int>::iterator start, std::vector<int>::iterator end);
		std::vector<int> &getSet(void);

};
std::ostream& operator << (std::ostream& output, Span & sp);
#endif
