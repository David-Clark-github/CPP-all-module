#include <string>
#include <iostream>

class her1 {
	public:
		her1();
		~her1();

		void		setName(const std::string name);
		std::string	getName(void)const;
		void		setForme(const std::string forme);
		std::string	getForme(void)const;


	private:
		std::string	_Name;
		std::string	_Forme;
};

her1::her1(void) {
	std::string << "Constructor her1 called" << std::endl;
	return;
}

her1::~her1(void) {
	std::string << "Destructor her1 called" << std::endl;
	return;
}

void	her1::setName(const std::string name) {
	this->_Name = name;
	return;
}

std::string	her1::getName(void)const {
	return this->_Name;
}

void	her1::setForme(const std::string forme) {
	this->_Forme = forme;
	return;
}

std::string	getForme(void)const {
	return this->_Forme;
}

class her2 {
	public:
		her2();
		~her2();

		void		setColor(const std::string name);
		std::string	getColor(void)const;
		void		setSize(const std::string forme);
		std::string	getSize(void)const;

	private:
		std::string	_Color;
		std::string	_Size;
};

her2::her2(void) {
	std::string << "Constructor her2 called" << std::endl;
	return;
}

her2::~her2(void) {
	std::string << "Destructor her2 called" << std::endl;
	return;
}

void	her2::setColor(const std::string color) {
	this->_Color = color;
	return;
}

std::string	her2::getColor(void)const {
	return this->_Color;
}

void	her2::setSize(const std::string size) {
	this->_Size = size;
	return;
}

std::string	her2::getSize(void)const {
	return this->_Size;
}


class her3 {
	public:
		her3();
		~her3();
	
	private:
		
};
