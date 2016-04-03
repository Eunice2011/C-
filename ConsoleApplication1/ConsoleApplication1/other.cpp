/*ifstream infile;
if (argc < 2 || !open_file(infile,argv[1])) {
cerr << "No input file!" << endl;
return EXIT_FAILURE;
}

TextQuery tq;
tq.read_file(infile);
while (true){
cout << "enter word to look for,or q to quit" << endl;
string s;
cin >> s;
if (!cin || s == "q")
break;
set<TextQuery::line_no> locs = tq.run_query(s);
print_results(locs, s, tq);
}*/

/*list<string> roster1, roster2;
cout << "Enter elements for roster1:" << endl;
string ss;
while (getline(cin, ss)) {
if (ss == "quit")
break;
roster1.push_back(ss);
}
cout << "Enter elements for roster2:" << endl;
string s1;
while (getline(cin, s1)) {
if (s1 == "quit")
break;
roster2.push_back(s1);
}
cout << "roster1:" << endl;
for (list<string>::iterator it1 = roster1.begin(); it1 != roster1.end(); ++it1)
cout << *it1 << " ";
cout << endl;
cout << "roster2:" << endl;
for (list<string>::iterator it2 = roster2.begin(); it2 != roster2.end(); ++it2)
cout << *it2 << " ";
cout << endl;

list<string>::iterator it = roster1.begin();
size_t cnt = 0;
while ((it = find_first_of(it, roster1.end(),
roster2.begin(), roster2.end()))
!= roster1.end()) {
cnt++;
it++;
}

cout << "Found " << cnt
<< " names on both rosters" << endl;*/
/*vector<int> ivec;
fill_n(back_inserter(ivec), 10, 0);
cout << ivec.capacity() << endl;
for (vector<int>::iterator it = ivec.begin(); it != ivec.end(); ++it)
cout << *it << " ";*/
//list<int> list1, list2,list3,list4;
//for (int i = 1; i != 11; ++i)
//	list1.push_back(i);
//cout << "List1:" << endl;
//for (list<int>::iterator it = list1.begin(); it != list1.end(); ++it)
//	cout << *it << " ";
///*iterator*/
//replace_copy(list1.begin(),list1.end(),inserter(list2,list2.begin()),6,66);
//cout << "\nList2(iterator):" << endl;
//for (list<int>::iterator it = list2.begin(); it != list2.end(); ++it)
//	cout << *it << " ";
///*front_iterator*/
//replace_copy(list1.begin(), list1.end(), front_inserter(list3), 6, 66);
//cout << "\nList3(front_iterator):" << endl;
//for (list<int>::iterator it = list3.begin(); it != list3.end(); ++it)
//	cout << *it << " ";
//cout << "\nList4(back_iterator):" << endl;
//replace_copy(list1.begin(), list1.end(), back_inserter(list4), 6, 66);
//for (list<int>::iterator it = list4.begin(); it != list4.end(); ++it)
//	cout << *it << " ";
/*list<int> list1;
vector<int> ivec;
for (int i = 1; i != 10; ++i) {
list1.push_back(i);
list1.push_back(i);
}
unique_copy(list1.begin(), list1.end(), back_inserter(ivec));
cout << "list1:";
for (list<int>::iterator it = list1.begin(); it != list1.end(); ++it)
cout << *it << " ";
cout << "\nivec:";
for (vector<int>::iterator it = ivec.begin(); it != ivec.end(); ++it)
cout << *it << " ";*/

//istream_iterator<int> cin_it(cin), eof;
//ofstream oddstream, evenstream;
//oddstream.open("oddnumber.txt");
//evenstream.open("evennumber.txt");
//ostream_iterator<int> odd(oddstream, " ");
//ostream_iterator<int> even(evenstream, " ");
//while (cin_it != eof) {
//	if (*cin_it % 2 == 0)
//		*odd++ = *cin_it++;
//	else
//		*even++ = *cin_it++;
//}*/