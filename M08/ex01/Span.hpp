//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########        < Span.hpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2023/12/24 17:59:27 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2023/12/24 17:59:27 by oezzaou
//      ---....... ..  ........... -                                            
//      -+#..     ..   .       .+-.                                             
//       .--.     .     .     ..+.                                              
//         -..    .+--.-.     ...                                               
//         +.... .-+#.#+.    ..-                                                
//          +...#####-++###-..-                                                 
//          #---..----+--.---+##                                                
//        ###-+--.... ....--+#####                                              
//  ##########--#-.......-#-###########      Made By Oussama Ezzaou <OEZZAOU> :)

#ifndef __SPAN_HPP__
# define __SPAN_HPP__

# include <exception>
# include <iostream>
# include <algorithm>
# include <vector>

class	Span
{
	private:
		unsigned int		N;
		std::vector<int>	v;

	public:
		Span(void);
		Span(unsigned int N);
		Span(const Span & span);
		~Span(void);

		Span &	operator=(const Span & span);
		void	addNumber(int nbr);
		int		longestSpan(void);
		int		shortestSpan(void);
};

#endif /*__SPAN_HPP__*/
