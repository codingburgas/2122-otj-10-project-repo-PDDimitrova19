#include <iostream>
#include "Admin.h"

// Function for adding events to the linked list
void addRepo(REPOSITORY repo)
{
	REPOSITORY_LIST* temp = new REPOSITORY_LIST();
	temp->repo = repo;
	temp->next = repos;
	repos = temp;
}

// Function for getting first Kingdom events
REPOSITORY_LIST* getProjectRepos() {
	REPOSITORY_LIST* temp1 = repos;
	REPOSITORY_LIST* repositories = new REPOSITORY_LIST;
	while (temp1->next != NULL) {
		if (temp1->repo.index <= 1000) {
			REPOSITORY_LIST* temp2 = new REPOSITORY_LIST();
			temp2->repo = temp1->repo;
			temp2->next = repositories;
			repositories = temp2;
		}
		temp1 = temp1->next;
	}
	return repositories;
}

// Remove First Kingdom events
void removeProjectRepos()
{
	REPOSITORY_LIST* temp = repos;
	REPOSITORY_LIST* prev = NULL;

	if (temp != NULL && temp->repo.index <= 1000)
	{
		repos = temp->next;
		delete temp;
		return;
	}
	return;
}


// Function for initializing events
void initialiseRepos() {
	addRepo({ 13, "PIPetkova19/Xenon", "We are team Xenon! We can take instructions from all levels and build up good working relationships. Our task is/was to create a C++ Maze Game." });
	addRepo({ 21, "VYKostova19/AZ - 3", "The main goal of our project is to present C++ Maze Game. We have created an awesome algorithm and an easy to use and understand styled UI." });
	addRepo({ 1, "text", "text" });
}