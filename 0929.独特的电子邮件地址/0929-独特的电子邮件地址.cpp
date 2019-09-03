class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
       int total = 0;
	for (vector<string>::iterator it = emails.begin(); it != emails.end(); it++)
	{
		int at_index = it->find("@");
		int add_index = it->find("+");
		int point_index = it->find(".");
		if (add_index != -1)
		{
			if (add_index < at_index)
            {
                it->erase(add_index, at_index - add_index);
                at_index -= (at_index - add_index);
                point_index -= (at_index - add_index);
            }            
			while (point_index != -1&& point_index<at_index)
			{
				at_index = it->find("@");
				it->erase(point_index, 1);
				point_index = it->find(".", point_index-1);
			}
		}
		else if (point_index != -1 && point_index<at_index)
		{
			it->erase(point_index, at_index - point_index);
		}
	}
	vector<string> singleemail;
	for (vector<string>::iterator it = emails.begin(); it != emails.end(); it++)
	{
		if (find(singleemail.begin(), singleemail.end(), *it) == singleemail.end())
			singleemail.push_back(*it);
	}
	total = singleemail.size();
	return total;
    }
};