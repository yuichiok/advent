#include <algorithm>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

int main( int argc, char * argv[] )
{
  using namespace std; 


    if(argc!=2){
        cout << "Please enter the name of dataset (ex: day2.txt)" << endl;
        return 0;
    }
    
    // data
    const string input(argv[1]);
    
    // read the data file and
    ifstream data_file(input.c_str());
    if (data_file.fail()) {
        cerr << "cannot open " << input << endl;
        exit(EXIT_FAILURE);
    } else
      cout << " reading data file: " << input << endl;

    string line;
	string subline;
	int checksum = 0;


    while (getline(data_file, line)) {
        if (line.c_str()[0] != 't') {
			
			istringstream iss(line);
			string token;
			int i = 0, n = 0, max = 0, min = 0;

			while (getline(iss, token, '\t')){

					n = atoi(token.c_str());
					if(i==0){
							max = n;
							min = n;
					}else if(max < n){
							max = n;
					}else if(min > n){
							min = n;
					}
					i++;

			}

			checksum += max - min;

        }

    }
    data_file.close();
    
	cout << "checksum = " << checksum << endl;

	
	return 0;
	
}
