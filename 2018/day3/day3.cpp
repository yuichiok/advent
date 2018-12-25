#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <cmath>
#include <limits>

using namespace std;

string method(string str) {
	if (str.size() > 0) {
		str = str.substr(0, str.size() - 1);
	}
	return str;
}

int main(){

	string line;
	ifstream myfile ("input.txt");

	if (myfile.is_open())
	{
		while ( getline(myfile,line) )
		{
			istringstream ss(line);
			string temp;
			int count=0;

			while(getline(ss,temp,' '))
			{
				istringstream ss2(temp);
				string test;
				int count2=0;

				if(count==2){
					while(getline(ss2,test,',')){
						if(count2==0){

						}
						count2++;
					}
				}

				count++;

			}
		
		} // end while
		myfile.close();
	} // file closed
	else cout << "Unable to open file" << "\n"; 

	return 0;

}
