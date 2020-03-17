#ifndef RESSOURCE_H
#define RESSOURCE_H
#include <SFML/Graphics.hpp>
#include <unordered_map> //unordered_map
#include <string> //string
#include <memory> //unique_ptr

class RessourceManager
{
public : 
	void load(const int& id, sf::Texture texture); 
	sf::Texture& get(const int& id) const; 

private: 

	std::unordered_map<int, std::unique_ptr<sf::Texture>> _map; 


};

#endif

