#include "annulaire.hpp"

void add_contact(t_annulaire *phone_book)
{
	if (phone_book->nbr_contacts == 8)
		std::cout << "too much users in database rip" << std::endl;
	else
	{
		std::cout << "insert a first name" << std::endl;
		std::cin >> phone_book->contacts[phone_book->nbr_contacts].first_name;
		std::cout << "insert a last name" << std::endl;
		std::cin >> phone_book->contacts[phone_book->nbr_contacts].last_name;
		std::cout << "insert a nickname" << std::endl;
		std::cin >> phone_book->contacts[phone_book->nbr_contacts].nickname;
		std::cout << "insert a phone number" << std::endl;
		std::cin >> phone_book->contacts[phone_book->nbr_contacts].phone_nbr;
		std::cout << "and of course his darksest secret" << std::endl;
		std::cin >> phone_book->contacts[phone_book->nbr_contacts].dark_secret;
		phone_book->nbr_contacts++;
		std::cout << "added succesfully the contact" << std::endl;
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
	int tempint;

	while (i < phone_book->nbr_contacts)
	{
		std::cout << "|" << std::setw(10) << i << "|"
		<< std::setw(10) << truncatene(phone_book->contacts[i].first_name) << "|"
		<< std::setw(10) << truncatene(phone_book->contacts[i].last_name) << "|"
		<< std::setw(10) << truncatene(phone_book->contacts[i].nickname) << "|" << std::endl;
		i++;
	}
	std::cout << "what id interest you?" << std::endl;
	std::cin >> tempint;
	if (tempint < 0 || tempint >= i)
		std::cout << "please insert a valid id" << std::endl;
	else
	{
		std::cout << phone_book->contacts[tempint].first_name << std::endl
				  << phone_book->contacts[tempint].last_name << std::endl
				  << phone_book->contacts[tempint].nickname << std::endl
				  << phone_book->contacts[tempint].phone_nbr << std::endl
				  << phone_book->contacts[tempint].dark_secret << std::endl;
	}
	std::cin.clear();
}

int main()
{
	t_annulaire phone_book;
	phone_book.nbr_contacts = 0;
	std::string temp;

	while (1)
	{
		std::cout << "ADD  SEARCH  EXIT" << std::endl;
		std::cin >> temp;
		if (temp == "ADD")
			add_contact(&phone_book);
		else if (temp == "EXIT")
			break;
		else if (temp == "SEARCH")
			search_contact(&phone_book);
	}
}