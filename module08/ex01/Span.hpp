#ifndef SPAN_H_
# define SPAN_H_

#include <set>

class Span {
	private :
		unsigned int 	_nb_elem;
		std::set<int> 	_set;
	public :
		Span(void);
		Span(unsigned int n);
		Span(const Span& cpy);
		~Span(void);

		Span& operator = (const Span&);

		void 		addNumber(int nb);
		unsigned int 	shortestSpan(void) const;
		unsigned int 	longestSpan(void) const;

		void		addRange(std::set<int>::iterator start, std::set<int>::iterator end);

};

#endif
