#include <iostream>
#include <map>
#include <string>

using namespace std;

//main database that handles everything
class Database {
private:
	map<string, string> db;
	map<string, int> numequal;
public:
	bool Find(const string &name)
	{
		if(db.find(name) == db.end())
			return false;
		return true;
	}
	void Decrement(const string &name)
	{
		numequal[db[name]]--;
		if(numequal[db[name]] == 0)
			numequal.erase(db[name]);
	}

	void set(const string &name, const string &value) {
		if(db.find(name) != db.end())
			Decrement(name);
		db[name] = value;
		numequal[value]++;
	}

	string get(const string &name) {
		if (db.find(name) != db.end())
			return db[name];
		else 
			return "NULL";
	}

	void unset(const string &name) {
		if (db.find(name) != db.end()) {
			Decrement(name);
			db.erase(name);
		}
	}

	int numequalto(const string &value) {
		if (numequal.find(value) != numequal.end()) 
			return numequal[value];
		else 
			return 0;
	}
}; 

Database database;

bool begin() {
	string cmd;
	//stores previous values of changed entries
	map<string, bool> unset_names;
	map<string, string> tempdb;
	while (!cin.eof())
	{
		cin >> cmd;
		if(cmd == "SET")
		{
			string name;
			cin >> name;
			//if previous value has not been stored
			if(tempdb.find(name) == tempdb.end() && unset_names.find(name) == unset_names.end())
			{
				if(database.Find(name))
					tempdb[name] = database.get(name);
				else
					unset_names[name] = true;
			}
			string value;
			cin >> value;
			database.set(name, value);
		}
		else if(cmd == "GET")
		{
			string name;
			cin >> name;
			cout << database.get(name) << endl;
		}
		else if(cmd == "UNSET")
		{
			string name;
			cin >> name;
			//if previous value has not been stored
			if(tempdb.find(name) == tempdb.end() && unset_names.find(name) == unset_names.end())
			{
				if(database.Find(name))
					tempdb[name] = database.get(name);
				else
					unset_names[name] = true;
			}
			database.unset(name);
		}
		else if(cmd == "NUMEQUALTO")
		{
			string value;
			cin >> value;
			cout << database.numequalto(value) << endl;
		}
		else if(cmd == "BEGIN")
		{
			if(begin())
				return true;
		}
		else if(cmd == "ROLLBACK")
		{
			//revert back to previous values
			for(map<string, string>::iterator it = tempdb.begin(); it != tempdb.end(); it++)
				database.set(it->first, it->second);
			for(map<string, bool>::iterator it = unset_names.begin(); it != unset_names.end(); it++)
				database.unset(it->first);
			return false;
		}
		else if(cmd == "COMMIT")
			return true;
	}
	return true;
}

int main()
{
	while(!cin.eof())
	{	
		string cmd;
		cin >> cmd;
		if(cmd == "SET")
		{
			string name;
			cin >> name;
			string value;
			cin >> value;
			database.set (name, value);
		}
		else if (cmd == "GET")
		{
			string name;
			cin >> name;
			cout<<database.get(name)<<endl;
		}

		else if (cmd == "UNSET") {
			string name;
			cin >> name;
			database.unset(name);
		}

		else if (cmd == "NUMEQUALTO") {
			string value;
			cin>>value;
			cout<<database.numequalto(value)<<endl;
		}

		else if (cmd == "END")
			break;

		else if (cmd == "BEGIN") {
			begin();
		}

		else if (cmd == "ROLLBACK") {
			cout<<"NO TRANSACTION"<<endl;
		}

		else if (cmd == "COMMIT") {
			cout<<"NO TRANSACTION"<<endl;
		}
	}
}