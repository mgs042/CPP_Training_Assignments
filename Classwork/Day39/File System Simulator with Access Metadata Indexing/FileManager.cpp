#include<iostream>
#include<FileManager.h>

using namespace std;

FileManager::FileManager()
{
	timestamp = 0;
}

void FileManager::addFile(int id, string name, string user)
{
	FileMeta ob;
	ob.fileName = name;
	ob.ownerUser = user;
	files.insert({ id, ob });
	accessFrequency.insert({ id,0 });
	lastAccessed.insert({ id,timestamp });
	quickLastAccess.insert({ timestamp, id });
	timestamp++;

}
void FileManager::accessFile(int id, string aType, string user)
{
	if (files.find(id) == files.end())
	{
		cout << "Error: File ID " << id << " not found." << endl << endl;
		return;
	}
	accessFrequency[id]++;
	lastAccessed[id] = timestamp;
	userAccessed[user].insert(id);
	accessHistory[id].push_back({ user, aType });
	quickLastAccess.insert({ timestamp,id });
	timestamp++;
}
void FileManager::deleteFile(int id)
{
	if (files.find(id) == files.end())
	{
		cout << "Error: File ID " << id << " not found." << endl;
		return;
	}
	files.erase(id);
	accessFrequency.erase(id);
	lastAccessed.erase(id);
	for (auto p : userAccessed)
	{
		p.second.erase(id);
	}
	accessHistory.erase(id);
	set<pair<int, int>> toBeDeleted;
	for (auto p : quickLastAccess)
	{
		if (p.second == id)
			toBeDeleted.insert(p);
	}
	for (auto p : toBeDeleted)
	{
		quickLastAccess.erase(p);
	}
}

void FileManager::listAll()
{
	cout << "[All Files]" << endl;
	for (auto p : files)
	{
		cout << "ID: " << p.first << " | Name: " << p.second.fileName << " | Owner : " << p.second.ownerUser << endl;
	}

}

void FileManager::listRecent()
{
	cout << "[Recently Accessed Files]" << endl;
	auto itr = quickLastAccess.rbegin();
	if(itr!=quickLastAccess.rend())
		cout << "ID: " << itr->second << " | Name: " << files[itr->second].fileName << " | Last Accessed : " << itr->first << endl;

}

void FileManager::displayFrequency(int id)
{
	if (files.find(id) == files.end())
	{
		cout << "Error: File ID " << id << " not found." << endl;
		return;
	}
	cout << "[Access Frequency]" << endl;
	cout << "File ID: " << id << " | Access Count: " << accessFrequency[id] << endl;
}

void FileManager::listFilesUser(string name)
{
	cout << "[Files Accessed by User: " << name << "]" << endl;
	for (auto fId : userAccessed[name])
	{
		for (auto p : accessHistory[fId])
		{
			if(p.first==name)
				cout << "ID: "<< fId <<" | Name: "<< name <<" | Access Type : "<< p.second << endl;
		}
	}
}