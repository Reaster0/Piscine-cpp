#include <iostream>
#include <string>
#include <iomanip>

typedef struct contact
{
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_nbr;
	std::string dark_secret;
}			t_contact;

typedef struct annulaire
{
	t_contact contacts[8];
	int nbr_contacts;
}			t_annulaire;