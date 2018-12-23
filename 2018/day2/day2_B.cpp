#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <cmath>
#include <limits>

using namespace std;

int main(){

	int pointMax = -1;
	string line1;
	string line2;
	string final_line;
	ifstream myfile1 ("input.txt");
	ifstream myfile2 ("input.txt");

	if (myfile1.is_open()&&myfile2.is_open())
	{
		while ( getline(myfile1,line1) )
		{
			while ( getline(myfile2,line2) ){

				if(line1==line2) continue;

				int point=0;
				string line="";

				for(int i=0; i<line1.size(); i++){

					if(line1[i]==line2[i]){
						point++;
						line.push_back(line1[i]);
					}

				} // end outer for loop

				if(point>pointMax){
					pointMax=point;
					final_line=line;
				}

			} // end of inner while loop

			myfile2.clear();
			myfile2.seekg (0, ios::beg);

		} // end outer while loop
		myfile1.close();
		myfile2.close();
	} // file closed
	else cout << "Unable to open file" << "\n"; 

	cout << "Common letters are \"" << final_line << "\"" << " with pt." << pointMax << "\n";

	return 0;

}
