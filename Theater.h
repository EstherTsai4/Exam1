#pragma once
#include <string>
#include "Movie.h"
using namespace std;

class Theater
{
	//behaviors
public:
	//constructor that sets the theater name and phone number
	Theater(string Name, string Phone);
	
	//adds movie at a specific time
	void AddMovie(Movie& Movie);

	//gets the movie at the given hour
	string getMovieForHour(int hour);

	//gets the showtime for the movie of a certain genre
	int getShowtimeForGenre(string Genre);

	//gets the popcorn price and coke price
	int getPopcornPrice();
	int getCokePrice();

	//objects
private:
	//should not be able to be changed by user without passing certain requirements
	static const int PopcornPrice = 5;
	static const int CokePrice = 2;
	string TheaterName;
	string PhoneNumber;
	int NumberOfMovies = 0;

public:
	string MovieName[11];
	string MovieGenre[11];
	int MovieShowtime[11];
	
};