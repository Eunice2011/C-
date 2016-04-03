#include "TextQuery.h"
#include <iostream>
#include <algorithm>
#include <list>
#include <iterator>
ifstream& open_file(ifstream &in, const string &file) {
	in.close();
	in.clear();
	in.open(file.c_str());
	return in;
}
string make_plural(size_t ctr, const string &word, const string &ending) {
	return (ctr == 1) ? word : word + ending;
}

void print_results(const set<TextQuery::line_no> &locs, const string &query_word, const TextQuery &file) {
	set<TextQuery::line_no>::size_type size = locs.size();
	cout << "\n" << query_word << " occurs "
		<< size << " "
		<< make_plural(size, "time", "s") << endl;
	for (set<TextQuery::line_no>::const_iterator it = locs.begin(); it != locs.end(); ++it) {
		cout << "\t(line " << (*it) + 1 << ") "
			<< file.text_line(*it) << endl;
	}
}

int main(int argc, char **argv) {
	

	return 0;
}