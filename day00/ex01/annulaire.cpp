#include "annulaire.hpp"

void add_contact(t_annulaire *phone_book)
{
	if (phone_book->nbr_contacts == 8)
		std::cout << "too much users in database rip\n";
	else
	{
		std::cout << "insert a first name\n";
		std::cin >> phone_book->contacts[phone_book->nbr_contacts].first_name;
		std::cout << "insert a last name\n";
		std::cin >> phone_book->contacts[phone_book->nbr_contacts].last_name;
		std::cout << "insert a nickname\n";
		std::cin >> phone_book->contacts[phone_book->nbr_contacts].nickname;
		std::cout << "insert a phone number\n";
		std::cin >> phone_book->contacts[phone_book->nbr_contacts].phone_nbr;
		std::cout << "and of course his darksest secret\n";
		std::cin >> phone_book->contacts[phone_book->nbr_contacts].dark_secret;
		phone_book->nbr_contacts++;
		std::cout << "added succesfully the contact\n";
	}
}

std::string truncatene(std::string str)
{
	if (str.length() > 10)
	{
	str = str.erase(9, \
    str.length() - 9);
    str.append(".");
	}
    return (str);
}

void search_contact(t_annulaire *phone_book)
{
	int i = 0;
	int temp;

	while (i < phone_book->nbr_contacts)
	{
		std::cout << "|" << std::setw(10) << i << "|"
		<< std::setw(10) << truncatene(phone_book->contacts[i].first_name) << "|"
		<< std::setw(10) << truncatene(phone_book->contacts[i].last_name) << "|"
		<< std::setw(10) << truncatene(phone_book->contacts[i].nickname) << "|" << std::endl;
		i++;
	}
	std::cout << "what id interest you?\n";
	while (1)
	{
		std::cin >> temp;
		if (temp < 0 || temp >= i)
			std::cout << "please insert a valid id\n";
		else
		{
			std::cout << phone_book->contacts[temp].first_name << std::endl
			<< phone_book->contacts[temp].last_name << std::endl
			<< phone_book->contacts[temp].nickname << std::endl
			<< phone_book->contacts[temp].phone_nbr << std::endl
			<< phone_book->contacts[temp].dark_secret << std::endl;
			break;
		}
	}
}

int main()
{
	int need_exit = 0;
	t_annulaire phone_book;
	phone_book.nbr_contacts = 0;

	while (!need_exit)
	{
		std::cout << "ADD  SEARCH  EXIT\n";
		std::string temp;
		std::cin >> temp;
		if (temp == "ADD")
			add_contact(&phone_book);
		else if (temp == "EXIT")
			need_exit = 1;
		else if (temp == "SEARCH")
			search_contact(&phone_book);
	}
}