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
		  if(input < square) break;
  }

  sqrt = sqrt-2;

  cout << sqrt-2 << "^2 < " << input << " < " << sqrt << "^2" << endl;


	
	return 0;
	
}
