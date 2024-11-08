#include <iostream>
#include <sstream>
#include "./Movie.hpp"
#include "./parseToMovie.hpp"

using namespace std;
using namespace film;
using namespace parse;

int main() {
	string testString = "24 s2,2014";
	Movie movie = parseToMovie(testString);

	cout << "Title: " << movie.title << endl;
	cout << "Release year: " << movie.year << endl;

	return 0;
}