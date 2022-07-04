#include <iostream>
#include "Admin.h"

// Function for adding events to the linked list
void addRepo(REPOSITORY event)
{
	REPOSITORY_LIST* temp = new REPOSITORY_LIST();
	temp->repo = event;
	temp->next = repos;
	repos = temp;
}

// Function for getting first Kingdom events
REPOSITORY_LIST* getProjectRepos() {
	REPOSITORY_LIST* temp1 = repos;
	REPOSITORY_LIST* firstKingdomList = new REPOSITORY_LIST;
	while (temp1->next != NULL) {
		if (temp1->repo.index <= 1018) {
			REPOSITORY_LIST* temp2 = new REPOSITORY_LIST();
			temp2->repo = temp1->repo;
			temp2->next = firstKingdomList;
			firstKingdomList = temp2;
		}
		temp1 = temp1->next;
	}
	return firstKingdomList;
}

// Remove First Kingdom events
void removeProjectRepos()
{
	REPOSITORY_LIST* temp = repos;
	REPOSITORY_LIST* prev = NULL;

	if (temp != NULL && temp->repo.index <= 1018)
	{
		repos = temp->next;
		delete temp;
		return;
	}
	else
	{
		while (temp != NULL && temp->repo.index > 1018)
		{
			prev = temp;
			temp = temp->next;
		}
		if (temp == NULL)
		{
			return;
		}
		prev->next = temp->next;
		delete temp;
	}
	return;
}


// Function for initializing events
void initialiseEvents() {
	addRepo({ 1, "text", "text" });
	addRepo({ 1, "text", "text" });
	addRepo({ 1, "text", "text" });
}