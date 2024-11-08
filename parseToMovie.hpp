#ifndef PARSE_H
#define PARSE_H

#include "./Movie.hpp"
#include <string>

namespace parse {
	film::Movie parseToMovie(std:: string stringToParse);
}


#endif