class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
	map<char, string> morsecode;
	string morse = ".-,-...,-.-.,-..,.,..-.,--.,....,..,.---,-.-,.-..,--,-.,---,.--.,--.-,.-.,...,-,..-,...-,.--,-..-,-.--,--..";
	int findit = morse.find(",", 0);
	int lastfind = 0;
	int ascii = 97;
	morsecode[ascii] = morse.substr(0 , findit - lastfind);
	while (true)
	{			
		lastfind = findit;
		findit = morse.find(",", findit + 1);
		if (findit == morse.npos)
			break;
		morsecode[++ascii] = morse.substr(lastfind+1, findit - lastfind-1);
	}
	morsecode[++ascii] = "--..";
	map<string, int> sametrans;
	for (string eachwords : words)
	{
		string morseencode;
		for (char letter : eachwords)
		{
			morseencode += morsecode[letter];
		}
		sametrans[morseencode] = 1;
	}
	return sametrans.size();
    }
};