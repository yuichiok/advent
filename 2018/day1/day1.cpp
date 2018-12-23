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
	vector<int> InputVec;
	ifstream myfile ("input.txt");
	int token = 0;
	int nrun = 0;
	bool check=false;

	if (myfile.is_open())
	{
		while(!check){
			nrun += 1;
			while ( getline(myfile,line) )
			{
				int number = stoi(line);
				token += number;

				for(int i=0; i<InputVec.size(); i++){
					if(InputVec[i]==token) check = true;
				}

				if(check) break;
				InputVec.push_back(token);
			}
			if(nrun==1) cout << "Answer1 is " << token << "\n";
			myfile.clear();
			myfile.seekg (0, ios::beg);
		}
		myfile.close();
	}
	else cout << "Unable to open file" << "\n"; 

	cout << "Answer2 is " << token << "\n";


	return 0;

}
