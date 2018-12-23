#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <cmath>
#include <limits>

using namespace std;

int main(){

	string line;
	ifstream myfile ("input.txt");
	int token2 = 0;
	int token3 = 0;

	if (myfile.is_open())
	{
		while ( getline(myfile,line) )
		{
			bool isTwo=false;
			bool isThree=false;

			for(int i=0; i<line.size(); i++){

				int count=0;

				for(int j=0; j<line.size(); j++){

					if(line[i]==line[j]){
						count++;
					}

				} // end inner for loop

				if(count==2){
					isTwo = true;
				}
				if(count==3){
					isThree = true;
				}

			} // end outer for loop
			if(isTwo)   token2++;
			if(isThree) token3++;
		} // end while
		myfile.close();
	} // file closed
	else cout << "Unable to open file" << "\n"; 

  cout << "Answer is " << token2 * token3 << "\n";

	return 0;

}
