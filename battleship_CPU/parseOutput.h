using namespace std;

void parse(ifstream &input, string &cmd, string &msg){
	string ln;
	getline(input, ln);
	std::replace(ln.begin(), ln.end(), '=', ' ');
	stringstream linestream(ln);
	linestream >> cmd >> msg;
};