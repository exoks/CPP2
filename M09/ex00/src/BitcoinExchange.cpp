//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+#####< BitcoinExchange.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2023/12/20 15:07:07 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2023/12/20 15:07:07 by oezzaou
//      ---....... ..  ........... -                                            
//      -+#..     ..   .       .+-.                                             
//       .--.     .     .     ..+.                                              
//         -..    .+--.-.     ...                                               
//         +.... .-+#.#+.    ..-                                                
//          +...#####-++###-..-                                                 
//          #---..----+--.---+##                                                
//        ###-+--.... ....--+#####                                              
//  ##########--#-.......-#-###########      Made By Oussama Ezzaou <OEZZAOU> :)

# include "BitcoinExchange.hpp"

//====< constructor >===========================================================
BitcoinExchange::BitcoinExchange(void)
{
}

//====< constructor >===========================================================
BitcoinExchange::BitcoinExchange(std::string fileName)
{
	this->fileName = fileName;
}

//====< copy constructor >======================================================
BitcoinExchange::BitcoinExchange(const BitcoinExchange & be)
{
	*this = be;
}

//====< Destructor >============================================================
BitcoinExchange::~BitcoinExchange(void)
{
}

//====< operator= >=============================================================
BitcoinExchange & BitcoinExchange::operator=(const BitcoinExchange & be)
{
	this->fileName = be.fileName;
	return (*this);
}

//====< exchange >==============================================================
void	BitcoinExchange::exchange(void)
{
	prs::KeyValueParser<std::string, double, ','>	data("data/data.csv");
	prs::KeyValueParser<std::string, double>		input(fileName);
	std::pair<std::string, double>					kv;
	std::map<std::string, double>					db;

	db = data.parseFile();
	while (true)
	{
		kv = input.parseNextLine();
		if (input.eof() == true)
			break ;
		else if (prs::isValidDate(kv.first) == false)
			std::cout << "Error: bad input " + kv.first	<< std::endl;
		else if (kv.second < 0)
			std::cout << "Error: not a positive number" << std::endl;
		else if (kv.second > INT_MAX)
			std::cout << "Error: too large a number."	<< std::endl;
		else
			std::cout	<< kv.first	<< " => " << kv.second << " = " 
						<< db.lower_bound(kv.first)->second * kv.second
						<< std::endl;
	}
}






































/*
//====< constructor >===========================================================
BitcoinExchange::BitcoinExchange(std::string fileName)
{
	this->fileName = fileName;
}

//====< setFileName >===========================================================
void		BitcoinExchange::setFileName(std::string fileName)
{
	this->fileName = fileName;
}

//====< getFileName >===========================================================
std::string	BitcoinExchange::getFileName(void) const
{
	return (fileName);
}
*/
