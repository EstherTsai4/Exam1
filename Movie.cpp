//I affirm that all code given below was written
//solely by me, Esther Tsai, and that any help I 
//receied adhered to the rules states for this exam.
#include <iostream>
#include <string>
#include "Movie.h"

using namespace std;

//setting up default movie for theater
Movie::Movie()
{
	movieTitle = "Beauty and the Beast";
	movieGenre = "Disney";
	movieShowtime = 0;
}

//set the movie based on what the user entered
Movie::Movie(string NewTitle, string Genre, int Showtime)
{
	movieTitle = NewTitle;
	movieGenre = Genre;
	movieShowtime = Showtime;
}

//return the current movie title
string Movie::getTitle()
{
	return movieTitle;
}

//return the movie genre
string Movie::getGenre()
{
	return movieGenre;
}

//return what the movie is showing
int Movie::getShowtime()
{
	return movieShowtime;
}

