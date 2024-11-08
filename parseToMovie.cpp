#include <sstream>
#include <iostream>
#include "Movie.hpp"

using namespace film;
using namespace std;

namespace parse {
	Movie parseToMovie(string stringToParse) {
		string title;
		short year;
		stringstream stream;
		stream.str(stringToParse);
		getline(stream, title, ',');
		stream >> year;

		return Movie{ title,year };
	
	}
}