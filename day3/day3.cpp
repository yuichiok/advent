#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <limits>

int main(void)
{
  using namespace std;

  int input = 0;
  int square = 0;
  int sqrt = 0;

  while(1){
		  cout << "Enter input: ";
		  cin >> input;
		  if( !cin.fail() ) break;
		  cout << "Oops! You must enter a number! \n";
		  cin.clear();    //reset cin value
		  cin.ignore( 1024, '\n' ); //disregard strings
  }

  for(int i=1; i < numeric_limits<int>::max(); i = i+2){
		  sqrt = i;
		  square = i*i;
		  if(input <= square) break;
  }

  sqrt = sqrt-2;
  square = sqrt * sqrt;

  int diff = input - square;
  int side = sqrt+1;
  int k = 0;

  for(int j=1; j < 5; j++){
		  if(diff <= side*j){
				  diff = diff - side*(j-1);
				  break;
		  }
  }

  int radius = (sqrt - 1)/2;

  int hori = radius + 1;
  int vert = 0;

  if(radius - diff > 0){
		  vert = (radius + 1) - diff;
  }else if(radius - diff < 0){
		  vert = diff - (radius + 1);
  }

  int coor = hori + vert;

  cout << coor << endl;

  return 0;
	
}
