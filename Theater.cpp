//I affirm that all code given below was written solely by me
//Esther Tsai, and that any help I received adhered to
//the rules stated for this exam.
#include <iostream>
#include <string>
#include <cmath>
#include <cstdbool>
#include "Movie.h"
#include "Theater.h"
using namespace std;

//sets the name and phone number of the theater
Theater::Theater(string Name, string Phone)
{
	//set the theater name and phone number to the user entered information
	TheaterName = Name;
	PhoneNumber = Phone;
}

//adds a movie at a specific Time
void Theater::AddMovie(Movie& NewMovie)
{
	//stores each of the added movie titles, genres, and showtimes in corresponding array
	MovieName[NumberOfMovies] = NewMovie.getTitle();
	MovieGenre[NumberOfMovies] = NewMovie.getGenre();
	MovieShowtime[NumberOfMovies++] = NewMovie.getShowtime();
}

//get the movie shown at the given hour
string Theater::getMovieForHour(int hour)
{
	bool pass = true;
	if (hour < 0)
	{
		//if the entered in hour is less than 0 which is not possible, set pass equal to false
		pass = false;
	}
	else
		//goes through each movie's showtime and sees if its showtime matches the entered hour
	{
		for (int i = 0; i < NumberOfMovies; i++)
		{
			int showtime = MovieShowtime[i];
			//if the showtime is in the hour or the showtime is after the hour, return the corresponding movie name array
			if (showtime == hour || showtime > hour)
			{
				return MovieName[i];
				break;
			}
			else
			{
				//otherwise pass is false
				pass = false;
			}
		}
	}
	if (pass == false)
	{
		//if pass is false, don't enter in anything
		return "";
	}
}

//get the showtime of the certain movie genre
int Theater::getShowtimeForGenre(string Genre)
{
	bool pass = true;
	for (int i = 0; i < NumberOfMovies; i++)
	{
		//check to see if there is a movie genre that matches the entered in genre
		string genre = MovieGenre[i];
		if (genre == Genre)
		{
			//if the genre is equal to the user entered genre, then return the showtime for that movie
			int showtime = MovieShowtime[i];
			return showtime;
			pass = true;
		}
		else
		{
			//other wise pass is false
			pass = false;
		}
	}
	if (pass == false)
	{
		//returns -1 if the genre is not in the system
		return -1;
	}

}

//return the popcorn price
int Theater::getPopcornPrice()
{
	return PopcornPrice;
}

//return the coke price
int Theater::getCokePrice()
{
	return CokePrice;
}