#pragma once
#include <iostream>

// Struct for repository

struct REPOSITORY {
	int index = 0;
	std::string name = "";
	std::string description = "";
};

// Struct for repository list

struct REPOSITORY_LIST {
	REPOSITORY repo;
	struct REPOSITORY_LIST* next = NULL;
};


__declspec(selectany) REPOSITORY_LIST* repos = new REPOSITORY_LIST;
void addRepo(REPOSITORY);
REPOSITORY_LIST* getProjectRepos();
void removeProjectRepos();
void initialiseRepos();